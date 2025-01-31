#include "FilmOperations.h"

void FilmOperations::addFilm(Film& film)
{
	QSqlQuery add;
	add.prepare(
		"INSERT INTO Films (Title, DirectorId, CatId, Count, Dates)\
		VALUES (:Title, :DirectorId, :CatId, :Count, :Dates)");

	add.bindValue(":Title",			film.getName());
	add.bindValue(":DirectorId",	film.getDirector());
	add.bindValue(":CatId",			film.getCat());
	add.bindValue(":Count",			film.getCount());
	add.bindValue(":Dates",			film.getDates());

	add.finish();

	if (add.exec()) {
		qDebug() << "Record inserted successfully";
	}
	else {
		qDebug() << "Error: " << add.lastError().text();
	}
}

int FilmOperations::findAuthor(const QString director)
{
	QSqlQueryModel author;
	author.setQuery("SELECT DirectorId FROM Directors WHERE Name = '" + director + "'");
	return author.data(author.index(0, 0)).toInt();;
}

int FilmOperations::findItem(const QString item, const QString base)
{
	QSqlQueryModel itemModel;
	itemModel.setQuery("SELECT CatId FROM " + base + " WHERE Cat = '" + item + "'");
	return itemModel.data(itemModel.index(0, 0)).toInt();
}

void FilmOperations::deleteFilm(const int id)
{
	QSqlQuery del;
	del.prepare("DELETE FROM Films WHERE FilmId = :ID");
	del.bindValue(":ID", id);
	del.finish();

	if (del.exec()) { qDebug() << "Record deleted successfully"; }
	else { qDebug() << "Error: " << del.lastError().text(); }
}

void FilmOperations::addItem(const QString item, const QString base)
{
	QString column;

	if (base == "Directors") column = "Name";
	else column = "Cat";

	QSqlQuery add;
	add.prepare("INSERT INTO " + base + " (" + column + ")VALUES(:Cat)");
	add.bindValue(":Cat", item);
	add.finish();
	add.exec();
}