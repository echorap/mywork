// 每个类单独封装自己的成员，以提供以后的调用

#include<iostream>

using namespace std;

class R
{
private:
	int r;

public:
	R(int x = 0) :r(x) {}

	void f(){
		cout << "r=" << r << endl;
	}
	void print(){
		cout << "print R=" << r << endl;
	}

};

class A :public virtual R
{
private:
	int a;

protected:
	void fa(){
		cout << "a=" << a << endl;
	}

public:
	A(int x, int y) :R(x), a(y) {}

	void f(){
		cout << "a=" << a << endl;
		R::f();
	}
};


class B :public virtual R
{
private:
	int b;

protected:
	void fb(){
		cout << "b=" << b << endl;
	}

public:
	B(int x, int y) :R(x), b(y) {}

	void f(){
		cout << "b=" << b << endl;
		R::f();
	}
};

class C :public A, public B
{
private:
	int c;

protected:
	void fc(){
		cout << "c=" << c << endl;
	}

public:
	C(int x, int y, int z, int w) :R(x), A(x, y), B(x, z), c(w) {}

	void f(){
		R::f();
		fa();
		fb();
		fc();
	}
};

int main()
{
	C cc(1, 2, 3, 4);
	cc.f();

	system("pause");
	return 0;
}







