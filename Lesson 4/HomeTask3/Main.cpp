// nie dziala, nie wiem jak to zrobic :(

#include <iostream>
#include <array>
#include <string>
#include <time.h>
using namespace std;

string school;
short sum(0), average;
int grades[4]; //domyslnie wprowadzam ilosc przedmiotow bo nie wiem jak zrobic tablice rêcznie wprowadzan¹ iloœci¹ indeksów
int main() {
	cout << "Szkola: ";
	cin >> school;
	cout << endl;
	//tu powienien byc mechanizm ktory deklaruje tablice z okreslon¹ liczba indeksow (zaleznie od rodzaju szkoly)
	size_t size = (sizeof  grades / sizeof grades[0]);
	for (int i = 0; i < size; i++) {
		srand(time(NULL));
		grades[i] = rand() % 6 + 1;

		for (int i = 0; i < size; i++) {
			sum = sum + grades[i];
		}
		average = sum / size;
		cout << "srednia: " << average << endl;
		system("pause");
		return 0;
	}
}
