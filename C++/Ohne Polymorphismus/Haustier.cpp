#include "Haustier.h"

void Haustier::schreibeName()
{
	cout << name << endl;
}

Haustier::Haustier(HaustierArt typ, string name)
{
	this->type = typ;
	this->name = name;
}

void Haustier::fressen()
{
	switch (type)
	{
	case HaustierArt::HUND:
		cout << "Knochen nagen" << endl;
		break;
	case HaustierArt::KATZE:
		cout << "Maus fressen" << endl;
		break;
	case HaustierArt::WELLENSITTICH:
		cout << "Korn fressen" << endl;
		break;
	}
}

void Haustier::freuen()
{
	switch (type)
	{
	case HaustierArt::HUND:
		cout << "wedeln" << endl;
		break;
	case HaustierArt::KATZE:
		cout << "schnurren" << endl;
		break;
	case HaustierArt::WELLENSITTICH:
		cout << "wippen" << endl;
		break;
	}
}

void Haustier::lautGeben()
{
	switch (type)
	{
	case HaustierArt::HUND:
		cout << "bellen" << endl;
		break;
	case HaustierArt::KATZE:
		cout << "miauen" << endl;
		break;
	case HaustierArt::WELLENSITTICH:
		cout << "zwitschern" << endl;
		break;
	}
}
