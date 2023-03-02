#pragma once
#include "Opiekun.h"
#include "Kundelek.h"
#include<string>
#include <iostream>
using namespace std;

class Pacjent : public Kundelek
{
public:
	void wyswietl() {
		Kundelek::wyswietl();
		cout << "id " << id << endl;
	}
	//konstruktor
	Pacjent(int id, string imie, Opiekun* opiekun, int nr_chipa, int wiek, string rozmiar, string kolor_siersci, string w_typie) : Kundelek(wiek, rozmiar, kolor_siersci,w_typie)
	{
		this->id = id;
		this->imie = imie;
		this->opiekun = opiekun;
		this->nr_chipa = nr_chipa;
	}

	int id;
	string imie;
	Opiekun* opiekun;

	void zmien_opiekuna(Opiekun* opiekun) {
		this->opiekun = opiekun;
		cout << "Nowy opiekun: " << opiekun->nazwisko << endl;
	}

	void kontakt_do_opiekuna() {
		opiekun->rozmowa_z_opiekunem(opiekun);
	}

	friend void zmien_nr_chipa(Pacjent*, int);



	//destruktor
	~Pacjent() {
		"Ten pacjent zostal usuniety\n";
	}

private:
	int nr_chipa;
};