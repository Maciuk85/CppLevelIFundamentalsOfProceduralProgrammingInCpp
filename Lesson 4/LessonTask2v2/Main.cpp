#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int number, power; //liczba,pot�ga

int main() {
	cout << "Podaj liczbe: ";
	cin >> number;
	cout << endl;
	cout << "Podaj potege: ";
	cin >> power;
	cout << endl;
	number = pow(number, power);
	cout << number << endl;
	system("pause");
	return 0;
}