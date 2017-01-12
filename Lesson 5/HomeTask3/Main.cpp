#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double x1, x2;//dziedzina od-do
double step; //krok
vector <double> results;
double wspolczynniki[4];
double calculate(double x) {
	double result;
	result = wspolczynniki[0]*sin(x+ wspolczynniki[1]) + wspolczynniki[2] *cos(x+ wspolczynniki[3]); // Nie wiem jak dzialaja te sinusy i cosinusy :/
	return result;
}
void wczytajWspolczynniki(){
	cout << "Podaj wspolczynniki funkcji:" << endl;
cout << "a: ";
cin >> wspolczynniki[0];
cout << "b: ";
cin >> wspolczynniki[1];
cout << "c: ";
cin >> wspolczynniki[2];
cout << "d: ";
cin >> wspolczynniki[3];
}
int main() {


	cout << "Podaj zakres dziedziny funkcji:" << endl;
	cout << "Od: ";
	cin >> x1;
	cout << "Do: ";
	cin >> x2;
	cout << "Podaj dlugosc kroku: ";
	cin >> step;
	wczytajWspolczynniki();

	for (double i = x1; i <= x2; i=i+step) {
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