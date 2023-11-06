#include "Wellensittich.h"

#include <iostream>

void Wellensittich::fressen()
{
	cout << "Korn fressen" << endl;
}

void Wellensittich::lautGeben()
{
	cout << "zwitschern" << endl;
}

void Wellensittich::freuen()
{
	cout << "wippen" << endl;
}

Wellensittich::Wellensittich(string name)
{
	this->name = name;
}