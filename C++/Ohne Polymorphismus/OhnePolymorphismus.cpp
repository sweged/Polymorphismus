// Polymorphismus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <list>
#include "Haustier.h"
#include "HaustierArt.h"



int main()
{
    Haustier* h1 = new Haustier(HaustierArt::HUND, "Bello");
    Haustier* h2 = new Haustier(HaustierArt::KATZE, "Mietze");
    Haustier* h3 = new Haustier(HaustierArt::WELLENSITTICH, "Hansi");
    Haustier* h4 = new Haustier(HaustierArt::HUND, "Lopi");

    list<Haustier*> haustiere;
    haustiere.push_back(h1);
    haustiere.push_back(h2);
    haustiere.push_back(h3);
    haustiere.push_back(h4);

    for (auto haustier : haustiere)
    {
        haustier->schreibeName();
        haustier->fressen();
        haustier->freuen();
        haustier->lautGeben();
        cout << endl;
    }
}