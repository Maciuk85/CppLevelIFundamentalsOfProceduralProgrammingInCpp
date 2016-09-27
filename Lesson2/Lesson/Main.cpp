#include <iostream>
#include<string>

using namespace std;

string name("Leo Messi"), club("FC Barcelona");
unsigned short age(30), number(10), redCards, assists(27), goals(2),goalsscores;
unsigned short& assistsRef(assists);
double height(1.78);
bool isRightFooted(true);

unsigned short addTwoGoals(unsigned short g) {
	g += 2;
	return g;
}
unsigned short addTwoGoalsRef(unsigned short& gRef){
	gRef += 2;
	return gRef;
}

int main() {
	cout << "Podaj liczbe czerwonych kartek: ";
	cin >> redCards;
	cout << "Nazwa: " << name << endl; 
	cout << "Wiek: " << age << endl;
	cout << "Wzrost: " << height << endl;
	cout << "Biezacy klub: " << club << endl;
	cout << "Numer na koszulce: " << number << endl;
	if (isRightFooted == false) {
		cout << "Lewo nozny" << endl;
	}
	if(isRightFooted == true) {
		cout << "Prawo nozny" << endl;
	}
	cout << "Liczbe czerwonych kartek: " << redCards << endl;
	cout << endl;
	cout << "Liczba asyst: " << assists << endl << "Liczba asyst(Ref): " << assistsRef << endl;
	cout << "Zaktualizowana liczba asyst: ";
	cin >> assists;
	cout << "Liczba asyst: " << assists << endl << "Liczba asyst(Ref): " << assistsRef << endl << endl;

	cout << "Liczba bramek: " << goals << endl;
	goalsscores = addTwoGoals(goals);
	cout << "Wynikowa liczba bramek: " << goalsscores << endl;
	cout << "Liczba bramek: " << goals << endl;
	goalsscores = addTwoGoalsRef(goals);
	cout << "Wynikowa liczba bramek: " << goalsscores << endl;
	cout << "Liczba bramek: " << goals << endl;
	system("pause");
	return 0;
}