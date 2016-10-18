#include <iostream>
#include <string>

using namespace std;



int main() {



	unsigned short cars(0);
	cout << "Liczba samochody/ow: ";
	cin >> cars;
	if (cars == 0) {
		cout << "Nie masz zadnych samochodow" << endl;
	} else if (cars <= 5) {
		cout << "Mam " << cars << " samochodow" << endl;
	}
	else if ( 5 < cars && cars <= 15) {
		cout << "Mam bardzo duzo samochodow a konkretnie " << cars << " samochodow" << endl;
	}
	else {
		cout << "jestem bogaty po prostu" << endl;
	}
	
	
	short a(5), b(4);
	cout << "a = " << a << "," << " b = " << b << endl;

	b = a;
	cout << "a = " << a << "," << " b = " << b << endl;

	cout << "Ile wynosi liczba Pi?" << endl;
	double pi(-1);
	cin >> pi;
	cin.ignore();

	cout << "Jak sie nazywasz?(Imie i Nazwisko)" << endl;
	string userName("Brak imienia");
	getline(cin,userName);
	
	

	cout << "Nazywasz sie " << userName << " i twoim zdaniem liczba pi wynosi " << pi << endl;

	system("pause");
	return 0;
}
