#include <iostream>
#include <string>

using namespace std;

string name, surname,school, level, profile, isSircle, sircle;
short classNumber; // numer klasy 


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
		cout << "Przedmioty: WF, Polski, Matma" << endl;
	}
	else if (level == "gimnazjum") {
		cout << "Przedmioty: WF, Polski, Matma, Fizyka, Chemia" << endl;
	}
	
	cout << "Czy uczen uczeszcza na kolko?";
		cin >> isSircle;
	if (isSircle == "tak") {
		cout << "Nazwa kolka: ";
		cin >> sircle;
		cout << endl;
		cout << "Imie: " << name << endl;
		cout << "Nazwisko: " << surname << endl;
		cout << "Nazwa Szkoly: " << school << endl;
		cout << "Poziom nauki: " << level << endl;
		cout << "Klasa: " << classNumber << endl;
		cout << "Profil: " << profile << endl;
		cout << "Kolko: " << sircle << endl;
		if (level == "podstawowka") {
			cout << "Przedmioty: WF, Polski, Matma" << endl;
		}
		else if (level == "gimnazjum") {
			cout << "Przedmioty: WF, Polski, Matma, Fizyka, Chemia" << endl;
		}
	}

	else if (isSircle == "nie") {
		cout << "Imie: " << name << endl;
		cout << "Nazwisko: " << surname << endl;
		cout << "Nazwa Szkoly: " << school << endl;
		cout << "Poziom nauki: " << level << endl;
		cout << "Klasa: " << classNumber << endl;
		cout << "Profil: " << profile << endl;
		if (level == "podstawowka") {
			cout << "Przedmioty: WF, Polski, Matma" << endl;
		}
		else if (level == "gimnazjum") {
			cout << "Przedmioty: WF, Polski, Matma, Fizyka, Chemia" << endl;
		}
		
	}

	system("pause");
	return 0;
}
