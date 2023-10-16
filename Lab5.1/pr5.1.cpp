#include <iostream>
#include <cmath>
using namespace std;

double h(const double a, const double b); // прототип

int main()
{
double s, g;
cout << "s = "; cin >> s;
cout << "g = "; cin >> g;
double c = (h(g + 1, s) + pow(h(g, s + 1), 2)) / (1 + pow(h(g * g, s * s), 3));
cout << "c = " << c << endl;
return 0;

}
double h(const double a, const double b) // визначення
{
	return (pow(a, 2) - pow(b, 2));
}
