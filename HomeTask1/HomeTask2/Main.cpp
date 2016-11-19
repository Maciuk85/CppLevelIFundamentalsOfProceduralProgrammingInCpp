#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double x1, x2;//dziedzina od-do
double step; //krok
vector <double> results;
short menu;
double calculate(double x) {
	double result;
	switch (menu) {
	case 1: 
		result = 4 * x;
		break;
	case 2:
		result = x+3;
		break;
	case 3:
		result =x-2;
		break;
	case 4:
		result = 0,75*x;
		break;
	case 5:
		result = x;
		break;
	case 6:
		result = x / 5;
		break;
	case 7:
		result = 2*x+3;
		break;
	case 8:
		result = 3*x-5;
		break;
	case 9:
		result = 0,5*4*x;
		break;
	case 10:
		result = 3*0,2*x;
		break;
	}
	return result;
}
void createMenu() {
	cout << "Wybierz funkcje: " << endl;
	cout << "1. f(x) = 4x" << endl;
	cout << "2. f(x) = x+3" << endl;
	cout << "3. f(x) = x-2" << endl;
	cout << "4. f(x) = 0,75x" << endl;
	cout << "5. f(x) = x" << endl;
	cout << "6. f(x) = x/5" << endl;
	cout << "7. f(x) = 2x+3" << endl;
	cout << "8. f(x) = 3x-5" << endl;
	cout << "9. f(x) = 0,5*4x" << endl;
	cout << "10. f(x) = 3*0,2x" << endl;
	cout << "11.Koniec porgramu" << endl;
	cin >> menu;
}
int main() {
	createMenu();
	if (menu > 10) {
		cout << "Koniec programu" << endl;
		system("pause");
		return 0;
	}
	cout << "Podaj zakres dziedziny funkcji:" << endl;
	cout << "Od: ";
	cin >> x1;
	cout << "Do: ";
	cin >> x2;
	cout << "Podaj dlugosc kroku: ";
	cin >> step;
	for (double i = x1; i <= x2; i = i + step) {
		results.push_back(calculate(i));
	}
	cout << "Wyniki: " << endl;
	for (int i = 0; i < results.size(); i++) {
		cout << results[i] << ",";
	}
	cout << endl;
	system("pause");
	return 0;
}