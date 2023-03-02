#pragma once
#include<string>
#include <iostream>

template<typename T>
class Generyczna1
{
	T x;
public:
	Generyczna1(T arg) { x = arg; }

	T mniejsza(T druga) {
		if (x > druga) return x;
		else return druga;
	}
};

