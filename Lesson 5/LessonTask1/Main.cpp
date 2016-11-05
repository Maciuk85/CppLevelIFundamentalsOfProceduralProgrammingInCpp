#include <iostream>
#include <string>

using namespace std;

string name, surname, school, level, profile, sircle, basicSubjects("WF, Polski, Matma");
short classNumber; // numer klasy 
bool isSircle(false);

short readData() {
	cout << "Imie: ";
	cin >> name;
	cout << "Nazwisko: ";
	cin >> surname;
	cin.ignore();
	cout << "Nazwa Szkoly: ";
	getline(cin, school);
	cout << "Poziom nauki(gimnazjum,podstawowka): ";
	cin >> level;
	cout << "Klasa: ";
	cin >> classNumber;
	cout << "Profil: ";
	cin >> profile;
	return 0;
}
short writeData() { //wypisywanie danych

	cout << "Imie: " << name << endl;
	cout << "Nazwisko: " << surname << endl;
	cout << "Nazwa Szkoly: " << school << endl;
	cout << "Poziom nauki: " << level << endl;
	cout << "Klasa: " << classNumber << endl;
	cout << "Profil: " << profile << endl;
	if (level == "podstawowka") {
		cout << "Przedmioty: " << basicSubjects << endl;
	}
	else if (level == "gimnazjum") {
		cout << "Przedmioty: " << basicSubjects << ", Fizyka, Chemia" << endl;
	}
	return 0;
}

int main() {
	readData();
	writeData();
	cout << "Czy uczen uczeszcza na kolko?(0-nie,1-tak)";
	cin >> isSircle;
	if (isSircle == true) {
		cout << "Nazwa kolka: ";
		cin >> sircle;
		cout << endl;
	}
	writeData();
	cout << "Kolko: " << sircle << endl;

	system("pause");
	return 0;
}
