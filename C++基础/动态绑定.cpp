#include<iostream>

using namespace std;

class Base
{
public:
	virtual void func(){
		cout<<"Base func\n";
	}
	
	virtual ~Base(){
		cout<<"Base desctructor\n";
	}
};

class Derived1:public Base
{
public:
	void func(){
		cout<<"Derived1 func\n";
	}
	
	~Derived1(){
		cout<<"Derived1 desctructor\n";
	}
};

class Derived2:public Base
{
public:
	void func(){
		cout<<"Derived2 func\n";
	}
	
	~Derived2(){
		cout<<"Derived2 desctructor\n";
	}
};


int main()
{
	Derived1 d1;
	Derived2 d2;
	Base* p = &d1;
	cout<<"p:"<<p<<"\n";
	p = &d2;
	cout<<"p:"<<p<<"\n";
	p->func();
	
	return 0;
}









