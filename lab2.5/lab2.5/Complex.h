#pragma once
#include "Pair.h"

using namespace std;

class Complex
{
private:
	Pair pair;

public:


	Pair GetPair() { return pair; }
	void SetPair(Pair pair) {};


	void Display(Pair& k1, Pair& k2);
	void Init(Pair pair);

	int Diff_1(Pair& k1, Pair& k2);
	int Diff_2(Pair& k1, Pair& k2);

	int Multiply_1(Pair& k1, Pair& k2);
	int Multiply_2(Pair& k1, Pair& k2);

};
