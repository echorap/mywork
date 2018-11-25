#include<iostream>
using namespace std;

class Point
{
public:
	Point(){		// 构造函数
		x = 0;
		y = 0;
	}
	void setX(float _x)
	{
		x = _x;
	}
	
	void setY(float _y)
	{
		y = _y;
	}
	void printPoint(){
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
	float getX(){return x;}
	
	float getY(){return y;}
	
private:
	float x;
	float y;
};

int main(int argc, char const *argv[])
{
	Point p1;  // 声明一个point对象p1
	
	p1.setX(1);
	p1.setY(2);
	p1.printPoint();
	float x = p1.getX();
	float y = p1.getY();
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	return 0;
	
}

















