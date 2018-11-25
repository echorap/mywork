#include<iostream>
using namespace std;

class Base
{
public:
	virtual void print() const { cout << "Base.\n"; }
	void outB() const { cout << "Out Base.\n"; }

};


class D1 :public Base
{
public:
	void print() const { cout << "D1.\n"; }
	void outD1() const { cout << "Out D1.\n"; }
};

class D2 :public Base
{
public:
	void print() const { cout << "D2.\n"; }
	void outD2() const { cout << "Out D2.\n"; }
};

int main()
{
	D1 d1;
	D2 d2;
	const D1* p1;
	const D2* p2;
	Base* p[2] = { &d1, &d2 };
	for (int count = 0; count < 2; ++count)
	{
		if ((p1 = dynamic_cast<D1*>(p[count])))
		{
			p1->print();
			p1->outD1();
		}
		else if ((p2 = dynamic_cast<D2*>(p[count])))
		{
			p2->print();
			p2->outD2();
		}
	}


	system("pause");
	return 0;
}