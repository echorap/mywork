// æ≤Ã¨≥…‘±

#include<iostream>
using namespace std;

void show_average(double x){
	static double num = 0;
	static double sum = 0;
	num +=1;
	sum +=x;
	cout<<"num="<<num<<" sum="<<sum<<" avg="<<sum/num<<endl;
}

int main()
{
	double entry = 0;
	for(; ; ){
		cout<<"Enter a number: ";
		cin>>entry;
		if(entry<0) 
			break;
		show_average(entry);
	}
	
	return 0;
}







