#include <iostream>
using namespace std;

int main()
{
	int n, m = 0;
	cin >> n;
	while (n > 0)
	{
		if (n % 2 == 1)
			m++;
		n /= 2;
	}
	cout << m<< endl;
	system("pause");
	return 0;
}
