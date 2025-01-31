#pragma once

#include<qstring.h>

class Film
{
private:
	QString _name;
	QString _dates;
	int _director;
	int _id;
	int _cat;
	int _count;
	int _rate;
	int _saga;
	int _year;

public:
	Film();
	Film(const int id);
	Film(const QString name,
		const int director,
		const QString dates,
		const int cat,
		const int count,
		const int saga,
		const int year,
		const int rate);

	QString getName();
	int getDirector();
	QString getDates();
	int getId();
	int getCat();
	int getCount();
	int getSaga();
	int getYear();
	int getRate();


};

