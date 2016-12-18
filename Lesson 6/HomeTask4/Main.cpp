#include <iostream>
#include<string>
#include <conio.h>
#include <vector>
using namespace std;
short menu,menu2, carNum;
int parametry[6];
string nick, car;
void readName() {
	system("cls");
	cout << "Podaj nick: ";
	cin >> nick;
	system("cls");
}
void chooseCar() {
	system("cls");
	cout << "Wybierz samochod: " << endl;
	cout << "1.Bugatti Veyron" << endl;
	cout << "2.Porsche 911" << endl;
	cout << "3.Audi" << endl;
	cout << "4.Seat" << endl;
	cout << "5.Honda" << endl;
	cout << "6.Ford" << endl;
	cout << "7.Ferrari" << endl;
	cout << "8.Opel" << endl;
	cin >> carNum;
	switch (carNum) {
	case 1:
		parametry[1] = 9; parametry[2] = 6; parametry[3] = 8; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Bugatti Veyron";
			break;
	case 2:
		parametry[1] = 8; parametry[2] = 5; parametry[3] = 8; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Porsche 911";
		break;
	case 3:
		parametry[1] = 6; parametry[2] = 7; parametry[3] = 6; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Audi";
		break;
	case 4:
		parametry[1] = 7; parametry[2] = 8; parametry[3] = 7; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Seat";
		break;
	case 5:
		parametry[1] = 5; parametry[2] = 8; parametry[3] = 5; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Honda";
		break;
	case 6:
		parametry[1] = 7; parametry[2] = 4; parametry[3] = 9; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Ford";
		break;
	case 7:
		parametry[1] = 8; parametry[2] = 4; parametry[3] = 9; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Ferrari";
		break;
	case 8:
		parametry[1] = 5; parametry[2] = 7; parametry[3] = 4; parametry[4] = 9; parametry[5] = 9; parametry[6] = 0;
		car = "Opel";
		break;

	}	
}
void writeParameters() {
	cout << "Nick: " << nick << endl;
	cout << "Auto: " << car << endl;
	cout << "Parametry auta: " << endl;
	cout << "Moc silnika: " << parametry[1] << endl;
	cout << "Ciezar: " << parametry[2] << endl;
	cout << "Przyspieszenie: " << parametry[3] << endl;
	cout << "Stan karoserii: " << parametry[4] << endl;
	cout << "Stan mechaniczny: " << parametry[5] << endl;
	cout << "Nitro: " << parametry[6] << endl;
	system("pause");
	createMenu2();
}
void createMenu2() {
	system("cls");
	cout << "1.Wyscig" << endl;
	cout << "2.Profil gracza" << endl;
	cout << "3.Warsztat" << endl;
	cout << "4.Sklep" << endl;
	cout << "5.Wroc" << endl;
	cin >> menu2;
	switch (menu2) {
	case 1:

		break;
	case 2:
		writeParameters();
		break;
	case 3:

		break;
	case 4:

		break;
	case 5:
		createMenu();
		break;
	}
}
void createMenu() {
	system("cls");
	cout << "1.Rozpocznij gre" << endl;
	cout << "2.Wyjscie" << endl;
	cin >> menu;
	switch (menu) {
	case 1:
		readName();
		chooseCar();
		createMenu2();
		break;
	case 2:
		system("pause");
		break;
	}
}
int main() {
	createMenu();
	

}