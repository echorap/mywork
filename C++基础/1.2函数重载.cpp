// �������� ��һ���������У�������һ����ͬ����������ͬ�����б�ĺ��������麯������Ϊ���غ���
// ��ͬ�Ĳ����б�ָ���ǲ����ĸ�������������Ͳ�ͬ����
// void f();
// void f(int x);
// void f(int x, int y)
// ��������Ǻ����ķ���ֵ���Ͳ�ͬ�������Ǻ��������� �� void f(int x); int f(int x);  ��������

#include <iostream>
using namespace std;

class Thing
{
public:
	Thing(){
		x =0; y =0; z =0;
	}
	
	Thing(int a) {
		x=a;
	}
	
	Thing(int a, int b){
		x=a; y=b;
	}
	
	Thing(int a, int b, int c){
		x=a; y=b; z=c;
	}
	
	void printThing(){
		cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
	}
private:
	int x;
	int y;
	int z;
};

/*
void f()
{
	cout<<"��һ������.\n";
}

void f(int a)
{
	cout<<"�ڶ�������.\n";
}

void f(int a, int b)
{
	cout<<"����������.\n";
}
*/

int main()
{
	/*
	f();
	f(1);
	f(1, 2);
	*/
	Thing t;
	t.printThing();
	
	Thing s(1);
	s.printThing();
	
	Thing r(1,2);
	r.printThing();
	
	Thing v(1,2,3);
	v.printThing();
	
	return 0;
}


