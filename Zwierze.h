#pragma once
#include<string>
#include <iostream>
using namespace std;

class Zwierze
{
private:
	int wiek;
public:
	void wyswietl() {
		
		cout << "Wiek: " << wiek << endl;
	}
	Zwierze(int wiek) {
		this->wiek = wiek;
	}
};

