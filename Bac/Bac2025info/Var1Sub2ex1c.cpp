#include <iostream>
using namespace std;

int main()
{
	int n, m, nr, i, x;
	cin >> m >> n;
	nr = 0;
	i = m;
	do
	{
		x=1;
		while(x*x<i)
		{
			x++;
		}
		if(x*x==i)
		{
			nr = i;
		}
		else
		{
			i++;
		}
	}while(i<n && nr == 0);
	cout << nr;
	return 0;
}
