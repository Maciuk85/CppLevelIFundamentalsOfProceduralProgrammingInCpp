#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string first("M");
string name("Sieron");
short temperature(15);
double temperature2(15.4);
short students(25);
double weight(65.3);
double height(178.4);
int everestHeight(884800000);
bool isPostFull(false); //skrzynka pocztowa pusta/pelna
long neurons;
long double pi;
int users;
short chairs(30);
short& chairsRef(chairs);
double a, b, c; // a,b - przyprostokatne c - przeciwprostokatna
enum flag
{
	red,
	blue,
	white
};

int main() {

	cout << "Pierwsza litera imienia: " << first <<  endl;
	cout << "Nazwisko: " << name << endl;
	cout << "Temperatura(tylko calkowita): " << temperature << " *C"<< endl;
	cout << "Tempretarutra: " << temperature2 << " *C" << endl;
	cout << "Liczba uczniow w klasie: " << students << endl;
	cout << "Waga ciala: " << weight << " kg" << endl;
	cout << "Wzrost: " << height << " cm" << endl;
	cout << "Wysyokosc Mont Everestu: " << everestHeight << " cm" << endl << endl;

	cout << "Liczba krzesel :" << chairs << endl;
	cout << "Liczba krzesel(Ref): " << chairsRef << endl;
	cout << "Nowa liczba krzesel: ";
	cin >> chairs;
	cout << endl;
	cout << "Liczba krzesel :" << chairs << endl;
	cout << "Liczba krzesel(Ref): " << chairsRef << endl;
	cout << "Nowa liczba krzesel(Ref): ";
	cin >> chairsRef;
	cout << endl;
	cout << "Liczba krzesel :" << chairs << endl;
	cout << "Liczba krzesel(Ref): " << chairsRef << endl << endl;

	cout << "Pierwsza przyprostokatna: ";
	cin >> a;
	cout << endl;
	cout << "Druga przyprostokatna: ";
	cin >> b;
	cout << endl;
	cout<< "Przyprostokatne: "<< a << "," << b << endl;
	c = sqrt(pow(a,2)+pow(b,2));
	cout << "Przeciwprostokatna: "<< c << endl;

	system("pause");
	return 0;

}