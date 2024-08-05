#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double calcCircleVolume(double radius) {
	return ((4.0 / 3.0) * 3.14159 * pow(radius, 3.0));
}

int main() {
	double radius, volume;
	cin >> radius;
	volume = calcCircleVolume(radius);
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << volume << endl;
	return 0;
}