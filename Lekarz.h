#pragma once
#include<string>
#include <iostream>
using namespace std;

class Lekarz
{
public:

	//konstruktor
	Lekarz(int id, string imie, string nazwisko, string telefon, string specjalizacja) {
		this->id = id;
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->telefon = telefon;
		this->specjalizacja = specjalizacja;
	}

	int id;
	string imie;
	string nazwisko;
	string specjalizacja;

	void daneLekarza() {
		cout << "Imie: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Specjalizacja: " << specjalizacja << endl;
	}
	void zmien_nr_lekarza(string telefon) {
		this->telefon = telefon;
		cout << "Zmieniono telefon do dr " << nazwisko << " na " << telefon << endl;
	}

	friend class Recepta;
	friend class Wizyta;
	friend class Operacja;

	//destruktor
	~Lekarz() {
		"Ten lekarz zosta³ usuniety\n";
	}

private:
	string telefon;
	void kontakt(Lekarz* lekarz) {
		cout << "Numer alarmowy do lekarza: " << lekarz->telefon << endl;
	}
};