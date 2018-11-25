#include<iostream>
#include<math.h>

using namespace std;

class Circle{
public:
	Circle();                    // ������
	float getRadius();
	float getCenterX();
	float getCenterY();
	void setCircle(float _radius, float _xCenter, float _yCenter);
	
	float distance(Circle c);   // ������Բ֮��ľ���
	void printCircle();
	
private:
	float xCenter;
	float yCenter;
	float radius;
};

Circle::Circle()
{
	radius = 0.0;
	xCenter = 0.0;
	yCenter = 0.0;
}


float Circle::getRadius()
{
	return radius;
}

float Circle::getCenterX()
{
	return xCenter;
}

float Circle::getCenterY()
{
	return yCenter;
}

void Circle::setCircle(float x, float y, float r)
{
	radius = r;
	xCenter = x;
	yCenter = y;
}

float Circle::distance(Circle c)                 // ������Բ֮��ľ���
{
	float x = xCenter - c.xCenter;
	float y = yCenter - c.yCenter;
	return sqrt(x*x + y*y);
}

void Circle::printCircle()
{
	cout<<"x:"<< xCenter << ",y:" << yCenter <<",r:"<<radius<<endl;
}


int main()
{
	Circle c1;   // ���캯��������Circle::Circle��ʼ�����Զ�������
	Circle c2;
	c2.setCircle(1.0, 1.0, 1.0);
	
	float dis = c1.distance(c2);
	cout<<"����Բ�ľ����ǣ�"<<dis<<endl;
	//c1.printCircle();
	
	return 0;
}








