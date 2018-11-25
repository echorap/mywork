// C++标准新特性

#include<iostream>
using namespace std;

namespace my_space{
	int size;
	const double pi=3.14;
	void print();
	namespace inner{		// 嵌套命名空间
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

