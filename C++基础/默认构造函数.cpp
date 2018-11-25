// Ĭ�Ϲ��캯�������֣�1.���캯������������2.���캯�����������ǲ�������Ĭ��ֵ��
// Example: 
// Circle();                                     Ĭ�Ϲ��캯��
// Circle(float a = 0,float b = 0, float c = 0)   Ĭ�Ϲ��캯��
// Circle(float a, float b, float c);      ��ͨ���캯��



#include<iostream>
using namespace std;

class Thing
{
public:
	Thing(int a=10, int b=20, int c=30){
		x = a; y = b; z = c;
	}
	
	void printThing()
	{
		cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
	}
	
private:
	int x;
	int y;
	int z;
};

int main(int argc, const char * argv[])
{
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














