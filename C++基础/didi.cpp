#include<iostream>
using namespace std;
 

bool isNomatch(int a, int b, int c, char r)
{
	switch (r)
	{
	case 'a':
		if (b > 0 || c > 0) return false;
		break;
	case 'b':
		if (a > 0 || c > 0) return false;
		break;
	case 'c':
		if (a > 0 || b > 0) return false;
		break;
	}
	return true;
}
 

void arrage(int a, int b, int c, char r, int &sortCount)
{
	if (a + b + c == 0 || isNomatch(a, b, c, r))
	{
		sortCount++;
		return;
	}
	if (a > 0 && r != 'a')
	{
		a--;
		arrage(a, b, c, 'a', sortCount);
		a++;
	}
	if (b > 0 && r != 'b')
	{
		b--;
		arrage(a, b, c, 'b', sortCount);
		b++;
	}
	if (c > 0 && r != 'c')
	{  
		c--;
		arrage(a, b, c, 'c', sortCount);
		c++;
	}
}
 

int calculateCount(int a, int b, int c)
{
	int count = 0;
	char r;
	int t[3] = { a,b,c };
	for (int i = 0, r = 'a'; i < 3; i++, r++)
	{
		t[i]--;
		arrage(t[0], t[1], t[2], r, count);
		t[i]++;
	}
	return count;
}
 

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout << calculateCount(a,b,c) << endl;

	return 0;
}
