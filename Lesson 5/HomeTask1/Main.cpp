#include <iostream> 
#include <string>
#include <vector>
#include <time.h>
using namespace std;
string product;
int sum;
vector <string> products(0);
vector <int> prices(0);
short menu;
int main() {
	srand(time(NULL));
	cout << "Lista Zakupow" << endl;
	for(;;){
	cout << "Wybierz co chcesz zrobic: " << endl;
	cout << "1. Dodaj produkt" << endl;
	cout << "2. Usun produkt(ostatnio dodany)" << endl;
	cout << "3. Przejdz do podsumowania." << endl;
		if (products.size >= 9) {
			cout << "Twoja lista ma juz 10 produktow, przejscie do podsumowania"; << endl;
			menu = 3;
		}
	cin >> menu;
		cout << endl;
	switch (menu) {
	case 1:
		cout << "Nazwa produktu: ";
			cin >> product;
		products.push_back(product);
		break;
	case 2:
		products.pop_back();
		break;
	default:
		break;

		}
	}
	for (int i = 0; i < products.size; i++) {
		prices.push_back(rand() % 25 + 1);
}
	for (int i = 0; i < products.size; i++) {
		cout << products[i] << "-" << prices[i] << "zl" << endl;
	}
	for (int i = 0; i < prices.size; i++) {
		sum = sum + prices[i];
	}
	cout << "Do zaplaty: " << sum << endl;
	system("pause");
	return(0);
}