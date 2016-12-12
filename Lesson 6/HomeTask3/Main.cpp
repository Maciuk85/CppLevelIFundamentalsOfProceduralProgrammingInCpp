#include <iostream>
#include<string>
#include <conio.h>
#include <vector>
using namespace std;

char stos,element;
vector <char> infiks;
vector <char> postfiks;
void readInfiks() {
	int i(0);
	while (getch() != 13) {
		cin >> element;
		infiks.push_back(element);
		i++;
	}
}

void analizeInfiks() {
	// Zamiana na odwrotna notacje polska (nie wiem jak)
}

void writePostfiks() {
	for (int i = 0; i < postfiks.size; i++) {
		cout << postfiks[i];
}

}
int main() {
	readInfiks();
	analizeInfiks();
	writePostfiks();

	system("pause");
	return 0;
}