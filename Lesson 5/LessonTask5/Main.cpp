#include <iostream> 
#include <string>
#include <vector>

using namespace std;

short level;
char numbers[9][9];
string sudokuNumbers("123456789");
vector <int> testowy(8, 2);
//generowanie numerow od 0 do 8
unsigned short genNumber() {
	return rand() % 8;
}
void genBoard(short numberOfDraws) {
	char x, y;
	
	for (int i = numberOfDraws; i >= 1; i--) {
		x = genNumber();
		y = genNumber();
		if (numbers[x][y] == '#') {
			numbers[x][y] =  sudokuNumbers[genNumber()];
		}
		else {
			i++;
		}
		
	}
} 
void showMap() {
	for (int i = 0; i < 9; i++) {
		cout << endl;
		for (int j = 0; j < 9; j++) {
			cout << numbers[i][j] << " ";
		}
	}
}
void genMap() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			numbers[i][j] = '#';
		}
	}
}
bool isNumberInRow(short row,char number) {
	for (int i = 0; i < 9; i++) {
		if (numbers[row][i] == number) {
			return false;
		}
	}
	return true;
}
// TODO dorobic sprawdzanie warunku dal kolumn i kwadratow
// TODO dorobic sprawdzanie czy wszystkie 3 warunki sa true jesli tak to true // &&


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

	for (int i = 0; i < testowy.size(); i++) {
		cout << testowy[i] << endl;
	}
	
	cout << endl;
	
	for (int i = 0; i < testowy.size(); i++) {
		if (i == 3) {
			std::vector<int>::iterator it = testowy.begin();
			testowy.insert (it,3,5);
			
		}
		cout << testowy[i] << endl;
	}

	cout << endl;

	cout << "SUDOKU" << endl;
	createMenu();
	genMap();
	for(;;){
	switch (level) {
	case 1:
	/*	genBoard(50);*/
		break;
	case 2:
		genBoard(40);
		break;
	case 3:
		genBoard(30);
		break;
	case 4:
		genBoard(25);
		break;
	default:
		//TODO Dorobic komunikat o tym ze nie ma takiej pozycji w menu

		system("pause");
		return 0;
	}
	}

	showMap();
	system("pause");
	return 0;
}