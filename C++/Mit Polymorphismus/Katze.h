#pragma once
#include "Haustier.h"
class Katze :
    public Haustier
{
public:
	virtual void fressen();
	virtual void lautGeben();
	virtual void freuen();

	Katze(string name);
};

