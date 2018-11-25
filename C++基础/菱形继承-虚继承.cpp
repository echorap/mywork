#include<iostream>

using namespace std;

class R				// ������
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

class A : virtual public R		// ����A
{
private:
	int a;

public:
	A(int int1, int int2) :R(int2), a(int1) {}

};

class B : virtual public R		// ����B
{
private:
	int b;

public:
	B(int int1, int int2) :R(int2), b(int1) {}

};

class C :public A, public B			// ���� ������r,һ������A,һ������B
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

