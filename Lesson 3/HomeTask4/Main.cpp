# include <iostream>
#include <string>

using namespace std;

string figure;
double a, b, h, pole;
short figureMenu;
int main() {

	cout << "Wybierz figure(kwadrat-1,prostokat-2,trojkat-3,romb-4): "; 
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
	}

	system("pause");
	return 0;
}