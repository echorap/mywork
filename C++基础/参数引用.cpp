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
// Ϊ�˱���pp�ں����б��ı䣬��const
void f(const Point & pp)   
{
	cout<<pp.getX()<<","<<pp.getY()<<endl;
}

int main()
{
	Point p1(1, 2);
	f(p1);
	
	return 0;
}


