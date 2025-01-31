#include "Film.h"

Film::Film() {}

Film::Film(const int id) : _id(id) {};

Film::Film(const QString name, const int director, const QString dates, const int cat, const int count, const int saga, const int year, const int rate) :
	_name(name), _director(director), _dates(dates), _cat(cat), _count(count), _saga(saga), _year(year), _rate(rate) 
{};

QString Film::getName()		{ return _name; };
int Film::getDirector()		{ return _director; };
QString Film::getDates()	{ return _dates; };
int Film::getId()			{ return _id; };
int Film::getCat()			{ return _cat; };
int Film::getCount()		{ return _count; };
int Film::getSaga()			{ return _saga; };
int Film::getYear()			{ return _year; };
int Film::getRate()			{ return _rate; };