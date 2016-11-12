#include <iostream>
#include <array>
#include <string>
#include <time.h>
using namespace std;


unsigned short school;
double marks[7];
double sum(0);

double genMarks(short numberOfSubjects) {
	for (int i = 0; i < numberOfSubjects; i++) {
		marks[i] = rand() % 6 + 1;

		//Nie mozemy podwyzszyc 6 do oceny 6.5
		if (marks[i] != 6) {
			//Losujemy czy podywzsze ocene o 0.5
			if (round(double(rand()) / (RAND_MAX))) { 
				marks[i] = marks[i] + 0.5;
			}
	}
	}
	return (0);
}
short showMenu() {
	cout << "Wybierz szkole: " << endl;
	cout << "1. SP" << endl;
	cout << "2. Gim" << endl;
	cout << "3. Lic" << endl;
	cout << "4. Zakoncz Program" << endl;
	cin >> school;
	return 0;
}

double calculateAverage(short numberOfSubjects) {

	for (int i = 0; i < numberOfSubjects; i++) {
		cout << "Ocena nr " << i + 1 << " = " << marks[i] << endl;

		sum = sum + marks[i];
	}
	return(sum / numberOfSubjects);
}
double calculateBestMark(int numberOfSubjects) {
	double bestMark(0);
	for (int i = 0; i < numberOfSubjects; i++) {
		if (marks[i] > bestMark) {
			bestMark = marks[i];
		}
	}
	return bestMark;
}
double calculateWorstMark(int numberOfSubjects) {
	double worstMark(6);
	for (int i = 0; i < numberOfSubjects; i++) {
		if (marks[i] < worstMark) {
			worstMark = marks[i];
		}
	}
	return worstMark;
}
double calculateMedian(int numberOfSubjects) { // poszeregowac liczby od najw do najm 
	double med, a;
	if (numberOfSubjects == 7) { 
		med = marks[3];
	}
	else if (numberOfSubjects == 4) {
		a = marks[1] + marks[2];
			med = a / 2;
	}
	else {
		a = marks[2] + marks[3];
		med = a / 2;
	}
	return med;
}
int checkDangerous(int numberOfSubjects) {
	bool isDangerous(false);
	for (int i = 0; i < numberOfSubjects; i++) {
		if (marks[i] == 1) {
			isDangerous = true;
			break;
		}
	}
	return isDangerous;
}
int main() {
	srand(time(NULL));
	showMenu();
	switch (school) // zrobic funckje wypiszDane();
	{
	case 1:
		genMarks(4);
		cout << "Srednia: " << calculateAverage(4) << endl;
		cout << "Mediana: " << calculateMedian(4) << endl;
		cout << "Najlepsza ocena: " << calculateBestMark(4) << endl;
		cout << "Najgorsza ocena: " << calculateWorstMark(4) << endl;
		cout << "Zagrozenie(0-nie,1-tak): " << checkDangerous(4) << endl;
		break;
	case 2:
		genMarks(6);
		cout << "Srednia: " << calculateAverage(6) << endl;
		cout << "Mediana: " << calculateMedian(6) << endl;
		cout << "Najlepsza ocena: " << calculateBestMark(6) << endl;
		cout << "Najgorsza ocena: " << calculateWorstMark(6) << endl;
		cout << "Zagrozenie(0-nie,1-tak): " << checkDangerous(6) << endl;
		break;
	case 3:
		genMarks(7);
		cout << "Srednia: " << calculateAverage(7) << endl;
		cout << "Mediana: " << calculateMedian(7) << endl;
		cout << "Najlepsza ocena: " << calculateBestMark(7) << endl;
		cout << "Najgorsza ocena: " << calculateWorstMark(7) << endl;
		cout << "Zagrozenie(0-nie,1-tak): " << checkDangerous(7) << endl;
		break;
	case 4:
		system("pause");
		return(0);
	default:
		cout << "Nie ma takiej pozycji na liscie" << endl;
		system("pause");
		return(0);
	}

	system("pause");
	return 0;
};
