#include <iostream>
#include <vector>
#include <time.h>
#include<string>
#include <cstring>
using namespace std;

string word;
string ss = "aaa";
const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
char alphabet2[size(alphabet)];
vector <char> vectorAlphabet(alphabet, alphabet + size(alphabet));
short menu, a;

void genCode() {
	int i = 0;
	while(vectorAlphabet.size() != 1){
		short randomIndex = rand() % (vectorAlphabet.size()-1);
		alphabet2[i] = vectorAlphabet[randomIndex];
		vectorAlphabet.erase(vectorAlphabet.begin()+randomIndex);
		i++;
	}
	alphabet2[i] = vectorAlphabet[0];
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
	genCode();


	for (;;) {
		createMenu();
		switch (menu) {
		case 1:
			cout << "Podaj slowo: ";
			cin >> word;
			cout << "roZMIAR = " << size(word) << endl;
			for (int i = 0; i < size(word); i++) {
				for (int j = 0; j < size(alphabet); j++) {
					if (alphabet[j] == word[i]) {
						word[i] = alphabet2[j];
						break;
					}
				}
			}
			cout << endl << "Zaszyfrowane slowo: " << word << endl;
			break;
		case 2:
			cout << "Podaj slowo: ";
			cin >> word;
			for (int i = 0; i < size(word); i++) {
				for (int j = 0; j < size(alphabet); j++) {
					if (alphabet2[j] == word[i] ) {
						word[i] = alphabet[j];
						break;
					}
				}
			}
			cout << endl << "Odszyfrowane slowo: " << word << endl;
			break;
		case 3:
			cout << "Rozmiar = " << size(alphabet) << endl;
			for (int i = 0; i <size(alphabet); i++) {
				cout << alphabet[i] << " = " << alphabet2[i] << endl;
			}
			break;
		default:
			cout << "Koniec porgramu" << endl;
			system("pasue");
			return 0;
		}
	}


	system("pasue");
	return 0;
}