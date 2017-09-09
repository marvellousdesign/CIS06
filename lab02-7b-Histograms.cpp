#include <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;

int main() {
	int counter[10] = { 0 };
	double x = 0, num; // x is my sum

	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 10; j++) {
			num = ((double)rand() / RAND_MAX);
			x = num + x;
		}
		if (x >= 0 && x < 1) {
			counter[0]++;
		}
		if (x >= 1 && x < 2) {
			counter[1]++;
		}
		if (x >= 2 && x < 3) {
			counter[2]++;
		}
		if (x >= 3 && x < 4) {
			counter[3]++;
		}
		if (x >= 4 && x < 5) {
			counter[4]++;
		}
		if (x >= 5 && x < 6) {
			counter[5]++;
		}
		if (x >= 6 && x < 7) {
			counter[6]++;
		}
		if (x >= 7 && x < 8) {
			counter[7]++;
		}
		if (x >= 8 && x < 9) {
			counter[8]++;
		}
		if (x >= 9 && x < 10) {
			counter[9]++;
		}
		x = 0;
	}

	for (int j = 0; j < 10; j++) {
		cout << setw(5) << counter[j] << " : ";
		for (int k = 0; k < counter[j] / 50; k++) {
			cout << "*";
		}
		cout << endl;
	}
}

/*
OUTPUT:
   0 :
   3 :
 121 : **
1185 : ***********************
3639 : ************************************************************************
3648 : ************************************************************************
1267 : *************************
 134 : **
   3 :
   0 :
Press any key to continue . . .
*/
