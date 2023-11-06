#pragma once
#include <string>

using namespace std;

class Haustier
{
public:
	virtual void fressen() = 0;
	virtual void lautGeben() = 0;
	virtual void freuen() = 0;
	void schreibeName();

protected:
	string name;
};

