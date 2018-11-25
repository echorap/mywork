#include<iostream>

using namespace std;

class R				// 祖先类
{
private:
	int r;

public:
	R(int anInt) : r(anInt) {}
	void printOn() const
	{
		cout << "r=" << r << endl;
	}
};

class A : virtual public R		// 父类A
{
private:
	int a;

public:
	A(int int1, int int2) :R(int2), a(int1) {}

};

class B : virtual public R		// 父类B
{
private:
	int b;

public:
	B(int int1, int int2) :R(int2), b(int1) {}

};

class C :public A, public B			// 子类 有两份r,一份来自A,一份来自B
{
private:
	int c;

public:
	C(int int1, int int2, int int3,int int4) :R(int1), A(int2, int1), B(int2, int1) {
		c = int4; 
	}

};

int main()
{
	R rr(10);
	A aa(20, 30);
	B bb(40, 50);
	C cc(6, 7, 8, 9);

	rr.printOn();
	aa.printOn();
	bb.printOn();
	cc.printOn();

	system("pause");
	return 0;
}

