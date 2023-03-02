#pragma once
#include "Zwierze.h"
#include<string>
#include <iostream>
using namespace std;

class Ssak : public Zwierze
{
private:
	string rozmiar;
public: 
	void wyswietl() {
		Zwierze::wyswietl();
		cout << "Rozmiar " << rozmiar << endl;
	}
	Ssak(int wiek, string rozmiar) : Zwierze(wiek) {
		this->rozmiar = rozmiar;
	}
};

