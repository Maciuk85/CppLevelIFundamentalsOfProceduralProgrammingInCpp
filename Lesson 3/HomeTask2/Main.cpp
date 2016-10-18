#include <iostream>
#include <string>

using namespace std;

string name, surname,school, level, profile, sircle, basicSubjects("WF, Polski, Matma");
short classNumber; // numer klasy 
bool isSircle(false);


int main() {

	cout << "Imie: ";
	cin >> name;
	cout << "Nazwisko: ";
	cin >> surname;
	cin.ignore();
	cout << "Nazwa Szkoly: ";
	getline(cin, school);
	cout << "Poziom nauki: ";
	cin >> level;
	cout << "Klasa: ";
	cin >> classNumber;

	cout << "Profil: ";
	cin >> profile;

	cout << "Imie: " << name << endl;
	cout << "Nazwisko: " << surname << endl;
	cout << "Nazwa Szkoly: " << school << endl;
	cout << "Poziom nauki: " << level << endl;
	cout << "Klasa: " << classNumber << endl;
	cout << "Profil: "  << profile << endl;
	if (level == "podstawowka") {
		cout << "Przedmioty: " << basicSubjects << endl;
	}
	else if (level == "gimnazjum") {
		cout << "Przedmioty: " << basicSubjects << ", Fizyka, Chemia" << endl;
	}
	
	cout << "Czy uczen uczeszcza na kolko?(0-nie,1-tak)";
		cin >> isSircle;
		if (isSircle == true) {
			cout << "Nazwa kolka: ";
			cin >> sircle;
			cout << endl;
		}
		cout << "Imie: " << name << endl;
		cout << "Nazwisko: " << surname << endl;
		cout << "Nazwa Szkoly: " << school << endl;
		cout << "Poziom nauki: " << level << endl;
		cout << "Klasa: " << classNumber << endl;
		cout << "Profil: " << profile << endl;
		cout << "Kolko: " << sircle << endl;
		cout << "Profil: " << profile << endl;
		if (level == "podstawowka") {
			cout << "Przedmioty: " << basicSubjects << endl;
		}
		else if (level == "gimnazjum") {
			cout << "Przedmioty: " << basicSubjects << ", Fizyka, Chemia" << endl;
		}
	

	system("pause");
	return 0;
}
