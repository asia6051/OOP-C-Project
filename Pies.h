#pragma once
#include "Ssak.h"
#include<string>
#include <iostream>
using namespace std;

class Pies : public Ssak 
{
private:
	string kolor_siersci;
public:
	void wyswietl() {
		Ssak::wyswietl();
		cout << "Kolor siersci " << kolor_siersci << endl;
	}
	Pies(int wiek, string rozmiar, string kolor_siersci) : Ssak(wiek, rozmiar) {
		this->kolor_siersci = kolor_siersci;
	}
};

