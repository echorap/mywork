#include<iostream>
using namespace std;

class Point
{
public:
	Point(float _x, float _y){		// ���캯�� �����ǹ��е� ���Դ�������ʼ����Ա����
		cout<<"���ù��캯��"<<endl;
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
	Point p1(1, 2);  // ����һ��point����p1
	// Point p2;
	p1.printPoint();
	
	return 0;
	
}

















