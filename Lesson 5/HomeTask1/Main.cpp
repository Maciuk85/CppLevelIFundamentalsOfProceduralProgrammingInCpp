#include <iostream> 
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>
using namespace std;
string product;
vector <string> products(0);
vector <int> prices(0);
short menu;

void validateInput(string fieldName, double &value) {
	cout << fieldName << " = ";
	while (!(cin >> value)) {
		cout << "Blad. Wprowadz ponownie " << fieldName << " = ";
		cin.clear();
		cin.ignore((unsigned)-1, '\n');
	}
	cin.clear();
	cin.ignore((unsigned)-1, '\n');
}

void validateInput(string fieldName, int &value) {
	cout << fieldName << " = ";
	while (!(cin >> value)) {
		cout << "Blad. Wprowadz ponownie " << fieldName << " = ";
		cin.clear();
		cin.ignore((unsigned)-1, '\n');
	}
	cin.clear();
	cin.ignore((unsigned)-1, '\n');
}

void setPrices() {
	for (unsigned int i = 0; i < products.size(); i++) {
		prices.push_back(rand() % 25 + 1);
	}
}
void showList() {
	for (unsigned int i = 0; i < products.size(); i++) {
		cout << products[i] << "-" << prices[i] << "zl" << endl;
	}
}
int calculateSum() {
	int sum = 0;
	for (unsigned int i = 0; i < prices.size(); i++) {
		sum = sum + prices[i];
		
	}
	return sum;
}
void addProduct() {
	cout << "Nazwa produktu: ";
	cin >> product;
	products.push_back(product);
}
void showMenu() {
	if (products.size() >= 10) {
		cout << "Twoja lista ma juz 10 produktow, przejscie do podsumowania" << endl;
		menu = 3;
	}
	else {
		cout << "1. Dodaj produkt" << endl;
		cout << "2. Usun produkt(ostatnio dodany)" << endl;
		cout << "3. Przejdz do podsumowania." << endl;
		cout << "Wybierz co chcesz zrobic: " << endl;
		cin >> menu;
	}
	cout << endl;
}
int main() {
	srand((unsigned int)time(NULL));
	cout << "Lista Zakupow" << endl;

	int cenaProduktu;
	string nazwaProduktu;
	validateInput("Nazwa produktu", nazwaProduktu);
	validateInput("Cena produktu", cenaProduktu);


	//for(;;){
	//	system("cls");
	//	showMenu();

	//switch (menu) {
	//case 1:
	//	addProduct();
	//	break;
	//case 2:
	//	products.pop_back();
	//	break;
	//case 3:
	//	setPrices();
	//	showList();
	//	cout << "Do zaplaty: " << calculateSum() << "zl" << endl;
	//	system("pause");
	//	return 0;
	//	break;
	//default:
	//	break;

	//	}
	//}
	system("pause");
	return(0);
}