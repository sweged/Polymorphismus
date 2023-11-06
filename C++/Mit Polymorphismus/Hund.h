#pragma once
#include "Haustier.h"
class Hund :
    public Haustier
{
public:
	virtual void fressen();
	virtual void lautGeben();
	virtual void freuen();

	Hund(string name);
};

