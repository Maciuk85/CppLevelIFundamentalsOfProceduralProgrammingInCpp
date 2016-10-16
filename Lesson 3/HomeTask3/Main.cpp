# include <iostream>
#include <string>

using namespace std;

string type, volume,yesOrNot;
bool isToneShort, isToneMedium, isToneHigh;
short balanceP;

int main() {

	cout << "Ulubiony gatunek muzyczny (rock/pop/jazz/rnb): ";
	cin >> type; // zmienic na menu

	cout << "Glosnosc muzyki(cicho/glosno): ";
	cin >> volume;

	cout << "Tony niskie(tak/nie): ";
	cin >> yesOrNot;
	if (yesOrNot == "tak") {
		isToneShort = true;
	}
	else if (yesOrNot == "nie") {
		isToneShort == false;
	}

	cout << "Tony srednie(tak/nie): ";
	cin >> yesOrNot;
	if (yesOrNot == "tak") {
		isToneMedium = true;
	}
	else if (yesOrNot == "nie") {
		isToneMedium == false;
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
	}

	cout << "Wybierz balans prawego glosnika(max 10): " << endl;
	cin >> balanceP;
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