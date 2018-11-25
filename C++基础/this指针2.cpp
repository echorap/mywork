#include<iostream>
using namespace std;

class Circle
{
public:
	Circle(float radius = 0.0, float x = 0.0, float y = 0.0);
	Circle& setRadius(float r);
	Circle& setX(float x);
	Circle& setY(float y);
	void print() const;

private:
	float radius;
	float x;
	float y;
};

Circle::Circle(float _r, float _x, float _y){
	radius = _r;
	x = _x;
	y = _y;
}

// c.setRadius(10.0) �ķ���ֵ��c����  ��Ҫ��������
Circle& Circle::setRadius(float r){
	radius = r;
	return *this;		// ����
};

Circle& Circle::setX(float x){
	this->x = x;
	return *this;		// ����
};

Circle& Circle::setY(float y){
	this->y = y;
	return *this;		// ����
};

void Circle::print() const{
	cout << radius <<" "<< x << " " << y <<endl;
};

int main()
{
	Circle c;
	c.print();

	c.setRadius(10.0).setX(7.0).setY(8.0);  // ������
	c.print();

	system("pause");
	return 0;
}
