#include "HaustierFactory.h"
#include "Hund.h"
#include "Katze.h"
#include "Wellensittich.h"

Haustier* HaustierFactory::erstelleHaustier(HaustierArt art, string name)
{
	switch (art) {
	case HaustierArt::HUND:
		return new Hund(name);
		break;
	case HaustierArt::KATZE:
		return new Katze(name);
		break;
	case HaustierArt::WELLENSITTICH:
		return new Wellensittich(name);
		break;
	}

}
