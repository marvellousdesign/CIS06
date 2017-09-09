#include <iostream>
using namespace std;

int fib(int n) {
	if (n <= 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {
	int n;
	cout << "This program prints out the nth Finbonaacci number, enter a number: ";
	cin >> n;
	cout << "The " << n << " place is " << fib(n) << endl;
	return 0;
}

/*
OUTPUT:
This program prints out the nth Finbonaacci number:
The 20th place is 6765
Press any key to continue . . .
*/
