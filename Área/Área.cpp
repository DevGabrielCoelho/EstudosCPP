#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
	double a, b, c, triangle, circle, trapeze, square, rectangle;
	cin >> a >> b >> c;
	triangle = (a * c) / 2;
	circle = pow(c, 2) * 3.14159;
	trapeze = (a + b) * (c / 2);
	square = pow(b, 2);
	rectangle = a * b;
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << triangle << "\nCIRCULO: " << circle << "\nTRAPEZIO: " << trapeze << "\nQUADRADO: " << square << "\nRETANGULO: " << rectangle << endl;
	return 0;
}