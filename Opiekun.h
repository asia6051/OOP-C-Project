#pragma once
#include<string>
#include <iostream>
using namespace std;

class Opiekun
{
public:
	//konstruktor
	Opiekun(int id, string imie, string nazwisko, string telefon) {
		this->id = id;
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->telefon = telefon;
	}

	int id;
	string imie;
	string nazwisko;


	void zmien_nr_opiekuna(string telefon) {
		this->telefon = telefon;
		cout << "Zmieniono numer " << imie << " " << nazwisko << " na " << telefon << endl;
	}

	friend class Pacjent;

	//destruktor
	~Opiekun() {
		"Ten opiekun zostal usuniety\n";
	}

private:
	string telefon;
	void rozmowa_z_opiekunem(Opiekun* opiekun) {
		cout << "Telefon opiekuna to: " << opiekun->telefon << endl;
	}
};