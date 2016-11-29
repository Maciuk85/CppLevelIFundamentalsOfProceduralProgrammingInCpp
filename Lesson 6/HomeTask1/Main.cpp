#include <iostream>
#include <vector>
#include <time.h>
#include<string>

using namespace std;

string word;
char letter('A');
char code[26];
vector<char> alphabet[26];
vector<char> alphabetv2[26];
short menu, a;

void genCode() {
	for (int i = 0; i < 26; i++) {
		a = rand() % 26;
		code[i] = alphabet[a];
		alphabet.erase(alphabet.begin() + a - 1);
	}
}
void createAlphabet() {
	letter = 'A';
	for (int i = 0; i < 26; i++) {
		alphabet[i] = letter;
		letter = letter + 1;
	}
	letter = 'A';
	for (int i = 0; i < 26; i++) {
		alphabetv2[i] = letter;
		letter = letter + 1;
	}
}
void createMenu() {
	cout << "Wybierz operacje: " << endl;
	cout << "1.Zaszyfruj" << endl;
	cout << "2.Odszyfruj" << endl;
	cout << "3.Wyswietl szyfr" << endl;
	cin >> menu;
}

int main() {
	srand(time(NULL));
	createAlphabet();
	genCode();
	for (;;) {
		createMenu();
		switch (menu) {
		case 1:
			cout << "Podaj slowo: ";
			cin >> word;
			for (int i = 0; i < word.size(); i++) {
				for (int j = 0; j < 26; j++) {
					if (word[j] == alphabetv2[i]) {
						word[j] = code[i];
					}
				}
			}
			cout << endl << "Zaszyfrowane slowo: " << word << endl;
			break;
		case 2:
			cout << "Podaj slowo: ";
			cin >> word;
			for (int i = 0; i < word.size(); i++) {
				for (int j = 0; j < 26; j++) {
					if (word[j] == code[i]) {
						word[j] = alphabetv2[i];
					}
				}
			}
			cout << endl << "Odszyfrowane slowo: " << word << endl;
			break;
		case 3:
			letter = 'A';
			for (int i = 0; i < 26; i++) {
				cout << letter << ' = ' << code[i] << endl;
				letter = letter + 1;
			}
			break;
		default:
			cout << "Koniec porgramu" << endl;
			system("pasue");
			return 0;
		}
	}


}