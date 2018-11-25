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

// 类外的一个普通函数， 为了避免创建零时对象形参占内存，一般传对象的引用节省空间
// 为了避免pp在函数中被改变，用const
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


