#include <iostream>
using namespace std;

void star() {
	cout << "*";
}

void print(int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 1; j <= pow(2, i); j++) {
			star();
		}
		cout << endl;
	}
	for (int i = y; i >= 0; i--) {
		for (int j = 1; j <= pow(2, i); j++) {
			star();
		}
		cout << endl;
	}
}

void main() {
	print(7, 5);
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
********************************
****************
********
****
**
*
Press any key to continue . . .
*/
