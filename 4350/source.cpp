#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream f("drone.in");
	ofstream g("drone.out");
	int n, i,x,cnt=0,ok=0,p;
	f >> n;
	for (i = 0; i < n; i++)
	{
		p = 1;
		ok = 0;
		f >> x;
		if (x == 0)
		{
			cnt++;
		}
		else
		{
			while (x)
			{
				p = p * (x % 10);
				x /= 10;
				if (x < 10 && x>0)
				{
					if (x < 7)
					{
						ok = 1;
					}
				}
			}
			if (p % 2 == 0 && ok == 1)
			{
				cnt++;
			}
		}
	}
	g << cnt;
	return 0;
}