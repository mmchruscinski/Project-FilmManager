#pragma once

#include<Film.h>
#include <qsqlerror.h>
#include <QtSql/qsqldatabase>
#include <QtSql/qsqlquerymodel.h>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>
#include <vector>

static std::vector<std::vector<QString>> types{ {"Directors",		"Name"},
										 {"Cathegories",	"Cat"},
										 {"Sagas",			"SagaName"},
										 {"Watchings",		"Date"} };

class FilmOperations
{
public:
	enum class Database {
		DIRECTOR	= 0,
		CAT			= 1,
		SAGA		= 2,
		DATE		= 3
	};

	static void addFilm(Film& film);
	static int findAuthor(const QString director);
	static int findItem(const QString item, const QString base);
	static void deleteFilm(const int id);
	static void addItem(const QString item, Database dbt);
};

