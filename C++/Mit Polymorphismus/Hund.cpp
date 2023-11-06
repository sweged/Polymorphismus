#include "Hund.h"
#include <iostream>

void Hund::fressen()
{
	cout << "Knochen nagen" << endl;
}

void Hund::lautGeben()
{
	cout << "bellen" << endl;
}

void Hund::freuen()
{
	cout << "wedeln" << endl;
}

Hund::Hund(string name)
{
	this->name = name;
}