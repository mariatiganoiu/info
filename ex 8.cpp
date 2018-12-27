#include <iostream>
using namespace std;
void citire(int n, int *v)
{
	int i, nr;
	for (i = 0; i < n; i++)
	{
		cin >> nr;
		v[i] = nr;
	}
}

int main()
{
	int n, *a, i;
	cin >> n;
	a = new int[n];
	citire(n, a);
	for (i = 0; i < n; i++)
		cout << a[i] << ' ';
	system("pause");
	return 0;
}
