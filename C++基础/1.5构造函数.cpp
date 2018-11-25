#include<iostream>
using namespace std;

class Point
{
public:
	Point(float _x, float _y){		// 构造函数 必须是公有的 可以带参数初始化成员变量
		cout<<"调用构造函数"<<endl;
		x = _x;
		y = _y;
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
	Point p1(1, 2);  // 声明一个point对象p1
	// Point p2;
	p1.printPoint();
	
	return 0;
	
}

















