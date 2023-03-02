#pragma once
#include "Pacjent.h"
#include "Lekarz.h"
#include "Gabinet.h"
#include "Komunikat.h"
#include<string>
#include <iostream>
using namespace std;

class Operacja : public Komunikat
{
public:
	//konstruktor
	Operacja(Pacjent* pacjent, Lekarz* lekarz, Gabinet* gabinet) {
		this->pacjent = pacjent;
		this->lekarz = lekarz;
		this->gabinet = gabinet;
	}

	Pacjent* pacjent;
	Lekarz* lekarz;
	Gabinet* gabinet;

	// Nadpisanie metod komunikat()
	void k_lekarz() override {
		cout << "Uwaga: dr " << lekarz->nazwisko << " wlasnie operuje" << endl;
	}

	void k_pacjent() override {
		cout << "Uwaga: pacjnet " << pacjent->imie << " jest wlasnie operowany" << endl;
	}

	void k_gabinet() override {
		cout << "Uwaga: W sali " << gabinet->funkcja << " wlasnie trwa operacja" << endl;
	}

	void zmien_sale(Gabinet* gabinet) {
		this->gabinet = gabinet;
		cout << "Zmieniono sale operacji na: " << gabinet->funkcja << endl;
	}

	void nagla_operacja() {
		lekarz->kontakt(lekarz);
	}
	//destruktor
	~Operacja() {
		"Ta operacja zostala usunieta\n";
	}
};
