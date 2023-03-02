#pragma once
#include<string>
#include <iostream>
using namespace std;

class Gabinet
{
public:

	//konstruktor
	Gabinet(int nr, string funkcja) {
		this->nr = nr;
		this->funkcja = funkcja;
	}

	int nr;
	string funkcja;

	void zmien_funckje_gabinetu(string nowa_funkcja) {
		cout << "Zmieniono funkcje gabinetu z " << funkcja;
		funkcja = nowa_funkcja;
		cout << " na " << funkcja << endl;
	}
	//destruktor
	~Gabinet() {
		"Ten gabinet juz nie istnieje\n";
	}
};