#include <iostream>
#include <string>
using namespace std;

char isVowels[] = { 'a', 'e', 'y', 'u', 'i', 'o' };

size_t CountVowels(const char* stroka) {
	size_t count = 0;
	for (size_t i = 0; stroka[i] != '\0'; i++) {
		if (strchr(isVowels, stroka[i]))
			count++;
	} return count;
}

enum class Case
{
	Upper,
	Lower
};

void ConvertCase(string& str, Case reg)
{
	for (char& c : str)
	{
		if (reg == Case::Upper)
			c = toupper(c);
		else
			c = tolower(c);
	}
}

int main() {
	int choice;
	cout << "choice function: \n 1. CountVowels \n 2. ConvertCase ";
	cin >> choice;
	cin.ignore();
	switch (choice) {
	case 1: {
		char input[100];
		cout << "Enter string: ";
		cin.getline(input, 100);
		size_t result = CountVowels(input);
		cout << "Count vowels: " << result << endl;
		break;
	}
	case 2: {
		string text = "";
		cout << "Enter string: ";
		getline(cin, text);
		cout << "Original: " << text << endl;
		ConvertCase(text, Case::Upper);
		cout << "Upper registry: " << text << endl;
		ConvertCase(text, Case::Lower);
		cout << "Lower registry: " << text << endl;
		break;
	}
	}


	return 0;
}