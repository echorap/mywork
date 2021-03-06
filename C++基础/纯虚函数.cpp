#include<iostream>
#include<math.h>
using namespace std;

class Point
{
public:
	Point(double i, double j) : x(i), y(j) {}

	void print() const{
		cout << "(" << x << "," << y << ")";
	}

private:
	double x;
	double y;
};

class Figure
{
public:
	Figure(double i, double j) : center(i, j) {}
	Point& localtion()			// 加引用，避免产生临时变量
	{
		return center;
	}

	void move(Point p)
	{
		center = p;
		draw();
	}

	virtual void draw() = 0;		// 纯虚函数
	virtual void rotate(double) = 0;		//

private:
	Point center;
};

class Circle:public Figure
{
private:
	double radius;

public:
	Circle(double i = 0, double j = 0, double r = 0) :Figure(i, j), 
		radius(r) {}

	void draw()			// 对父类Figure中的纯虚函数进行实现
	{
		cout << "A circle with center";
		localtion().print();
		cout << "and radius" << radius << endl;
	}

	void rotate(double)
	{
		cout << "no effects\n";
	}
};


class Square : public Figure
{
public:
	Square(double i = 0, double j = 0, double d = 0, double a = 0):
		Figure(i, j), side(d), angle(a) {}

	void draw(){
		cout << "A square with cneter";
		localtion().print();
		cout << "side length" << side << ".\n"
			<< "The angle between one side and the X-axis is "
			<< angle << endl;
	}

	void rotate(double a){
		angle += a;
		cout << "The angle between one side and the X-axis is "
			<< angle << endl;
	}

private:
	double side;
	double angle;

};

int main()
{
	Circle c(1, 2, 3);
	Square s(4, 5, 6);
	Figure* f = &c;
	Figure& g = s;

	f->draw();
	f->move(Point(2, 2));

	g.draw();
	g.rotate(1);
	g.move(Point(1,1));

	return 0;
}









