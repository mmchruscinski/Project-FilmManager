#pragma once

#include<Film.h>
#include <qsqlerror.h>
#include <QtSql/qsqldatabase>
#include <QtSql/qsqlquerymodel.h>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>

class FilmOperations
{
public:
	static void addFilm(Film& film);
	static int findAuthor(const QString director);
	static int findItem(const QString item, const QString base);
	static void deleteFilm(const int id);
	static void addItem(const QString item, const QString base);
};

