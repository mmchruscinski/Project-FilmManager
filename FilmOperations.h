#pragma once

#include<Film.h>
#include <qsqlerror.h>
#include <QtSql/qsqldatabase>
#include <QtSql/qsqlquerymodel.h>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>
#include <vector>

static std::vector<std::vector<QString>> types{ {"Directors",		"Name",			"DirectorId"},
												{"Cathegories",		"Cat",			"CatId"},
												{"Sagas",			"SagaName",		"SagaId"},
												{"Watchings",		"Date",			"WatchId"},
												{"Films",			"Title",		"FilmId"} };
// "SELECT " + types[index][2] + " FROM " + types[index][0] + " WHERE " + types[index][1] + " = '" + item + "'"

class FilmOperations
{
public:
	enum Database {
		DIRECTOR	= 0,
		CAT			= 1,
		SAGA		= 2,
		DATE		= 3,
		FILM		= 4
	};

	static void addFilm(Film& film);
	static void addDate(QString date, int id);
	static int findItem(const QString item, Database dbt);
	static void deleteItem(const int id, Database dbt);
	static void addItem(const QString item, Database dbt);
	static QSqlQueryModel* getDates(const int id);
	static int emptyFilm();
};

