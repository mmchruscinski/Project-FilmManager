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
												{"Watchings",		"Date",			"WatchId"} };

class FilmOperations
{
public:
	enum Database {
		DIRECTOR	= 0,
		CAT			= 1,
		SAGA		= 2,
		DATE		= 3
	};

	static void addFilm(Film& film);
	static int findItem(const QString item, Database dbt);
	static void deleteFilm(const int id);
	static void addItem(const QString item, Database dbt);
	static QSqlQueryModel* getDates(const int id);
};

