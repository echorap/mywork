#include<iostream>
using namespace std;

class Base
{
public:
	Base(){}
	virtual ~Base(){
		cout<<"Base destructor!\n";
	}
};

class Derived: public Base
{
public:
	Derived(){}
	~Derived(){
		cout<<"Derived desctructor!\n";
		}
};


int main()
{
	Base *p = new Derived();    //����һ����������ڶ���  ����ָ��ָ������Ķѿռ�
	
	
	
	delete p;			// ���ø������������������ֻ�ͷ��˼̳��Ը���ĳ�Ա��������չ�ĳ�Աδ�ͷţ��ڴ�й©
	return 0;
}









