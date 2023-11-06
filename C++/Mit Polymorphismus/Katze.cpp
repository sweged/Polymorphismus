#include "Katze.h"

#include <iostream>

void Katze::fressen()
{
	cout << "Maus fressen" << endl;
}

void Katze::lautGeben()
{
	cout << "miauen" << endl;
}

void Katze::freuen()
{
	cout << "schnurren" << endl;
}

Katze::Katze(string name)
{
	this->name = name;
}