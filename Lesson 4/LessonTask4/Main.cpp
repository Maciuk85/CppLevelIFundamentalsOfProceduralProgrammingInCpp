#include <iostream>

using namespace std;

int numbers[10];
string napis = "lampa";
int main() {
	cout << "Wporwadz 10 liczb: ";

	for (int i = 0; i < size(numbers); i++) {
		cin >> numbers[i];
	}
	cout << "Te liczby od tylu to: ";
	for (int i = size(numbers)-1; i >= 0; i--) {
		cout << numbers[i] << ", ";
	}
	cout << endl;
	system("pause");
	return 0;
}
