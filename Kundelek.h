#pragma once
#include "Pies.h"
#include<string>
#include <iostream>
using namespace std;

class Kundelek : Pies
{
private:
	string w_typie;
public:
	void wyswietl() {
		Pies::wyswietl();
		cout << "W typie " << w_typie << endl;
	}
	Kundelek(int wiek, string rozmiar, string kolor_siersci, string w_typie) : Pies(wiek, rozmiar, kolor_siersci) {
		this->w_typie = w_typie;
	}
};

