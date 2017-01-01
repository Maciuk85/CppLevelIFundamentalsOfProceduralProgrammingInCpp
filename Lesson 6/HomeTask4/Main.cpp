#include <iostream>
#include<string>
#include <conio.h>
#include <vector>

using namespace std;
short carNum, partNum;
short parameters[8][6];
short shop[3][5]; // [partNum(1 -mechaniczne 2-wizualne 3- dodatkowe)] [numer czesci]
const string cars[8] = { "Bugatti Veyron","Porsche 911","Lamborghini","Audi","Ferrari","Mercedes","Seat", "Ford" };
string nick;

void backToPreviousView() {
	do
	{
		cout << "Wcisnij ESC aby zamknac";
	} while (_getch() != '\x1B');
}

void openShop() {
	cout << "Sklep" << endl;
	cout << "Wybierz czêœci: " << endl;
	cout << "1. Mechaniczne" << endl;
	cout << "2. Wizualne" << endl;
	cout << "3. Dodatkowe" << endl;
	cout << "4. Powrót" << endl;
	cin >> partNum;
	switch (partNum) {
	case 1:

		break;
	case 2:

		break;
	case 3:
		
		break;
	case 4:
		system("cls");
		backToPreviousView();
	}
}

void genParameters() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 6; j++) {
			parameters[i][j] = 80;
		}
	}
}

void appSettings() {
	genParameters();

}

string readNick() {
	string nick;
	system("cls");
	cout << "Podaj nick: ";
	cin >> nick;
	return(nick);
}
short chooseCar() {
	short car;
	system("cls");
	cout << "Wybierz samochod: " << endl;
	cout << "1.Bugatti Veyron" << endl;
	cout << "2.Porsche 911" << endl;
	cout << "3.Lamborghini" << endl;
	cout << "4.Audi" << endl;
	cout << "5.Ferrari" << endl;
	cout << "6.Mercedes" << endl;
	cout << "7.Seat" << endl;
	cout << "8.Ford" << endl;
	cin >> car;
	return(car);
}

void showUserProfile() {
	system("cls");
	cout << "Nick: " << nick << endl;
	cout << "Auto: " << cars[carNum] << endl;
	cout << "Parametry auta: " << endl;
	cout << "Moc silnika: " << parameters[carNum][1] << endl;
	cout << "Ciezar: " << parameters[carNum][2] << endl;
	cout << "Przyspieszenie: " << parameters[carNum][3] << endl;
	cout << "Stan karoserii: " << parameters[carNum][4] << endl;
	cout << "Stan mechaniczny: " << parameters[carNum][5] << endl;
	cout << "Nitro: " << parameters[carNum][6] << endl;

}

void showGameMenu() {
	for (;;) {
		short operationNum;
		system("cls");
		cout << "1.Wyscig" << endl;
		cout << "2.Profil gracza" << endl;
		cout << "3.Warsztat" << endl;
		cout << "4.Sklep" << endl;
		cout << "5.Wroc" << endl;
		cin >> operationNum;
		switch (operationNum) {
		case 1:

			break;
		case 2:
			showUserProfile();
			backToPreviousView();
			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		default:
			system("cls");
			backToPreviousView();
			break;
		}
	}
}

void startGame() {
	nick = readNick();
	carNum = chooseCar();
	showGameMenu();
}

void showMainMenu() {
	short operationNum;
	system("cls");
	cout << "1.Rozpocznij gre" << endl;
	cout << "2.Wyjscie" << endl;
	cin >> operationNum;
	switch (operationNum) {
	case 1:
		startGame();
		/*	readName();
		chooseCar();
		createMenu2();*/
		break;
	case 2:
		exit(0);
	default:
		exit(0);
		break;
	}
}

void runApp() {
	showMainMenu();
}

int main() {
	appSettings();
	runApp();
	return 0;

}