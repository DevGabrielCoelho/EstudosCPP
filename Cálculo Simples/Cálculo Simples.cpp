#include <iostream>
#include <iomanip>

using namespace std;

double calcPrice(int quantity, double price, int quantity1, double price1) {
	return (quantity * price) + (quantity1 * price1);
}

int main()
{
	int number, quantity, number1, quantity1;
	double price, value, price1;
	cin >> number >> quantity >> price;
	cin >> number1 >> quantity1 >> price1;
	value = calcPrice(quantity, price, quantity1, price1);
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << value << endl;
}

