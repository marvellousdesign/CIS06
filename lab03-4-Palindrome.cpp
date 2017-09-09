#include <iostream>
#include <string>
using namespace std;

bool isPal(const string& word) {
	int first = 0;
	int last = word.length() - 1;
	while (first < last) {
		if (word[first] != word[last]) return false;
		++first;
		--last;
	}
	return true;
}

int main() {
	string word;
	cout << "This program checks for Palindrome, enter a word: ";
	cin >> word;
	cout << word << " is";
	if (!isPal(word)) {
		cout << " not";
	}
	cout << " a palindrome" << endl;
}


/*
Output:
This program checks for Palindrome, enter a word: level
level is a palindrome
Press any key to continue . . .

This program checks for Palindrome, enter a word: bool
bool is not a palindrome
Press any key to continue . . .
*/