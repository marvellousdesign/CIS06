#include <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;

int main() {
	int counter[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double x = 0;

	for (int i = 0; i < 10000; i++) {
		double x = ((double)rand() / RAND_MAX);
		if (x >= 0 && x < 0.1) {
			counter[0]++;
		}
		if (x >= 0.1 && x < 0.2) {
			counter[1]++;
		}
		if (x >= 0.2 && x < 0.3) {
			counter[2]++;
		}
		if (x >= 0.3 && x < 0.4) {
			counter[3]++;
		}
		if (x >= 0.4 && x < 0.5) {
			counter[4]++;
		}
		if (x >= 0.5 && x < 0.6) {
			counter[5]++;
		}
		if (x >= 0.6 && x < 0.7) {
			counter[6]++;
		}
		if (x >= 0.7 && x < 0.8) {
			counter[7]++;
		}
		if (x >= 0.8 && x < 0.9) {
			counter[8]++;
		}
		if (x >= 0.9 && x < 1.0) {
			counter[9]++;
		}
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
 987 : *******************
1005 : ********************
 955 : *******************
 978 : *******************
 996 : *******************
 984 : *******************
1062 : *********************
1001 : ********************
1014 : ********************
1018 : ********************
Press any key to continue . . .
*/
