#include <iostream>
using namespace std;

int main()
{
	int n, m, i, x, c;
	cin >> m >> n;
	for(i=n; i>=m; i--)
	{
		x=i;
		c=x%10;
		do
		{
			x=x/10;
		}while(x%10==c);
		if(x==0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
