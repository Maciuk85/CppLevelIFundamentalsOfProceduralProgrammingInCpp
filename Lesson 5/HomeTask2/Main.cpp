#include <iostream> 
#include <string>
#include <vector>
#include <time.h>

using namespace std;

vector <int> list(0);
int numberOfElements,menu;
int element,elementv2;
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
bool isElementInList(int element) {
	if (element >= list.size()) {
		return false;
	}
	return true;
}
void addElement() {
	validateInput("Podaj na ktora pozycje ma zostac wstawiony nowy element", element);
	validateInput("Podaj nowy element", elementv2);
	list.insert(list.begin() + element, elementv2);

}
//TODO walidacja
void changeElement() {
	cout << "Podaj ktory element ma zostac podmnieony: ";
		cin >> element;
	cout << "Wprowadz nowy element: ";
	cin >> elementv2;
	list.erase(list.begin() + element);
	list.insert(list.begin() + element, elementv2);
} 
//TODO walidacja
void deleteElement() {
	validateInput("Podaj element ktory ma zostac usuniety", element);
	if (!isElementInList(element)) {
		cout << "Brak elementu o takim indeksie." << endl;
	}
	else {
		list.erase(list.begin() + element);
	}
}
void readList() {
	validateInput("Podaj ile przedmiotow ma liczyc lista", numberOfElements);
	for (int i = 0; i < numberOfElements; i++) {
		validateInput("Wartosc elementu",element);
		list.push_back(element);
		
	}
}
void createmenu() {
		cout << "1.Usun wybrany element(indeksy od 0)" << endl;
		cout << "2. Dodaj element na dowolne miejsce" << endl;
		cout << "3. Podmien dowolny element" << endl;
		cout << "4. Zobacz rozmiar listy" << endl;
		cout << "5. Wyswietl liste" << endl;
		cout << "Wybierz operacje: " << endl;
		cin >> menu;
	}
void showList() {
	for (unsigned int i = 0; i < list.size(); i++) {
		cout << list[i] << endl;
	}
}
int main() {
	readList();
	for (;;) {
		createmenu();
		switch (menu) {
		case 1:
			deleteElement();
			break;
		case 2:
			addElement();
			break;
		case 3:
			changeElement();
			break;
		case 4:
			cout << "Rozmiar listy: " << list.size() << endl;
			break;
		case 5:
			showList();
			break;
		default:
			cout << "Brak takiej operacji - koniec programu" << endl;
			system("pause");
			return 0;
		}
	}
	system("pause");
	return(0);
}