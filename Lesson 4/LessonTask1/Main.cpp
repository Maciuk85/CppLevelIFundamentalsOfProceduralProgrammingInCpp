#include <iostream>
#include <string>
#include<time.h>

using namespace std;

unsigned int n,b(0),c(1), d;

int main() {

	cout << "Podaj n: ";
	cin >> n;
	cout << endl;
	if (n == 0) {
		cout << b << endl;
	}
	else if(n == 1){
		cout << b << " " << c << endl;
	}
	else {
		cout << "Liczby ciagu fibonacciego: ";
		cout << b << " " << c;
		for (int i = 2; i <= n; i++) {
			d = c;
			c = c + b;
			b = d;
			cout << " " << c;
		}

	}
	
	cout << endl;
	system("pause");
	return 0;
}