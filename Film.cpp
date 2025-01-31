#include "Film.h"

Film::Film() {}

Film::Film(const int id) : _id(id) {};

Film::Film(const QString name, const int director, const QString dates, const int cat, const int count) :
	_name(name), _director(director), _dates(dates), _cat(cat), _count(count) {};

QString Film::getName()		{ return _name; };
int Film::getDirector()		{ return _director; };
QString Film::getDates()	{ return _dates; };
int Film::getId()			{ return _id; };
int Film::getCat()			{ return _cat; };
int Film::getCount()		{ return _count; };