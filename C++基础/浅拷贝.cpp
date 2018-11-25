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
// 为了避免pp在函数中被改变，用const   void f(const Point & pp)   
void f(Point & pp)   
{
	cout<<pp.getX()<<","<<pp.getY()<<endl;
}

int fun()
{
	static int x = 10;         // 局部变量用完x会被回收
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


