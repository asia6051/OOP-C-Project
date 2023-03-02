#include<string.h>
#include <iostream>
#include"Opiekun.h"
#include"Pacjent.h"
#include"Lekarz.h"
#include"Gabinet.h"
#include"Cennik.h"
#include"Lek.h"
#include"Kalendarz.h"
#include"Wizyta.h"
#include"Recepta.h"
#include"Operacja.h"
#include"Generyczna1.h"
#include"Generyczna2.h"
#include"Generyczna3.h"
using namespace std;

int main() {

	//Powolanie obiektow

	Opiekun *opiekunTofika = new Opiekun(1, "Adam", "Abacki", "510098726");
	Opiekun *opiekunBurka = new Opiekun(2, "Anna", "Kowalska", "704563111");
	Opiekun *opiekunAsa = new Opiekun(3, "Tomasz", "Nowak", "444938209");
	Opiekun *opiekunTofika2 = new Opiekun(4, "Michal", "Bak", "899099435");

	Pacjent *Tofik = new Pacjent(1, "Tofik", opiekunTofika, 50078, 10, "Maly", "Brazowa","Pekinczyk");
	Pacjent *Burek = new Pacjent(2, "Burek", opiekunBurka, 00000, 7, "Duzy", "Biala", "Husky");
	Pacjent *As = new Pacjent(3, "As", opiekunAsa, 10007, 2, "Zlota", "Sredni", "Golden retriever");

	Lekarz *drMichalak = new Lekarz(1, "Agnieszka", "Michalak", "51699935", "Ortopeda");
	Lekarz *drPszczola = new Lekarz(2, "Piotr", "Pszczola", "883708728", "Dermatlog");

	Gabinet *gabinet1 = new Gabinet(1, "Zabiegowy");
	Gabinet *gabinet2 = new Gabinet(2, "OIOM");
	Gabinet *gabinet3 = new Gabinet(3, "Blok operacyjny 1");

	Cennik *zabieg1 = new Cennik(1, "Sterylizacja", 350);
	Cennik *zabieg2 = new Cennik(2, "Szczepienie", 60);

	Lek *lek1 = new Lek(1, "Apap", "Paracetamol");
	Lek *lek2 = new Lek(2, "Solpadeine", "Kodeina");

	Kalendarz *plan1 = new Kalendarz("06/12/22", "15:30", Tofik);

	Wizyta *Tofik1 = new Wizyta(Tofik, drMichalak, gabinet1, zabieg1, "08/12/22");

	Recepta *recepta1 = new Recepta(456, As, drPszczola, lek2);

	Operacja *operacja1 = new Operacja(Burek, drMichalak, gabinet3);


	//wywolanie metod zmieniajacych stan obiektow

	drPszczola->zmien_nr_lekarza("444777222");

	plan1->zmien_termin("10/12/22", "10:00");

	Tofik1->zmien_sale(gabinet3);

	recepta1->zmien_lek(lek1);

	Tofik->zmien_opiekuna(opiekunTofika2);

	opiekunAsa->zmien_nr_opiekuna("500600400");

	operacja1->zmien_sale(gabinet2);

	lek1->zmien_nazwe_leku("Ibum");

	gabinet2->zmien_funckje_gabinetu("Blok operacyjny 2");

	zabieg2->zmien_cene(45);


	cout << endl;
	//metody z przyjazni klas

	Tofik1->nagla_wizyta();

	recepta1->ponow_recepte();

	operacja1->nagla_operacja();

	As->kontakt_do_opiekuna();

	recepta1->dane_leku();

	//zaprzyjaznione funkcje
	
	zmien_nr_chipa(Burek, 99110);

	zmien_kod_recepty(recepta1, 100);


	cout << endl;
	//klasy generyczne

	Generyczna1<string>* intGeneryczna1 = new Generyczna1<string>("abc");
	cout << "Mniejsza: ";
	cout << intGeneryczna1->mniejsza("ABC") << endl;

	Generyczna2<double>* intGeneryczna2 = new Generyczna2<double>(0.55);
	cout << "Wynik dodawania: ";
	cout << intGeneryczna2->dodawanie(1.13) << endl;

	Generyczna3<int> *intGeneryczna3 = new Generyczna3<int>(2);
	cout << "Wynik mnozenia: ";
	cout << intGeneryczna3->mnozenie(4) << endl;
	

	cout << endl;
	//klasy abstrakcyjne i metody wirtualne
	cout << "Cena za: " << zabieg1->usluga << " przy podatku 8 % : " << zabieg1->kwota8() << "zl" << endl;

	cout << "Cena za: " << zabieg2->usluga << " przy podatku 23 % : " << zabieg2->kwota23() << "zl" << endl;

	operacja1->k_gabinet();

	operacja1->k_lekarz();


	cout << endl;
	//przeciazenie operatorow
	cout << "Cena to: " << zabieg1->cena << "zl" << endl;
	*zabieg1 += 10;
	cout << "Cena po podwyzce to: " << zabieg1->cena << "zl" << endl;

	cout << "Cena to: " << zabieg2->cena << "zl" << endl;
	*zabieg2 -= 5;
	cout << "Cena z rabatem to: " << zabieg2->cena << "zl" << endl;

	cout << (*lek2 > 1) << endl;
	cout << (*lek2 > 3) << endl;
}