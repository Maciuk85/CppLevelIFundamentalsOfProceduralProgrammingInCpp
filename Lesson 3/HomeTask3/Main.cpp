# include <iostream>
#include <string>

using namespace std;

string type, volume,yesOrNot;
bool isToneShort, isToneMedium, isToneHigh;
short balanceP;

int main() {

	cout << "Ulubiony gatunek muzyczny (rock/pop/jazz/rnb): ";
	cin >> type;

	if (type == "rock") {
		
	}
	else 	if (type == "pop") {
		
	}
	else if (type == "jazz") {
		
	}
	else 	if (type == "rnb") {
		
	}
	else {
		cout << "ERROR" << endl;
		system("pause");
		return 0;
	}

	cout << "Glosnosc muzyki(cicho/glosno): ";
	cin >> volume;

	if (volume == "cicho") {

	}
	else 	if (volume == "glosno") {

	}
	else {
		cout << "ERROR" << endl;
		system("pause");
		return 0;
	}

	cout << "Tony niskie(tak/nie): ";
	cin >> yesOrNot;
	if (yesOrNot == "tak") {
		isToneShort = true;
	}
	else if (yesOrNot == "nie") {
		isToneShort == false;
	}
	else {
		cout << "ERROR - dopuszczalne bylo tylko tak/nie" << endl;
		system("pause");
		return 0;
	}

	cout << "Tony srednie(tak/nie): ";
	cin >> yesOrNot;
	if (yesOrNot == "tak") {
		isToneMedium = true;
	}
	else if (yesOrNot == "nie") {
		isToneMedium == false;
	}
	else {
		cout << "ERROR - dopuszczalne bylo tylko tak/nie" << endl;
		system("pause");
		return 0;
	}
	if (isToneShort != true) {
		if (isToneMedium != true) {
			cout << "Tony wysokie - tak" << endl;
			isToneHigh = true;
		}
		}
	else {
		cout << "Tony wysokie(tak/nie): ";
		cin >> yesOrNot;
		if (yesOrNot == "tak") {
			isToneHigh = true;
		}
		else if (yesOrNot == "nie") {
			isToneHigh == false;
		}
		else {
			cout << "ERROR - dopuszczalne bylo tylko tak/nie" << endl;
			system("pause");
			return 0;
		}
	}

	cout << "Wybierz balans prawego glosnika(max 10): " << endl;
	cin >> balanceP;
	if (balanceP < 0 || balanceP>10) {
		cout << "ERROR" << endl;
		system("pause");
		return 0;
	}
	
	cout << endl;

	cout << "Gatunek: " << type << endl;
	cout << "Glosnosc: " << volume << endl;
	cout << "Tony: ";
	if (isToneShort == true) {
		cout << "niskie ";
	}
	if (isToneMedium == true) {
		cout << "srednie ";
	}
	if (isToneHigh == true) {
		cout << "wysokie ";
	}
	cout << endl;
	cout << "Balans prawego glosnika: " << balanceP << endl;
	cout << "Balans lewego glosnika: " << 10 - balanceP << endl;
	system("pause");
	return 0;
}