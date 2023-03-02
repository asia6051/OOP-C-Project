#pragma once
#include "Pacjent.h"
#include "Lekarz.h"
#include "Gabinet.h"
#include "Cennik.h"
#include<iostream>
#include<string>
using namespace std;

class Wizyta
{
public:

	//konstruktor
	Wizyta(Pacjent* pacjent, Lekarz* lekarz, Gabinet* gabinet, Cennik* cennik, string data) {
		this->pacjent = pacjent;
		this->lekarz = lekarz;
		this->gabinet = gabinet;
		this->cennik = cennik;
		this->data = data;
	}

	Pacjent* pacjent;
	Lekarz* lekarz;
	Gabinet* gabinet;
	Cennik* cennik;
	string data;

	void zmien_sale(Gabinet* gabinet) {
		this->gabinet = gabinet;
		cout << "Zmieniono sale wizyty na: " << gabinet->funkcja << endl;
	}

	void nagla_wizyta() {
		lekarz->kontakt(lekarz);
	}

	//destruktor
	~Wizyta() {
		"Ta wizyta zostala usunieta\n";
	}
};