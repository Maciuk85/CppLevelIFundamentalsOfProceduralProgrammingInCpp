#include <iostream>
#include <array>
#include <string>
#include <time.h>
using namespace std;            

unsigned short school;
double sum(0), mark(0);

double genMark() {

	mark = rand() % 6 + 1;

	//Nie mozemy podwyzszyc 6 do oceny 6.5
	if (mark != 6) {
		//Losujemy czy podywzsze ocene o 0.5
		if (round(double(rand()) / (RAND_MAX))) {
			mark = mark + 0.5;
		}

	}
	return (mark);
}

double calculateAverage(short numberOfSubjects) {
	
	for (int i = 0; i < numberOfSubjects; i++) {
		genMark();
		cout << "Ocena nr " << i + 1 << " = " << mark << endl;

		sum = sum + mark;
	}
	return(sum/numberOfSubjects);
}

int main() {
	srand(time(NULL));
	cout << "Wybierz szkole: ";
	cout << "1. SP" << endl;
	cout << "2. Gim" << endl;
	cout << "3. Lic" << endl;
	cout << "4. Zakoncz Program" << endl;
	cin >> school;
	switch (school)

	{
	case 1:
		cout << "Srednia: " << calculateAverage(4) << endl;
		break;
	case 2:
		cout << "Srednia: " << calculateAverage(6) << endl;
		break;
	case 3:
		cout << "Srednia: " << calculateAverage(7) << endl;
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
