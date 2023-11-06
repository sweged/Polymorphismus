#pragma once
#include <string>
#include <iostream>
#include "HaustierArt.h"

using namespace std;

class Haustier
{
public:
	void fressen();
	void lautGeben();
	void freuen();
	void schreibeName();

	Haustier(HaustierArt typ, string name);

protected:
	string name;
	HaustierArt type;
};

