#include <iostream>
#include <array>
#include <time.h>

using namespace std;

int angles[10];
int circuit(0);
int loadLengthsOfSides() {
	cout << "Wprowadz kolejne dlugosci bokow " << size(angles) << "-kata: ";
	for (int i = 0; i < size(angles); i++) {
		cin >> angles[i];
	}
	return 0;
}
int calculateCircuit() {
	for (int i = 0; i < size(angles); i++) {
		circuit = circuit + angles[i];
	}
	
	cout << "Obwod: " << circuit << endl;
	return 0;
}
int genLenghtsOfSides() { //wylosowanie dlugosci bokow
	cout << "Wielokat ma wiecej niz 7 katow - dlugosci bokow zostana wylosowane" << endl;
	for (int i = 0; i <= size(angles); i++) {

		angles[i] = rand() % 12 + 1;
		cout << angles[i] << ",";
	}
	cout << endl;
	return 0;
}
int main() {
	srand(time(NULL));
	if (size(angles) <= 2) {
		cout << "Nie ma figuty o takiej ilosci katow";
		system("pause");
		return(0);
	}
	else if (size(angles) > 7) {
		genLenghtsOfSides();
	}
	else {
		loadLengthsOfSides();
	}
	calculateCircuit();
	system("pause");
	return 0;
}
