#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a;
	double n = 0, s = 0, p = 1;
	//se declara n (numarul de valori) si se intializeaza cu 0
	//in s se va salva suma numerelor, iar in p produsul lor
	//se citeste primul numar
	cin >> a;
	//se verifica daca numarul anterior este pozitiv
	//daca da, se efectueaza instructiunile
	while (a>0)
	{
		n++;
		//se numara la ce valoare am ajuns
		s += a;
		//la suma anterioara se adauga valoarea curenta
		p *= a;
		//produsul anterior se inmulteste cu valoarea curenta
		cin >> a;
		//se citeste numarul urmator
		//daca el este pozitiv, se reiau instructiunile din while
		//se iese din while doar cand este citit un numar mai mic sau egal cu 0
	}
	//la iesirea din while in s avem suma totala a numerelor pozitive citite pana s-a dat un numar mai mic decat 0
	//iar in p avem produsul lor
	//in n s-a salvat numarul de valori citite
	cout << "media aritmetica este " << s / n << endl;
	cout << "media geometrica este " << pow(p, (1 / n)) << endl;
	//pow efectueaza p la puterea 1/n
	system("pause");
	return 0;
}
