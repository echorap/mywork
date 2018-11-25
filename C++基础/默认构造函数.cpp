// 默认构造函数分两种：1.构造函数不带参数。2.构造函数带参数但是参数都有默认值。
// Example: 
// Circle();                                     默认构造函数
// Circle(float a = 0,float b = 0, float c = 0)   默认构造函数
// Circle(float a, float b, float c);      普通构造函数



#include<iostream>
using namespace std;

class Thing
{
public:
	Thing(int a=10, int b=20, int c=30){
		x = a; y = b; z = c;
	}
	
	void printThing()
	{
		cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
	}
	
private:
	int x;
	int y;
	int z;
};

int main(int argc, const char * argv[])
{
	Thing t;
	t.printThing();
	
	Thing s(1);
	s.printThing();
	
	Thing r(1,2);
	r.printThing();
	
	Thing v(1,2,3);
	v.printThing();
	
	return 0;
}














