// Mary Luong - CIS 6 - Lab 3, 7 - Reverse
#include <iostream>
using namespace std;

int reverse(int x) {
	static int sum, remainder;
	if (x > 0) {
		remainder = x % 10;
		sum = sum * 10 + remainder;
		reverse(x/10);
	}
	return sum;
}

int main() {
	cout << "Reverse of 537 is: " << reverse(537) << endl;
	return 0;
}

/*
Output:
Reverse of 537 is: 735
Press any key to continue . . .
*/