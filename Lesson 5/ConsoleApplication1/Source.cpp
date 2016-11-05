#include<string>
#include<iostream>
#include<cstdlib>

using namespace std;

short level;

void getUserMenu() {

	cout << "Wprowadz level " << endl;
	cin >> level;

	switch (level) {
	case 1:
		cout << "level 1" << endl;
		break;
	case 2:
		cout << "level 2" << endl;
		break;
	case 3:
		cout << "level 3" << endl;
		break;
	case 4:
		cout << "level 4" << endl;
		break;
	default:
		//TODO Dorobic komunikat o tym ze nie ma takiej pozycji w menu
		break;
	}

}
int main() {

	for (;;) {
		
		getUserMenu();

		getchar();
		
	}

	system("pause");
	return 0;
}