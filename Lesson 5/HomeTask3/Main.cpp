#include <iostream>
#include <vector>

using namespace std;

double x1, x2;//dziedzina od-do
double step; //krok
vector <double> results;
double wspolczynniki[4];
double calculate(double a,double b,double c,double d,double x) {
	double result;
	result = a*sin(x+b) + c*cos(x+d); // Nie wiem jak dzialaja te sinusy i cosinusy :/
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

	for (int i = 0; i < (x2 - x1)/step; i++) {
		results.push_back(calculate(wspolczynniki[0],wspolczynniki[1],wspolczynniki[2],wspolczynniki[3],i));
	}
	cout << "Wyniki: " << endl;
	for (int i = 0; i < results.size(); i++) {
		cout << results[i] << ",";
	}
	cout << endl;
	system("pause");
	return 0;
}