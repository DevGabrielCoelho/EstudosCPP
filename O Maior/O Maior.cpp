#include <iostream>

using namespace std;

int maiorAB(int a, int b, int c) {
	int maiorAB;
	maiorAB = (a + b + abs(a - b)) / 2;
	return (maiorAB + c + abs(maiorAB - c)) / 2;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << maiorAB(a, b, c) << " eh o maior" << endl;
	return 0;
}