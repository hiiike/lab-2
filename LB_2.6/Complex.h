#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Complex 
{
public:

	class Pair
	{
	private:
		double first;
		double second;
	public:

		Pair();
		Pair(int, int);
		Pair(const Pair&);
		~Pair();

		double GetA() const { return first; }
		double GetB() const { return second; }
		void SetFirst(int D) {};
		void SetSecond(int V) {};
		void Init(int D, int V);

		Pair& operator = (const Pair&);
		operator string() const;
		friend ostream& operator << (ostream&, const Pair&);
		friend istream& operator >> (istream&, Pair&);

		Pair& operator ++();
		Pair& operator --();
		Pair operator ++(int);
		Pair operator --(int);

		friend Pair operator + (const Pair&, const Pair&);
	};


	void SetPair(Pair pair) {};


	void Display(Pair& k1, Pair& k2);
	void Init(Pair pair);

	int Diff_1(Pair& k1, Pair& k2);
	int Diff_2(Pair& k1, Pair& k2);

	int Multiply_1(Pair& k1, Pair& k2);
	int Multiply_2(Pair& k1, Pair& k2);

};

