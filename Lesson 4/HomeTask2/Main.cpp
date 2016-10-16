#include <iostream>
#include <array>
#include <time.h>

using namespace std;

int angles[2];
int circuit(0);
int main() {
	size_t size = (sizeof  angles/ sizeof angles[0]);
	if (size > 7) {
		for (int i = 0; i <= size; i++) {
			srand(time(NULL));
			angles[i] = rand() % 12 + 1;
		}
		cout << "Wielokat ma wiecej niz 7 katow - dlugosci bokow zostana wylosowane";
}
	cout << "Wprowadz kolejne dlugosci bokow " << size << "-kata: ";
	for (int i = 0; i < size; i++) {
		cin >> angles[i];
	}
	
	for (int i = 0; i < size; i++) {
		circuit = circuit + angles[i];
	}
	cout << "Obwod: " << circuit << endl;
	system("pause");
	return 0;
}
