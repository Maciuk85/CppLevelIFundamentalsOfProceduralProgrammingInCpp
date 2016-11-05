#include <iostream> 
#include <string>
#include <vector>
#include <time.h>

using namespace std;

vector <int> list(0);
int numberOfElements,menu;
int element,elementv2;
int main() {
	cout << "Podaj ile przedmiotow ma liczyc lista ";
	cin >> numberOfElements;
	for (int i = 0; i < numberOfElements; i++) {
		cin >> element;
		list[i] = element;
	}
	for (;;) {
		cout << "Wybierz operacje: ";
		cout << "1.Usun wybrany element" << endl;
		cout << "2. Dodaj element na dowolne miejsce" << endl;
		cout << "3. Podmien dowolny element" << endl;
		cout << "4. Zobacz rozmiar listy" << endl;
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "Podaj element ktory ma zostac usuniety: ";
			cin >> element;
			list.erase(list.begin() + element);
			break;
		case 2:
			cout << "Podaj na ktora pozycje ma zostac wstawiony nowy element: ";
			cin >> element;
			cout << "Podaj nowy element: ";
			cin >> elementv2;
			list.insert(element, elementv2);
			break;
		case 3:
			cout << "Podaj ktory element ma zostac podmnieony: "
				cin >> element;
			cout << "Wprowadz nowy element: ";
			cin >> elementv2;
			list.erase(list.begin() + element);
			list.insert(element, elementv2);
			break;
		case 4:
			cout << "Rozmiar listy: " << list.size << endl;
			break;
		default:
			cout << "Brak takiej operacji - koniec programu" << endl;
			break;
		}
		
		
		
		
	}

	system("pause");
	return(0);
}