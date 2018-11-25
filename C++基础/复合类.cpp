#include<iostream>
using namespace std;
// ��Ͷ����൱���������͵ı��� 
// Point p;    ����Ĭ�Ϲ���
// Point q(1,1);    ������ͨ����


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


class Circle  // ������
{
public:
	Circle(){};
	// center(x,y)������Point�Ĺ��캯������ʼ�� Point(float _x, float _y)
	Circle(float _x, float _y, float r): center(_x, _y),radius(r) {}  
	
	void setCircle(float r, Point p){
		radius = r;
		center = p;  // center.x = p.x  center.y = p.y
	}
	
	void print(){
		cout<<"radius:"<<radius<<endl;   // ��ӡԲ��
		center.print();
	}
	
private:
	// ������һ����Ķ���+һ���뾶
	Point center;  // center.x  �� center.y
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