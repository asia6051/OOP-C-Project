#pragma once
#include "Pacjent.h"
#include<string>
#include <iostream>
using namespace std;

class Kalendarz
{
public:

	//konstruktor
	Kalendarz(string termin, string godzina, Pacjent* pacjent) {
		this->termin = termin;
		this->godzina = godzina;
		this->pacjent = pacjent;
	}

	string termin;
	string godzina;
	Pacjent* pacjent;

	void zmien_termin(string termin, string godzina) {
		this->termin = termin;
		this->godzina = godzina;
		cout << "Zmieniono termin wizyty na: " << termin << " " << godzina << endl;
	}
	//destruktor
	~Kalendarz() {
		"Ta zaplanowana wizyta juz nie istnieje\n";
	}
};
