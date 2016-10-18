# include <iostream>
#include <string>

using namespace std;

string type, volume,yesOrNot;
bool isToneShort, isToneMedium, isToneHigh;
short balanceP,balanceL, typeMenu;

int main() {

	cout << "Ulubiony gatunek muzyczny (1 - rock/2 - pop/3 - jazz/4 - rnb): ";
	cin >> typeMenu; 
	switch (typeMenu)
	{
	case 1:
		type = "rock";
		break;

	case 2:
		type = "pop";
		break;
	case 3:
		type = "jazz";
		break;
	case 4:
		type = "rnb";
		break;
	}

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
	
	if (isToneShort == false) {
		if (isToneMedium == false) {
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
	balanceL = 10 - balanceP;
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
	cout << "Balans lewego glosnika: " << balanceL << endl;
	system("pause");
	return 0;
}