#pragma once
#include"Rachunek.h"
#include<string>
#include <iostream>
using namespace std;
class Cennik : public Rachunek
{
public:

	//konstruktor
	Cennik(int id, string usluga, int cena) {
		this->id = id;
		this->usluga = usluga;
		this->cena = cena;
	}

	int id;
	string usluga;
	int cena;

	void zmien_cene(int nowa_cena) {
		cout << "Zmieniono  cene uslugi: " << usluga << " z " << cena << " na ";
		cena = nowa_cena;
		cout << cena << endl;
	}

	// Nadpisanie metod kwotax()
	double kwota0() override {
		return cena;
	}

	double kwota8() override {
		return cena * 1.08;
	}

	double kwota16() override {
		return cena * 1.16;
	}

	double kwota23() override {
		return cena * 1.23;
	}

	double kwota37() override {
		return cena * 1.37;
	}

	//przeciazenie operatora
	void operator += (int value) {
		cena += value;
	}

	void operator -= (int value) {
		cena -= value;
	}

	//destruktor
	~Cennik() {
		"Ta pozycja w cenniku juz nie istnieje\n";
	}
};