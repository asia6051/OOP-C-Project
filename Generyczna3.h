#pragma once
#include<string>
#include <iostream>

template<typename T>
class Generyczna3
{
	T x;
public:
	Generyczna3(T arg1) { x = arg1; }

	T mnozenie(T druga) {
		return x * druga;;
	}
};

