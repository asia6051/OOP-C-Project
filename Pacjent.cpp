#pragma once
#include "Pacjent.h"

void zmien_nr_chipa(Pacjent* pacjent, int nowy_chip) {
	pacjent->nr_chipa = nowy_chip;
	cout << "Nowy nr chipa zwierzaka " << pacjent->imie << " to " << pacjent->nr_chipa << endl;
}

