#include <fstream>
using namespace std;
int main()
{
	ifstream f("conturi.in");
	int n, b, smax = 0;
	f >> n >> b;
	while (n > 0)
	{
		int x;
		f >> x;
		if (x/100000 == b
		    && x/10000%10 == 1
		    && x%10000 > smax)
			smax = x%10000;
		n--;
	}
	f.close();
	ofstream g("conturi.out");
	g << smax;
	g.close();
	return 0;
}

