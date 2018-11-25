#include<iostream>

using namespace std;


class Father
{
public:
	virtual void func()
	{
		cout << "Father Function" << endl;
	}

};

class Son1 :public Father
{
public:
	void func()
	{
		cout << "Son1 function" << endl;
	}
};

class Son2 :public Father
{
public:
	void func()
	{
		cout << "Son2 function" << endl;
	}
};


void foo(Father & father)
{
	father.func();
}


int main()
{
	Father father;
	Son1 son1;
	Son2 son2;

	//son1.func();
	//son2.func();

	// 本来是3个父类的指针数组，加虚函数后可以加指向父类、子类1、子类2
	Father *p[3] = {&father, &son1, &son2};		// 父类的指针数组
	for (int i = 0; i < 3; i++)
	{
		p[i]->func();
	}

	cout << "---------" << endl;

	//p = &son2;
	//p = &father;
	//p->func();				// 父类的func是个虚函数，调用子类1的



	Father *pSon1 = &son1;	// 父类指针指向子类对象
	Father &br = son1;		// 父类引用指向子类对象

	father.func();			// 调用父类版本
	son1.func();				// 调用子类版本
	pSon1->func();			// 父类指针调用父类版本 加虚函数后调用指向的类型
	br.func();				// 调用父类	加虚函数后调用指向的对象类型
	foo(son1);				// 调用父类	加虚函数后调用指向的对象类型

	system("pause");
	return 0;
}






