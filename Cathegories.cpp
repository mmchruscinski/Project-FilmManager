#include "Cathegories.h"

Cathegories::Cathegories(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setTable();
}

Cathegories::~Cathegories()
{}

void Cathegories::setTable()
{
	modelCats->setQuery("SELECT Cat FROM Cathegories");
	modelCats->setHeaderData(0, Qt::Horizontal, "Nazwa kategorii");
	proxymodel->setSourceModel(modelCats);
	ui.tableView->setModel(proxymodel);
	ui.tableView->setSortingEnabled(true);
	ui.tableView->setColumnWidth(0, 300);
}

//public slots

void Cathegories::addCat()
{
	FilmOperations::addItem(ui.lineEdit->text(), "Cathegories");
	setTable();
}
