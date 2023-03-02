#pragma once
#include "Recepta.h"

void zmien_kod_recepty(Recepta* recepta, int nowy_kod) {
	recepta->kod = nowy_kod;
	cout << "Nowy kod recepty to: " << recepta->kod << endl;
}

