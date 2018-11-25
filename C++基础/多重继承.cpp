// 多重继承：一个子类有两个父类

#include<iostream>

using namespace std;

class A
{
private:
	int a;
public:
	A(int i) : a(i){}
	void print() { cout << a << endl; }
};

class B
{
private:
	int b;
public:
	B(int i) : b(i){}
	void print() { cout << b << endl; }
};

class C :public A, public B
{
private:
	int c;
public:
	C(int i, int j, int k) : A(i), B(j), c(k){}
	void get_ab() {
		A::print();
		B::print();
	}
};

int main()
{
	C c(1, 2, 3);
	c.get_ab();
	c.A::print();	// 加作用域的符号
	c.B::print();

	system("pause");
	return 0;
}



