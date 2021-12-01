#include "Complex.h"

int main()
{
	Complex::Pair pair1, pair2, k;
	cout << " pair (a,b) - ?"; cin >> pair1;
	cout << " ( a , b )";
	cout << pair1;

	cout << " pair (c,d) - ?"; cin >> pair2;
	cout << " ( c , d )";
	cout << pair2;

	Complex::Pair a = pair1 + pair2;
	cout << "(a, b) + (c, d) = (a + c), (b + d)";
	cout << a;

	Complex p;
	p.Init(k);
	p.Display(pair1, pair2);

	return 0;
}