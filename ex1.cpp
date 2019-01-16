#include <iostream>
using namespace std;
//definim structura point, unde x si y sunt coordonate unui punct in planul cartezian XOY
struct point
{
	double x, y;
};
//definim functia care verifica daca acele coordonate sunt egale
int v(point a, point b)
{
	if (a.x != b.x)
		return 0;
	//daca coordonatele x sunt diferite, atunci se iese din functie si se returneaza 0
	//si nu se mai efectueaza instructiunile urmatoare
	if (a.y != b.y)
		return 0;
	//daca coordonatele y sunt diferite, atunci se iese din functie si se returneaza 0
	//fara a se mai efectua ce urmeaza
	return 1;
	//se returneaza 1 doar daca conditiile anterioare nu au fost implinite 
	//(nu s-a iesit din functie inainte de aceasta instructiune)
}
int main()
{
	point a, b;
	//se citesc coordonatele a 2 puncte a si b
	cin >> a.x >> a.y >> b.x >> b.y;
	//se verifica daca valoarea intoarsa de functia v e 1, adica daca coordonatele sunt egale
	if (v(a, b) == 1)
		cout << "coordonate egale" << endl;
	//se afiseaza mesajul de mai sus daca coordonatele sunt egale
	else
		cout << "coordonate diferite" << endl;
	//se afiseaza mesajul de mai sus daca coordonatele nu sunt egale
	system("pause");
	return 0;
}
