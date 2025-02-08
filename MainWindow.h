#pragma once

#include <QtWidgets/QWidget>
#include "ui_MainWindow.h"
#include <QtSql/qsqldatabase>
#include <QtSql/qsqlquerymodel.h>
#include <QtSql/qsqldatabase.h>
#include <qsortfilterproxymodel.h>
#include <qdebug.h>
#include <qsqlerror.h>
#include "AddWindow.h"
#include <Film.h>
#include <FilmOperations.h>
#include <qcompleter.h>
#include <QCompleter>
#include <Cathegories.h>
#include <colordelegate.h>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    
    ~MainWindow();

    void setDatabase();

    void setTable();

    void setStats(int id);

private:
    Ui::MainWindowClass ui;
    QSqlDatabase mydb;
    QSqlQueryModel* modelFilms = new QSqlQueryModel;
    QSortFilterProxyModel* proxymodel = new QSortFilterProxyModel;
    int selectedID;

public slots:
    void addWindow();

    void catWindow();

    void selectId(const QModelIndex &index);

    void deleteFilm();

    void addWatching();
};
