#pragma once
#include "Haustier.h"
class Wellensittich :
    public Haustier
{
public:
	virtual void fressen();
	virtual void lautGeben();
	virtual void freuen();

	Wellensittich(string name);
};

