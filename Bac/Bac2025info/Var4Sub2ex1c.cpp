#include <iostream>
using namespace std;

int main()
{
	int x, y, cx, cy;
	cin >> x >> y;
	cx = 0;
	cy = 0;
	while(x>=10 || y>=10)
	{
		while(x+y!=0)
		{
			cx=cx+x%10;
			x=x/10;
			cy=cy+y%10;
			y=y/10;
		}
		x=cx;
		cx=0;
		y=cy;
		cy=0;
	}
	if(x==y)
	{
		cout << "DA " << x;
	}
	else
	{
		cout << "NU " << x << " " << y;
	}
	return 0;
}
