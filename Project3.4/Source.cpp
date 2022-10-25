// Lab_03_4.cpp
// Лин Тарас
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 13
#include <iostream>
using namespace std;
int main()
{
	double y; // вхідний параметр
	double R1; // вхідний параметр
	double R2; // вхідний параметр
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	// розгалуження в повній формі
	if ((y <= R2 && y >= 0)  || (y <= 0 && y >= R1))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}