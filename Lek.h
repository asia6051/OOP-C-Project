#pragma once
#include<string>
#include <iostream>
using namespace std;

class Lek
{
public:
	//konstruktor
	Lek(int nr, string nazwa, string skladnikAktywny) {
		this->nr = nr;
		this->nazwa = nazwa;
		this->skladnikAktywny = skladnikAktywny;
	}

	int nr;
	string nazwa;

	void zmien_nazwe_leku(string nowa_nazwa) {
		cout << "Zmieniono nazwe leku " << nazwa;
		nazwa = nowa_nazwa;
		cout << " na " << nazwa << endl;
	}

	friend class Recepta;

	bool operator>(int value) {
		return nr > value;
	}

	//destruktor
	~Lek() {
		"Ten lek juz nie istnieje\n";
	}

private:
	string skladnikAktywny;

	void podaj_skl_aktywny(Lek* lek) {
		cout << "Skladnik aktywny to: " << lek->skladnikAktywny << endl;
	}
};