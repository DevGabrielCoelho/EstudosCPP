#include <iostream>
#include <iomanip>

using namespace std;

double calcConsumo(int km, double consumo) {
	return km / consumo;
}

int main() {
	int km;
	double consumo;
	cin >> km >> consumo;
	cout << fixed << setprecision(3);
	cout << calcConsumo(km, consumo) << " km/l" << endl;
	return 0;
}