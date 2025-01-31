#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    setDatabase();

    setTable();

    FilmOperations filmhelper;
}

MainWindow::~MainWindow()
{}

void MainWindow::setDatabase()
{
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/MyData/Repos/IT/Project-FilmManager/FilmManager/out/build/Films.db");

    if (mydb.open()) {
        qDebug() << "is open!";
    }
    else {
        qDebug() << "not found";
    }
}

void MainWindow::setTable()
{
    modelFilms->setQuery(
        "SELECT FilmId, Title, Name, Cat, Dates FROM Films\
        INNER JOIN Directors ON Films.DirectorID = Directors.DirectorId\
        INNER JOIN Cathegories ON Films.CatId = Cathegories.CatId"
    );
    if (modelFilms->lastError().isValid()) {
        qDebug() << "SQL Query Error:" << modelFilms->lastError().text();
    }
    modelFilms->setHeaderData(0, Qt::Horizontal, "Id");
    modelFilms->setHeaderData(1, Qt::Horizontal, "Tytu³");
    modelFilms->setHeaderData(2, Qt::Horizontal, "Re¿yser");
    modelFilms->setHeaderData(3, Qt::Horizontal, "Kategoria");
    modelFilms->setHeaderData(4, Qt::Horizontal, "Obejrzenia");

    proxymodel->setSourceModel(modelFilms);
    ui.tableView->setModel(proxymodel);
    ui.tableView->setSortingEnabled(true);
    ui.tableView->setColumnWidth(0, 30);
    ui.tableView->setColumnWidth(1, 250);
    ui.tableView->setColumnWidth(2, 200);
    ui.tableView->setColumnWidth(3, 130);
    ui.tableView->setColumnWidth(4, 101);
    ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    
    //ui.tableView->show();
    qDebug() << "set the table";
}

//Public slots

void MainWindow::addWindow()
{
    AddWindow* addwin = new AddWindow();
    connect(addwin, &AddWindow::acceptSignal, this, &MainWindow::setTable);
    addwin->show();
}

void MainWindow::catWindow()
{
    Cathegories* catwin = new Cathegories();
    catwin->show();
}

void MainWindow::selectId(const QModelIndex &index)
{
    QModelIndex sortedIndex = proxymodel->index(index.row(), 0);
    QModelIndex sourceIndex = proxymodel->mapToSource(sortedIndex);
    selectedID = sourceIndex.data().toInt();
    qDebug() << selectedID;
}

void MainWindow::deleteFilm()
{
    FilmOperations::deleteFilm(selectedID);
    setTable();
}