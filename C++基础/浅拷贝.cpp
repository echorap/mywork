#include<iostream>

using namespace std;

class Point
{
public:
	Point(float a, float b):x(a), y(b) {};
	
	void print()
	{
		cout<<x<<","<<y<<endl;
	}
	
	float getX()
	{
		return x;
	}
	
	float getY()
	{
		return y;
	}
	
	
private:
	float x;
	float y;
};

// �����һ����ͨ������ Ϊ�˱��ⴴ����ʱ�����β�ռ�ڴ棬һ�㴫��������ý�ʡ�ռ�
// Ϊ�˱���pp�ں����б��ı䣬��const   void f(const Point & pp)   
void f(Point & pp)   
{
	cout<<pp.getX()<<","<<pp.getY()<<endl;
}

int fun()
{
	static int x = 10;         // �ֲ���������x�ᱻ����
	return x;
}


int main(int argc, char const *argv[])
{
	//Point p1(1, 2);
	//f(p1);
	int r = fun();      
	cout<<r<<endl;
	
	return 0;
}


