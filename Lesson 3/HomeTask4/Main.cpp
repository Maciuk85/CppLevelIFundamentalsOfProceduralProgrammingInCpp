# include <iostream>
#include <string>

using namespace std;

string figure;
int a, b, h, pole;
int main() {

	cout << "Wybierz figure(kwadrat,prostokat,trojkat,romb): ";
	cin >> figure;
	if (figure == "kwadrat") {
		cout << "a = ";
		cin >> a;
		pole = a*a;
		cout << "a=" << a << endl;
		cout << "Pole=" << pole << endl;
	} else if (figure =="prostokat") {
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		pole = a*b;
		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		cout << "Pole=" << pole << endl;
	} else if (figure =="trojkat") {
		cout << "a = ";
		cin >> a;
		cout << "h = ";
		cin >> h;
		pole = (a*h)/2;
		cout << "a=" << a << endl;
		cout << "h=" << h << endl;
		cout << "Pole=" << pole << endl;
	} else if (figure == "romb") {
		cout << "a = ";
		cin >> a;
		cout << "h = ";
		cin >> h;
		pole = a*h;
		cout << "a=" << a << endl;
		cout << "h=" << h << endl;
		cout << "Pole=" << pole << endl;
	}
	else {
		cout << "ERROR - zla figura" << endl;
		system("pause");
		return 0;
	}

	system("pause");
	return 0;
}