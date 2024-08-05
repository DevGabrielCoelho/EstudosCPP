#include <iostream>
#include <iomanip>

using namespace std;

double calcKML(int hrs, int kmh) {
	return (kmh * hrs) / 12.0;
}

int main() {
	int hrs, km;
	cin >> hrs >> km;
	cout << fixed << setprecision(3);
	cout << calcKML(hrs, km) << endl;
	return 0;
}