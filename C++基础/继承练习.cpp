#include<iostream>

using namespace std;

class Point
{
	friend ostream &operator<<(ostream&, Point&);

public:
	Point() :x(0), y(0){}
	Point(double xval, double yval) :x(xval), y(yval) {}

protected:
	double x;
	double y;
};

ostream &operator<<(ostream& out, Point& apoint){
	out << "Point:X:Y: " << apoint.x << "," << apoint.y << "\n";
	return out;
};


class Circle :public Point
{
	friend ostream &operator<<(ostream& out, Circle& aCircle);

public:
	Circle() :Point(), radius(0) {}
	Circle(double r, double xval, double yval) :Point(xval, yval), radius(r) {}

	double area(){
		return (3.14159*radius*radius);
	}

protected:
	double radius;
};

ostream &operator<<(ostream& out, Circle& aCircle)
{
	out << "Circle::radius " << aCircle.radius;
	out << aCircle.x << "\n";
	out << aCircle.y << "\n";
	return out;
}

class Cylinder :public Circle
{
	friend ostream &operator<<(ostream& out, Cylinder& aCylinder);

public:
	Cylinder() :Circle(){ height = 0; }
	Cylinder(double hv, double rv, double xv, double yv) :Circle(xv, yv, rv)
	{
		height = hv;
	}

	double area() { return 2 * Circle::area() + 2 * 3.14159*radius*height; }

protected:
	double height;
};

ostream &operator<<(ostream& out, Cylinder& aCylinder){
	out << "cylinder dimensions:";
	out << "x:" << aCylinder.x;
	out << "y:" << aCylinder.y;
	out << "radius:" << aCylinder.radius;
	out << "height" << aCylinder.height << endl;
	return out;
}

int main()
{
	Point p(2, 3);
	Circle c(7, 6, 5);
	Cylinder cyl(10, 11, 12, 13);

	cout << p;
	cout << c;
	cout << "area circle:" << c.area() << endl;

	cout << "area cylinder base is " << cyl.Circle::area() << endl;

	return 0;
}












