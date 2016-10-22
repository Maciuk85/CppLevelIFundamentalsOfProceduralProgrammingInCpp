#include <iostream>
#include<time.h>


using namespace std;

int number, numberV2,i(0); //wprowadzana liczba, losowana liczba,liczba prob

short genNumber() {
	numberV2 = rand() % 30 + 1;
	cout << numberV2 << ", ";
	i++;
	return 0;
}

int main() {
	srand(time(NULL));//zawsze na samym poczatku programu
	cout << "Wprowadz liczbe (1-30): ";
	cin >> number;
	cout << endl;
	
	while (numberV2 != number) {
		genNumber();
	}

	cout << "Potrzebne bylo " << i << " prob" << endl;

	system("pause");
	return 0;
}
