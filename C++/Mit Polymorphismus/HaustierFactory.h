#pragma once
#include "Haustier.h"
#include "HaustierArt.h"

class HaustierFactory
{
public:
	static Haustier* erstelleHaustier(HaustierArt art, string name);
};

