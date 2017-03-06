#include <iostream>
using namespace std;

int main() {
	int num1, num2, sum = 0, max, min;
	cout << "This program multiplies a number by adding it multiple times" << endl;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	if (num1 > num2) {
		max = num1;
		min = num2;
	}
	else {
		max = num2;
		min = num1;
	}
	for (int i = 0; i < min; i++) {
		cout << sum << " + " << max << " = ";
		sum = sum + max;
		cout << sum << endl;
	}
	cout << "Adding " << max << ", " << min << " times equals " << sum << endl;
	sum = min * max;
	cout << "Checking: " << min << " * " << max << " = " << sum << endl;
	return 0;
}

/*
OUTPUT:
This program multiplies a number by adding it multiple times
Enter first number: 3
Enter second number: 4
0 + 4 = 4
4 + 4 = 8
8 + 4 = 12
Adding 4, 3 times equals 12
Checking: 3 * 4 = 12
Press any key to continue . . .
*/
