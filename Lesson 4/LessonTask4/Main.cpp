#include <iostream>

using namespace std;

int numbers[10];

int main() {
	cout << "Wporwadz 10 liczb: ";
	for (int i = 1; i <= 10; i++) {
		cin >> numbers[i];
	}
	cout << "Te liczby od tylu to: ";
	for (int i = 10; i >= 1; i--) {
		cout << numbers[i] << ", ";
	}
	cout << endl;
	system("pause");
	return 0;
}
