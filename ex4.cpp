#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, n, r = 1;
	//in r vom salva rezultatul final
	//se citesc a si n
	cin >> a >> n;
	//se verifica daca n e pozitiv
	while (n > 0)
	{
		r *= a;
		//se inmulteste a la valoarea salvata anterior in r
		n--;
		//se micsoreaza n, apoi se va verifica din nou daca n e pozitiv
	}
	//astfel se efectueaza instructiunile din while de n ori
	cout << r << endl;
	system("pause");
	return 0;
}
