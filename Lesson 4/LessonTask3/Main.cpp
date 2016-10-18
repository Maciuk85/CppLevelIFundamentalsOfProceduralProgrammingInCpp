#include <iostream>
#include<time.h>


using namespace std;

int number,numberV2; //wprowadzana liczba, losowana liczba

int main() {
	srand(time(NULL));//zawsze n asamym poczatku programu
	cout << "Wprowadz liczbe (1-30): ";
		cin >> number;
		cout << endl;
		int i(0); //liczba prob
		while (numberV2 != number) {
			numberV2 = rand() % 30 + 1;
			cout << numberV2 << ", ";
			i++;
		}

		cout << "Potrzebne bylo " << i << " prob" << endl;

	system("pause");
	return 0;
}
