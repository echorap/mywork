// ��ʼ���б�
// �Թ��캯���е���ĳ�Ա�������г�ʼ���������ַ���
// 1.�ڹ��캯������ͨ����ֵ����ʼ��  Thing(int a, int b, int c){ x = a; y = b; z = c;}
// 2.ʹ�ó�ʼ���б���ʽ��ʼ��          Thing(int a, int b, int c):x(a), y(b), z(c) { }

// ΪʲôҪʹ�ó�ʼ���б�
// 1.���������͵ĳ�Ա��ʹ�ó�ʼ���б�Ч�ʸ��ߡ�
// 2.��Щ���͵ĳ�Ա��������ʹ�ó�ʼ���б����ʽ����ʼ������const��Ա�����ó�Ա��
// 3.�ڼ̳�ʱ������Ĺ��캯���г�ʼ������ĳ�Ա��




#include<iostream>
using namespace std;

class Thing
{
public:
	Thing(int _x, int _y): x(_x), y(_y){}
	
	void print()
	{
		cout<<"x:"<<x<<",y:"<<y<<endl;
	}
	
private:
	const int x, y;
};

int main()
{
	Thing b(1, 2);
	b.print();
	
	return 0;
}



