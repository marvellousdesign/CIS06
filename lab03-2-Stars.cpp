#include <iostream>
using namespace std;

void star() {
	cout << "*";
}

void m(int n) {
	if (n >= 0) {
		m(n - 1);
	for (int j = 1; j <= pow(2, n); j++) {
		star();
	}
	cout << endl;
	}
}

void main() {
	m(6);
}

/*
OUTPUT:
*
**
****
********
****************
********************************
****************************************************************
Press any key to continue . . .
*/
