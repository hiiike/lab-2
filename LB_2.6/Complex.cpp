#include "Complex.h"

using namespace std;

void Complex::Init(Pair pair) { SetPair(pair); }

void Complex::Display(Pair& k1, Pair& k2)
{
	Complex R;
	cout << " (a,b) * (c,d) = (a c * b d , a d + b c)" << "= ";
	cout << "( " << (R.Multiply_1(k1, k2)) << " , " << (R.Multiply_2(k1, k2)) << " )" << endl;

	cout << " (a,b) - (c,d) = (a - c, b - d)" << "=";
	cout << "( " << R.Diff_1(k1, k2) << " , " << R.Diff_2(k1, k2) << " )" << endl;
}

int Complex::Diff_1(Pair& k1, Pair& k2)
{
	return k1.GetA() - k2.GetA();
}

int Complex::Diff_2(Pair& k1, Pair& k2)
{
	return k1.GetB() - k2.GetB();
}

int Complex::Multiply_1(Pair& k1, Pair& k2)
{
	return (k1.GetA() + k2.GetA()) * (k1.GetB() + k2.GetB());
}

int Complex::Multiply_2(Pair& k1, Pair& k2)
{
	return k1.GetA() + k2.GetB() + k1.GetB() + k2.GetA();
}

Complex::Pair::Pair()
{
    first = 0;
    second = 0;
}
Complex::Pair::Pair(int d = 0, int v = 0)
{
    first = d;
    second = v;
}
Complex::Pair::Pair(const Pair& r)
{
    first = r.first;
    second = r.second;
}
Complex::Pair::~Pair() { }

void Complex::Pair::Init(int D, int V)
{
    SetFirst(D);
    SetSecond(V);
}

Complex::Pair operator + (const Complex::Pair& a, const Complex::Pair& b)
{
    return Complex::Pair(a.first + b.first, a.second + b.second);
}

Complex::Pair& Complex::Pair::operator = (const Complex::Pair& r)
{
    first = r.first;
    second = r.second;
    return *this;
}

Complex::Pair::operator string () const
{
    stringstream sstr;
    sstr << endl << " ( " << first << " , " << second << " )" << endl << endl;
    return sstr.str();
}

ostream& operator << (ostream& out, const Complex::Pair& r)
{
    out << string(r);
    return out;
}

istream& operator >> (istream& in, Complex::Pair& r)
{
    cout << " "; in >> r.first;
    cout << " "; in >> r.second;
    r.Init(r.first, r.second);
    return in;
}

Complex::Pair& Complex::Pair::operator ++()
{
    first++;
    return *this;
}
Complex::Pair& Complex::Pair::operator --()
{
    first--;
    return *this;
}
Complex::Pair Complex::Pair::operator ++(int)
{
    Pair t(*this);
    second++;
    return t;
}
Complex::Pair Complex::Pair::operator --(int)
{
    Pair t(*this);
    second--;
    return t;
}