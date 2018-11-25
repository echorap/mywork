// 初始化列表
// 对构造函数中的类的成员变量进行初始化，有两种方法
// 1.在构造函数体内通过赋值语句初始化  Thing(int a, int b, int c){ x = a; y = b; z = c;}
// 2.使用初始化列表形式初始化          Thing(int a, int b, int c):x(a), y(b), z(c) { }

// 为什么要使用初始化列表？
// 1.对于类类型的成员，使用初始化列表效率更高。
// 2.有些类型的成员变量必须使用初始化列表的形式来初始化，如const成员、引用成员。
// 3.在继承时，子类的构造函数中初始化父类的成员。




#include<iostream>
using namespace std;

class Thing
{
public:
	Thing(int _x, int _y): x(_x), y(_y){}
	
	void print()
	{
		cout<<"x:"<<x<<",y:"<<y<<endl;
	}
	
private:
	const int x, y;
};

int main()
{
	Thing b(1, 2);
	b.print();
	
	return 0;
}



