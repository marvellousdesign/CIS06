// Mary Luong - CIS 6 - Lab 3, 1b - Histogram
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
	int counter[10] = { 0 };
	double x = 0, num;
	double range[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 10; j++) {
			num = ((double)rand() / RAND_MAX);
			x = num + x;
		}
		//cout << x << endl;
		if (x >= 0 && x < range[0]) {
			counter[0]++;
		}
		if (x >= 1 && x < range[1]) {
			counter[1]++;
		}
		if (x >= 2 && x < range[2]) {
			counter[2]++;
		}
		if (x >= 3 && x < range[3]) {
			counter[3]++;
		}
		if (x >= 4 && x < range[4]) {
			counter[4]++;
		}
		if (x >= 5 && x < range[5]) {
			counter[5]++;
		}
		if (x >= 6 && x < range[6]) {
			counter[6]++;
		}
		if (x >= 7 && x < range[7]) {
			counter[7]++;
		}
		if (x >= 8 && x < range[8]) {
			counter[8]++;
		}
		if (x >= 9 && x < range[9]) {
			counter[9]++;
		}
		x = 0;
	}
	cout << endl;
	for (int j = 0; j < 10; j++) {
		cout << setw(5) << counter[j] << " : ";
		for (int k = 0; k < counter[j] / 10; k++) {
			cout << "*";
		}
		cout << endl;
	}
}

/*
OUTPUT:
  0 :
  0 :
 12 : *
117 : ***********
350 : ***********************************
374 : *************************************
129 : ************
 18 : *
  0 :
  0 :
Press any key to continue . . .

*/
