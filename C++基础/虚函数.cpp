// 1.�����麯������������ת��(����ȫ)���Ϳ�����ȷ���ø����ָ������ã���������ĺ�����
// 2.�麯����Ŀ�ģ���������ָ������ã�����ָ���໹�����࣬�ڵ���override������ʱ�򣬿��Է�ӳ�������ʵ�����
// 3.�����麯��ʱ�򣬵��׵����ĸ���İ汾���Ǹ���ָ�������ʵ����ָ��Ķ��������ȷ���������ǵ����߱����������ȷ��


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

	// ������3�������ָ�����飬���麯������Լ�ָ���ࡢ����1������2
	Father *p[3] = {&father, &son1, &son2};		// �����ָ������
	for (int i = 0; i < 3; i++)
	{
		p[i]->func();
	}

	cout << "---------" << endl;

	//p = &son2;
	//p = &father;
	//p->func();				// �����func�Ǹ��麯������������1��



	Father *pSon1 = &son1;	// ����ָ��ָ���������
	Father &br = son1;		// ��������ָ���������

	father.func();			// ���ø���汾
	son1.func();				// ��������汾
	pSon1->func();			// ����ָ����ø���汾 ���麯�������ָ�������
	br.func();				// ���ø���	���麯�������ָ��Ķ�������
	foo(son1);				// ���ø���	���麯�������ָ��Ķ�������

	system("pause");
	return 0;
}
