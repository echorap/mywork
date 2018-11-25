#include<iostream>

using namespace std;

int main()
{
	int m,n,x;
	int count=0;
	for(int i=0;i<=31;i++)
	{
		m = i*i;
		for(int j=0;j<31;j++)
		{
			n=j*j;
			x=m*n;
			if(x>100000&&x<999999)
			{
				cout<<x<<endl;
				cout<<x/1000<<endl;
				cout<<x%1000<<endl;
				count++;
			}
		}
	}
	
	cout<<"count:"<<count<<endl;
	return 0;
}





















