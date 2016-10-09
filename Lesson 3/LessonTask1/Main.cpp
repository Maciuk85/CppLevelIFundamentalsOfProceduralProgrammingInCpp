#include <iostream>
#include <string>

using namespace std;

double a, b, wynik;
string operatoR; // operator arytmetyczny

int main() {
	cout << "Pierwsza liczba: ";
	cin >> a;
	cout << endl;
	cout << "Druga liczba: ";
	cin >> b;
	cout << endl;
	cout << "Operator: ";
	cin >> operatoR;
	cout << endl;
	if (operatoR == "+") {
		wynik = a + b;
	}
	else if (operatoR == "-") {
		wynik = a - b;
	}
	else if (operatoR == "/") {
		wynik = a / b;
	}
	else if (operatoR == "*") {
		wynik = a * b;
	}
	else {
		cout << "Zly operator, koniec programu" << endl;
		system("pause");
		return 0;
	}
	cout << "Operator: " << operatoR << endl << a << operatoR << b << "=" << wynik << endl;
	system("pause");
	return 0;
}