// C++��׼������

#include<iostream>
using namespace std;

namespace my_space{
	int size;
	const double pi=3.14;
	void print();
	namespace inner{		// Ƕ�������ռ�
		int size;
	}
}

using namespace my_space;

void my_space::print(){
	cout<<"pi:"<<pi<<endl;
}

int main()
{
	size = 100;
	inner::size=200;
	cout<<size<<endl;
	cout<<inner::size<<endl;
	print();
	
	
	return 0;
}

