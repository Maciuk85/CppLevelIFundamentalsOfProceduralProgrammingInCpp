#include <iostream>
#include <string>

using namespace std;

int result, number, power; //wynik,liczba,potêga

int main() {
	cout << "Podaj liczbe: ";
	cin >> number;
		cout << endl;
		cout << "Podaj potege: ";
		cin >> power;
		cout << endl;
		result = number;
		for(int i=2;i<=power;i++)
		{
			result = result*number;
		}
		if (power == 0) {
			result = 1;
		}
		cout << "Wynik: " << result << endl;
		system("pause");
		return 0;
}