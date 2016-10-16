#include <iostream>
#include<time.h>


using namespace std;

int number,numberV2;

int main() {
	cout << "Wprowadz liczbe (1-30): ";
		cin >> number;
		cout << endl;
		int i(0);
		while (numberV2 != number) {
			srand(time(NULL));
			numberV2 = rand() % 30 + 1;
			cout << numberV2 << ", ";
			i++;
		}

		cout << "Potrzebne bylo " << i << " prob" << endl;

	system("pause");
	return 0;
}
