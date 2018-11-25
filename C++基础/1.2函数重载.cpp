// 函数重载 在一个作用域中，可以有一组相同函数名，不同参数列表的函数，这组函数被称为重载函数
// 不同的参数列表指的是参数的个数或参数的类型不同，如
// void f();
// void f(int x);
// void f(int x, int y)
// 如果仅仅是函数的返回值类型不同，不能是函数的重载 如 void f(int x); int f(int x);  这样报错

#include <iostream>
using namespace std;

class Thing
{
public:
	Thing(){
		x =0; y =0; z =0;
	}
	
	Thing(int a) {
		x=a;
	}
	
	Thing(int a, int b){
		x=a; y=b;
	}
	
	Thing(int a, int b, int c){
		x=a; y=b; z=c;
	}
	
	void printThing(){
		cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
	}
private:
	int x;
	int y;
	int z;
};

/*
void f()
{
	cout<<"第一个函数.\n";
}

void f(int a)
{
	cout<<"第二个函数.\n";
}

void f(int a, int b)
{
	cout<<"第三个函数.\n";
}
*/

int main()
{
	/*
	f();
	f(1);
	f(1, 2);
	*/
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


