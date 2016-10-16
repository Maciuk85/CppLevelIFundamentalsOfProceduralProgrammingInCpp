#include <iostream>
#include <string>
#include<time.h>

using namespace std;

unsigned int n,b(1),c(1), d;

int main() {

	cout << "Podaj n: ";
	cin >> n;
	cout << endl;
	if (n == 0) {
		cout << n;
	}
	else if(n == 1){
		cout << n;
	}
	else {
		cout << "Liczby ciagu fibonacciego: ";
		cout << "0 1";
		for (int i = 2; i <= n; i++) {

			cout << " " << c;

			d = c;
			c = c + b;
			

			b = d;

		}

	}
	

	system("pause");
	return 0;
}