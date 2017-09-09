#include <iostream>
using namespace std;

int main() {
	int fa = 0, fb = 1, fc;
	cout << "This program prints out a series of Finbonaacci numbers:" << endl;
	for (int i = 0; i < 20; i++) {
		cout << fa << " ";
		fc = fa + fb;
		fa = fb;
		fb = fc;
	}
	cout << endl;
}

/*
OUTPUT:
This program prints out a series of Finbonaacci numbers:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
Press any key to continue . . .
*/
