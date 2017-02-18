#include <iostream>
using namespace std;

int main() {
	double income, a, b, c, d, e, z;
	cout << "Please enter your income: $";
	cin >> income;

	if (income <= 30000.00) {
		cout << "Income of $ 30,000.00 has a 0% tax, and you are not taxed for $ " << income << "." << endl;

	} else if (income >= 30000 && income <= 50000) {
		z = income - 30000;
		a = z * 0.1;

		cout << "Income of $ 30,000.00 has a 0% tax, and you are not taxed for the first $ 30000." << endl;
		cout << "Income of $ 30,000.01 to $ 50,000 has a 10% tax, you are taxed " << a << " from $ " << z << "." << endl;

	} else if (income >= 50000 && income <= 100000) {
		a = 20000 * 0.1;
		z = income - 50000;
		b = z * 0.2;
		
		cout << "Income of $ 30,000.00 has a 0% tax, and you are not taxed for the first $ 30000." << endl;
		cout << "Income of $ 30,000.01 to $ 50,000 has a 10% tax, you are taxed " << a << " from $ 20000." << endl;
		cout << "Income of $ 50,000.01 to $ 100,000 has a 20% tax, you are taxed " << b << " from $ " << z << "." << endl;

	} else if (income >= 100000 && income <= 200000) {
		a = 20000 * 0.1;
		b = 50000 * 0.2;
		z = income - 100000;
		c = z * 0.3;
		
		cout << "Income of $ 30,000.00 has a 0% tax, and you are not taxed for the first $30000." << endl;
		cout << "Income of $ 30,000.01 to $ 50,000 has a 10% tax, you are taxed " << a << " from $ 20000." << endl;
		cout << "Income of $ 50,000.01 to $ 100,000 has a 20% tax, you are taxed " << b << " from $ 50000." << endl;
		cout << "Income of $ 100,000.01 to $ 200,000 has a 30% tax, you are taxed " << c << " from $ " << z << "." << endl;

	} else if (income >= 200000 && income <= 250000) {
		a = 20000 * 0.1;
		b = 50000 * 0.2;
		c = 100000 * 0.3;
		z = income - 200000;
		d = z * 0.35;

		cout << "Income of $ 30,000.00 has a 0% tax, and you are not taxed for the first $ 30000." << endl;
		cout << "Income of $ 30,000.01 to $ 50,000 has a 10% tax, you are taxed " << a << " from $ 20000." << endl;
		cout << "Income of $ 50,000.01 to $ 100,000 has a 20% tax, you are taxed " << b << " from $ 50000." << endl;
		cout << "Income of $ 100,000.01 to $ 200,000 has a 30% tax, you are taxed " << c << " from $ 100000." << endl;
		cout << "Income of $ 200,000.01 to $ 250,000 has a 30% tax, you are taxed " << d << " from $ " << z << "." << endl;

	} else if (income >= 250000) {
		a = 20000 * 0.1;
		b = 50000 * 0.2;
		c = 100000 * 0.3;
		d = 250000 * 0.35;
		z = income - 250000;
		e = z * 0.40;

		cout << "Income of $ 30,000.00 has a 0% tax, and you are not taxed for the first $ 30000." << endl;
		cout << "Income of $ 30,000.01 to $ 50,000 has a 10% tax, you are taxed " << a << " from $ 20000." << endl;
		cout << "Income of $ 50,000.01 to $ 100,000 has a 20% tax, you are taxed " << b << " from $ 50000." << endl;
		cout << "Income of $ 100,000.01 to $ 200,000 has a 30% tax, you are taxed " << c << " from $ 100000." << endl;
		cout << "Income of $ 200,000.01 to $ 250,000 has a 35% tax, you are taxed " << d << " from $ 50000." << endl;
		cout << "Income of $ 250,000.01 has a 40% tax, you are taxed " << e << " from $ " << z << "." << endl;
	}

}

/*
OUTPUT:
Please enter your income: $300000
Income of $ 30,000.00 has a 0% tax, and you are not taxed for the first $ 30000.
Income of $ 30,000.01 to $ 50,000 has a 10% tax, you are taxed 2000 from $ 20000.
Income of $ 50,000.01 to $ 100,000 has a 20% tax, you are taxed 10000 from $ 50000.
Income of $ 100,000.01 to $ 200,000 has a 30% tax, you are taxed 30000 from $ 100000.
Income of $ 200,000.01 to $ 250,000 has a 35% tax, you are taxed 87500 from $ 50000.
Income of $ 250,000.01 has a 40% tax, you are taxed 20000 from $ 50000.
Press any key to continue . . .
*/
