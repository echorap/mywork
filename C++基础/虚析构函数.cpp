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
	Base *p = new Derived();    //声明一个子类对象在堆区  父类指针指向子类的堆空间
	
	
	
	delete p;			// 调用父类的析构函数，子类只释放了继承自父类的成员，子类扩展的成员未释放，内存泄漏
	return 0;
}









