#include <iostream>
#include <string>

using namespace std;

string name, surname,school, level, profile, isSircle, sircle;
short clasS; // numer klasy 


int main() {

	cout << "Imie: ";
	cin >> name;
	cout << "Nazwisko: ";
	cin >> surname;
	cout << "Nazwa Szkoly: ";
	cin >> school;
	cout << "Poziom nauki: ";
	cin >> level;
	if (level == "podstawowka") {
		
	}
	else if (level == "gimnazjum") {
		
	}
	else {
		cout << "ERROR - zly poziom szkoly" << endl;
		system("pause");
		return 0;
	}
	cout << "Klasa: ";
	cin >> clasS;
	if (level == "gimnazjum") {
		switch (clasS)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			cout << "ERROR - zla klasa" << endl;
			system("pause");
			return 0;
		}

	}
	else if (level == "podstawowka") {
		switch (clasS)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			cout << "ERROR - zla klasa" << endl;
			system("pause");
			return 0;
		}
	}
	else {
		cout << "ERROR - zly poziom szkoly" << endl;
		system("pause");
		return 0;
	}
	cout << "Profil: ";
	cin >> profile;

	cout << "Imie: " << name << endl;
	cout << "Nazwisko: " << surname << endl;
	cout << "Nazwa Szkoly: " << school << endl;
	cout << "Poziom nauki: " << level << endl;
	cout << "Klasa: " << clasS << endl;
	cout << "Profil: "  << profile << endl;
	if (level == "podstawowka") {
		cout << "Przedmioty: WF, Polski, Matma" << endl;
	}
	else if (level == "gimnazjum") {
		cout << "Przedmioty: WF, Polski, Matma, Fizyka, Chemia" << endl;
	}
	else {
		cout << "ERROR - zly poziom szkoly" << endl;
		system("pause");
		return 0;
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
		cout << "Klasa: " << clasS << endl;
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
		cout << "Klasa: " << clasS << endl;
		cout << "Profil: " << profile << endl;
		if (level == "podstawowka") {
			cout << "Przedmioty: WF, Polski, Matma" << endl;
		}
		else if (level == "gimnazjum") {
			cout << "Przedmioty: WF, Polski, Matma, Fizyka, Chemia" << endl;
		}
		else {
			cout << "ERROR - zly poziom szkoly" << endl;
			system("pause");
			return 0;
		}
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
		return 0;
	}

	system("pause");
	return 0;
}
