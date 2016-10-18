# include <iostream>
#include <string>

using namespace std;

string type, volume,yesOrNot;
bool isToneShort(0), isToneMedium(0), isToneHigh(0);
short balanceP,balanceL, typeMenu;

int main() {

	cout << "Wybierz ulubiony gatunek muzyczny:" << endl;
	cout << "1.Rock" << endl;
	cout << "2.Pop" << endl;
	cout << "3.Jazz" << endl;
	cout << "4.Rnb" << endl;
	cout << "5.Koniec programu" << endl;
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
	case 5:
		exit(0);
	default:
		"Nie ma takiej opcji w menu";
		system("pause");
		return 0;
	}

	cout << "Glosnosc muzyki(cicho/glosno): ";
	cin >> volume;

	cout << "Tony niskie(tak/nie): ";
	cin >> yesOrNot;
	if (yesOrNot == "tak") {
		isToneShort = true;
	}
	

	cout << "Tony srednie(tak/nie): ";
	cin >> yesOrNot;
	if (yesOrNot == "tak") {
		isToneMedium = true;
	}
	

	if (isToneShort == false && isToneMedium == false) {
			cout << "Tony wysokie - tak(minimum 1 ton musi byc wybrany)" << endl;
			isToneHigh = true;
		}
	else {
		cout << "Tony wysokie(tak/nie): ";
		cin >> yesOrNot;
		if (yesOrNot == "tak") {
			isToneHigh = true;
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