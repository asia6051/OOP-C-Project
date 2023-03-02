#pragma once
#include<string>
#include <iostream>

template<typename T>
class Generyczna2
{
	T x;
public:
	Generyczna2(T arg) { x = arg; }

	T dodawanie(T druga) {
		return x + druga;
	}
};

