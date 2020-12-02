// Lab 5_1
// Біліонок Ярослав
// Варіант 1

#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y); // прототип
int main()
{
	double p, q;
	cout << "a = "; cin >> p;
	cout << "b = "; cin >> q;
	double c = (k(1 + p * q, q * q) + pow(k(p, p * p), 2)) / (1 + k(p * q + q * q, p));
	cout << "c = " << c << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return x / 1 + sin(y) * sin(y) + y / 1 + x * x;
}