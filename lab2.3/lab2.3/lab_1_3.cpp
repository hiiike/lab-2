#include <iostream>
#include "FuzzyNumber.h"

int main(void)
{
	using std::cout;


	FuzzyNumber A(14.0, 9.0, 7.0),
		B(2.0, 3.0, 4.0),
		C(0.0, 0.0, 0.0);

	cout << "\nValue A: " << A;
	cout << A.operator std::string();
	cout << endl;
	cout << "\nValue B: " << B;
	cout << B.operator std::string();

	C = A - B;
	cout << "\n\n A - B: ";
	cout << C.operator std::string();

	C = A / B;
	cout << "\n\n A / B: ";
	cout << C.operator std::string();

	FuzzyNumber a, b, c;
	cout << endl;
	cout << "\nValue object a: ";
	std::cin >> a;

	cout << "\n\nResult a: " << a;
	cout << a.operator std::string();

	cout << "\n\nValue object b: ";
	std::cin >> b;

	cout << "\n\nResult b: " << b;
	cout << b.operator std::string();

	c = a - b;
	cout << "\n\n A - B: ";
	cout << c.operator std::string();

	c = a / b;
	cout << "\n A / B: ";
	cout << c.operator std::string();

	FuzzyNumber K;
	K = FuzzyNumber::Function(A, B);
	cout << endl << "1 / A: " << endl << "(" << K.GetL() << ";" << K.GetX() << ";" << K.GetR() << ")" << endl << endl;


	return 0;
}
