#include <iostream>
#include "Matrix.h"

int main()
{
	Matrix
		A(2), B(2);

	cout << "\nEnter a Matrix A" << endl;
	cin >> A;

	cout << "\nMatrix A: " << endl;
	cout << A;

	cout << "\nMatrix A norm is equal to " << A.Norm() << endl;

	cout << "\nEnter a Matrix B" << endl;
	cin >> B;

	cout << "\nMatrix B: " << endl;
	cout << B;

	cout << "\nMatrix B norm is equal to " << B.Norm() << endl;


	cout << "\nComparison of Matrices A and B" << endl << endl;
	A.Comparison(A, B);

	cout << "\nA - B:" << endl;
	A - B;

	return 0;
}
