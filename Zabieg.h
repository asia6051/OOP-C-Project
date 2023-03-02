#pragma once
#include<string>
using namespace std;

class Zabieg
{
public:
	int id;
	string nazwa;


	//konstruktor
	Zabieg(int id, string nazwa) {
		this->id = id;
		this->nazwa = nazwa;
	}
	//destruktor
	~Zabieg() {
		"Ten zabieg zostal usuniety\n";
	}
};

