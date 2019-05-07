/****************************
Harjoitus 5
Tekij‰ :Mk
kuvaus:

Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.
Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.
Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
7.5.2019 v.1.0
******************/

#include <iostream>
using namespace std;
int main()
{
	short luku1;
	short luku2;
	cout << "Anna luku 1";
	cin >> luku1;
	cout << "luku1 on" << luku1 << endl;
	cout << "Anna luku 2";
	cin >> luku2;
	//cout << "luku1 on" << luku1 << "luku 2 on:" << luku2 << endl;
	if (luku1 == luku2)
	{
		cout << "BINGO" << endl;
	}
	else
	{
		cout << "BONGO" << endl;
	}
	//cout << "BINGO"
	//if (luku1 != luku2); vertaillaa erisuuruutta tehd‰‰n t‰m‰ kun ehto on voimassa
	system("pause");
}
//sysy toototott jojoj ojojojo

