#include <iostream>
using namespace std;
//definim structura point, unde x si y sunt coordonate unui punct in planul cartezian XOY
struct point
{
	double x, y;
};
//definim structura rectangle, reprezentat de 2 puncte, coltul din stanga jos si cel din dreapta sus
struct rectangle 
{
	point c1, c2;
};
//definim functia care calculeaza aria unui dreptunghi
double arie(rectangle d)
{
	//d.c1.x reprezinta coordoanta x a punctului c1 care apartine dreptunghiului d
	//d.c1.y reprezinta coordonata y a punctului c1 care apartine dreptunghiului d
	//d.c2.x reprezinta coordonata x a punctului c2 care apartine dreptunghiului d
	//d.c2.y reprezinta coordonata y a punctului c2 care apartine dreptunghiului d
	return (d.c2.x - d.c1.x)*(d.c2.y - d.c1.y);
	//d.c2.x-d.c1.x reprezinta lungimea dreptunghiului
	//d.c2.y-d.c1.y reprezinta inaltimea dreptunghiului
	//functia returneaza aria dreptunghiului
}
int main()
{
	rectangle d;
	//se citesc coordonatele colturilor c1 si c2 ale dreptunghiului d
	cin >> d.c1.x >> d.c1.y >> d.c2.x >> d.c2.y;
	//se afiseaza aria dreptunghiului
	cout << arie(d)<<endl;
	system("pause");
	return 0;
}
