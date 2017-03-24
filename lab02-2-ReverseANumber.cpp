#include <iostream>
using namespace std;
int main() {
	int reverse = 0, remainder, x;
	cout << "Reverse of 68743 is: ";
	x = 68743;
	while (x > 0) {
		remainder = x % 10;
		reverse = reverse * 10 + remainder;
		x = x / 10;
	}
	cout << reverse << endl;
}

/*
OUTPUT:
Reverse of 68743 is: 34786
Press any key to continue . . .
*/
