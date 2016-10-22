#include <iostream> 
#include <string>

using namespace std;

short level;
short createMap(short level) { //generowanie planszy
	return 0;
}
short createMenu() {
	cout << "Wybierz poziom trudnosci:" << endl;
	cout << "1 - Latwy" << endl;
	cout << "2 - Sredni" << endl;
	cout << "3 - Trudny " << endl;
	cout << "4 - Hard" << endl;
	cin >> level;
	return 0;
}
int main() {
	createMenu();
	switch (level) {
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	default: 

		break;
	}
	system("pause");
	return 0;
}