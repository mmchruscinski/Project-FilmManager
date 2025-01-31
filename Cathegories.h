#pragma once

#include <QWidget>
#include "ui_Cathegories.h"
#include <qsqlquerymodel.h>
#include <qsortfilterproxymodel.h>
#include <FilmOperations.h>

class Cathegories : public QWidget
{
	Q_OBJECT

public:
	Cathegories(QWidget *parent = nullptr);
	~Cathegories();

	void setTable();

private:
	Ui::CathegoriesClass ui;
	QSqlQueryModel* modelCats = new QSqlQueryModel;
	QSortFilterProxyModel* proxymodel = new QSortFilterProxyModel;
	int selectedId;

public slots:
	void addCat();

};
