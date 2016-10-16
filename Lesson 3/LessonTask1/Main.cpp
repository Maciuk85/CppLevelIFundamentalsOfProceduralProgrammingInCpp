#include <iostream>
#include <string>

using namespace std;

double a, b, wynik;
unsigned short operatoR; // operator arytmetyczny
char operatorChar;

int main() {
	cout << "Pierwsza liczba: ";
	cin >> a;
	cout << endl;
	cout << "Druga liczba: ";
	cin >> b;
	cout << endl;
	cout << "Wybierz dzialanie: " << endl << "1 - dodawanie" << endl << "2 - odejmowanie" << endl << "3 - mnozenie" << endl << "4 - dzielenie" << endl << "5 - koniec programu" << endl;
	cout << "Operator: ";
	cin >> operatoR;
	cout << endl;
	switch (operatoR) {
	case 1:
		wynik = a + b;
		operatorChar = '+';
		break;
	case 2:
		wynik = a - b;
		operatorChar = '-';
		break;
	case 3:
		wynik = a*b;
		operatorChar = '*';
		break;
	case 4:
		wynik = a / b;
		operatorChar = '/';
		break;
	default:
		cout << "koniec programu" << endl;
		system("pause");
		return 0;
	}
	
		
	
	cout << "Operator: " << operatorChar << endl << a << operatorChar << b << "=" << wynik << endl;
	system("pause");
	return 0;
}