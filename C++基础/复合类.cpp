#include<iostream>
using namespace std;
// 类和对象相当于数据类型的变量 
// Point p;    调用默认构造
// Point q(1,1);    调用普通构造


class Point
{
public:
	Point(){};
	Point(float _x, float _y){
		x = _x;
		y = _y;
	}
	
	void print()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
		
private:
	float x, y;
};


class Circle  // 复合类
{
public:
	Circle(){};
	// center(x,y)调用了Point的构造函数来初始化 Point(float _x, float _y)
	Circle(float _x, float _y, float r): center(_x, _y),radius(r) {}  
	
	void setCircle(float r, Point p){
		radius = r;
		center = p;  // center.x = p.x  center.y = p.y
	}
	
	void print(){
		cout<<"radius:"<<radius<<endl;   // 打印圆心
		center.print();
	}
	
private:
	// 可以由一个点的对象+一个半径
	Point center;  // center.x  和 center.y
	float radius;
};

int main()
{
	Point p(5, 7);
	p.print();
	
	Circle c(1,2,3);
	c.print();
	
	c.setCircle(10, p);
	c.print();

	return 0;
}