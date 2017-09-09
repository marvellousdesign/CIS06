// Mary Luong - CIS 6 - Lab 3, 1 - Histogram
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
	int counter[10] = { 0 };
	double x = 0;
	double range[] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 };

	for (int i = 0; i < 1000; i++) {
		double x = ((double)rand() / RAND_MAX);

		for (int j = 0; j < 10; j++) {
			if (x >= 0 && x < range[j]) {
				counter[j]++;
			}
			else if (x >= counter[j - 1] && x < range[j] && j > 0) {
				counter[j]++;
			}
		}
	}
	cout << endl;
	for (int j = 0; j < 10; j++) {
		cout << setw(5) << counter[j] << " : ";
		for (int k = 0; k < counter[j] / 100; k++) {
			cout << "*";
		}
		cout << endl;
	}
}

/*
OUTPUT:
 106 : *
 216 : **
 295 : **
 394 : ***
 482 : ****
 580 : *****
 705 : *******
 812 : ********
 909 : *********
1000 : **********
Press any key to continue . . .
*/
