#include "FilmOperations.h"

void FilmOperations::addFilm(Film& film)
{
	QSqlQuery add;
	add.prepare(
		"INSERT INTO Films (Title, DirectorId, CatId, Count, Dates, SagaId, Year, Rate)\
		VALUES (:Title, :DirectorId, :CatId, :Count, :Dates, :SagaId, :Year, :Rate)");

	add.bindValue(":Title",			film.getName());
	add.bindValue(":DirectorId",	film.getDirector());
	add.bindValue(":CatId",			film.getCat());
	add.bindValue(":Count",			film.getCount());
	add.bindValue(":Dates",			film.getDates());
	add.bindValue(":SagaId", 		film.getSaga());
	add.bindValue(":Year",			film.getYear());
	add.bindValue(":Rate",			film.getRate());
	add.finish();

	if (add.exec()) {
		qDebug() << "Record inserted successfully";
	}
	else {
		qDebug() << "Error: " << add.lastError().text();
	}
}

void FilmOperations::addDate(QString date, int id)
{
	QSqlQuery add;
	add.prepare("INSERT INTO Watchings (Date, FilmId) Values (:Date, :FilmId)");
	add.bindValue(":Date", date);
	add.bindValue(":FilmId", id);
	add.finish();

	if (add.exec()) {
		qDebug() << "Record inserted successfully";
	}
	else {
		qDebug() << "Error: " << add.lastError().text();
	}
}

int FilmOperations::findItem(const QString item, Database dbt)
{
	int index = static_cast<int>(dbt);
	QSqlQueryModel itemModel;
	itemModel.setQuery("SELECT " + types[index][2] + " FROM " + types[index][0] + " WHERE " + types[index][1] + " = '" + item + "'");
	return itemModel.data(itemModel.index(0, 0)).toInt();
}

void FilmOperations::deleteItem(const int id, Database dbt)
{
	int index = static_cast<int>(dbt);
	QSqlQueryModel del;
	del.setQuery("DELETE FROM " + types[index][0] + " WHERE " + types[index][2] + " = " + QString::number(id));
}

void FilmOperations::addItem(const QString item, Database dbt)
{
	int index = static_cast<int>(dbt);
	QSqlQuery add;
	add.prepare("INSERT INTO " + types[index][0] + " (" + types[index][1] + ")VALUES(:Cat)");
	add.bindValue(":Cat", item);
	add.finish();
	add.exec();
}

QSqlQueryModel* FilmOperations::getDates(const int id)
{
	QSqlQueryModel* dates = new QSqlQueryModel();
	dates->setQuery("SELECT Date FROM Watchings WHERE FilmId = '" + QString::number(id) + "'");

	if (dates->lastError().isValid()) {
		qDebug() << "Query Error:" << dates->lastError().text();
	}

	return dates;
}

int FilmOperations::emptyFilm()
{
	QSqlQuery query;
	query.prepare("INSERT INTO Films (Title, DirectorId, CatId, Count, Dates, SagaId, Year, Rate)\
				   VALUES (NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL)");
	query.finish();
	query.exec();
	return 0;
}