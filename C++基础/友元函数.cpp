#include<iostream>
using namespace std;

class Circle;  // Ϊ�˽���������� ��ǰ������ ���߱������и�Circle�� 
               // ֮������Point��������Circle��
class Point
{
	friend class Circle;   // ������Ԫ��
	friend const Point middle(const Point& u, const Point& v); // ������Ԫ����
	
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
	center.x = 0.0;             // Circle����Point����Ԫ�࣬���Է������еĳ�Ա
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



// ��Ҫ��������дһ����������������е㡣
// �����һ����ͨ��������ֱ���ö�����.ȥ����˽�г�Ա
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
	cout << "��������е��ǣ�";
	middle(p1, p2).print();

	Circle c;
	c.print();
	cout << "�ƶ�Բ�ģ�";
	c.move(10.0, 10.0);
	c.print();

	system("pause");
	return 0;
}