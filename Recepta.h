#pragma once
#include "Pacjent.h"
#include "Lekarz.h"
#include "Lek.h"
#include<string>
#include <iostream>
using namespace std;

class Recepta
{
public:

	//konstruktor
	Recepta(int kod, Pacjent* pacjent, Lekarz* lekarz, Lek* lek) {
		this->kod = kod;
		this->pacjent = pacjent;
		this->lekarz = lekarz;
		this->lek = lek;
	}

	Pacjent* pacjent;
	Lekarz* lekarz;
	Lek* lek;

	void zmien_lek(Lek* lek) {
		this->lek = lek;
		cout << "Zmieniono lek na " << lek->nazwa << endl;
	}

	void ponow_recepte() {
		lekarz->kontakt(lekarz);
	}

	void dane_leku() {
		lek->podaj_skl_aktywny(lek);
	}

	friend void zmien_kod_recepty(Recepta*, int nowy_kod);

	//destruktor
	~Recepta() {
		"Ta recepta zostala usunieta\n";
	}
private:
	int kod;
};