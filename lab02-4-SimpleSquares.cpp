#include <iostream>
#include <string>
using namespace std;

void main() {
	string x;
	cin >> x;
	int vowels = 0, consonants = 0;
	for (int i = 0; i < x.length(); i++) {
		char ch = x[i];
		if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'y')) {
			vowels++;
		} else if ((ch != 'a') || (ch != 'e') || (ch != 'i') || (ch != 'o') || (ch != 'u') || (ch != 'y')) {
			consonants++;
		}
	}
	cout << "The word contains " << vowels << " vowels and " << consonants << " consonants" << endl;
}

/*
OUTPUT:
Harry
The word contains 2 vowels and 3 consonants
Press any key to continue . . .
*/