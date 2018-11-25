#include<iostream>
using namespace std;

class Circle;  // 为了解决交叉声明 用前置声明 告诉编译器有个Circle类 
               // 之后再在Point后面声明Circle类
class Point
{
	friend class Circle;   // 声明友元类
	friend const Point middle(const Point& u, const Point& v); // 声明友元函数
	
public:
	Point();
	Point(float a, float b);
	void print() const;

private:
	float x;
	float y;
};

class Circle
{
public:
	Circle();
	Circle& move(float a, float b);
	void print() const;
private:
	float radius;
	Point center;
};

Circle::Circle() :radius(0.0){
	center.x = 0.0;             // Circle类是Point的友元类，可以访问所有的成员
	center.y = 0.0;
};

Circle& Circle::move(float a, float b){
	center.x += a;
	center.y += b;
	return *this;
};

void Circle::print() const{
	center.print();
	cout << "radius:" << radius << endl;
};



Point::Point() :x(0.0), y(0.0) {};

Point::Point(float a, float b):x(a), y(b) {};

void Point::print() const{
	cout << "x:" << x << " y:" << y << endl;
}



// 需要：在类外写一个函数求两个点的中点。
// 类外的一个普通函数不能直接用对象名.去访问私有成员
const Point middle(const Point &p1, const Point &p2)
{
	Point middlepoint((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
	return middlepoint;
}


int main()
{
	Point p1(1.0, 2.0);
	Point p2(3.0, 4.0);
	p1.print();
	p2.print();
	cout << "两个点的中点是：";
	middle(p1, p2).print();

	Circle c;
	c.print();
	cout << "移动圆心：";
	c.move(10.0, 10.0);
	c.print();

	system("pause");
	return 0;
}