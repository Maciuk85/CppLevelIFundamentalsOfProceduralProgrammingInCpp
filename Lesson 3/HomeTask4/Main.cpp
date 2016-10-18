# include <iostream>
#include <string>

using namespace std;

double a, b, h, pole;
unsigned short figureMenu;
int main() {

	cout << "Wybierz figure: " << endl;
	cout << "1. Kwadrat" << endl;
	cout << "2. Prostokat" << endl;
	cout << "3. Trojkat" << endl;
	cout << "4. Romb" << endl;
	cout << "5. Koniec programu" << endl;


	cin >> figureMenu;
	switch (figureMenu)
	{
	case 1:
		cout << "a = ";
		cin >> a;
		pole = a*a;
		cout << "a=" << a << endl;
		cout << "Pole=" << pole << endl;
		break;
	case 2:
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		pole = a*b;
		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		cout << "Pole=" << pole << endl;
		break;
	case 3:
		cout << "a = ";
		cin >> a;
		cout << "h = ";
		cin >> h;
		pole = (a*h) / 2;
		cout << "a=" << a << endl;
		cout << "h=" << h << endl;
		cout << "Pole=" << pole << endl;
		break;
	case 4:
		cout << "a = ";
		cin >> a;
		cout << "h = ";
		cin >> h;
		pole = a*h;
		cout << "a=" << a << endl;
		cout << "h=" << h << endl;
		cout << "Pole=" << pole << endl;
		break;
	case 5:
		exit(0);
	default:
		cout << "Nie ma takiej opcji w menu" << endl;
		system("pause");
		return(0);
	}

	system("pause");
	return 0;
}