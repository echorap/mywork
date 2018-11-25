// 每一个对象都“包含”一个指针指向对象本身，称之为this指针
// 可以看出this指针和对象的指针一样
// 即this能指向c



#include<iostream>
using namespace std;

class Circle
{
public:
	Circle();
	void printRadiusOnly();

private:
	float radius;
	float x_centre;
	float y_centre;

};

Circle::Circle()
{
	radius = 10.0;
	x_centre = 0.0;
	y_centre = 0.0;
}

void Circle::printRadiusOnly()
{
	// 隐式实验this指针
	cout << "radius:" << radius << endl;
	cout << "this->radius:" << this->radius << endl;
	cout << "(*this).radius:" << (*this).radius << endl;

	cout << "this的值：" << this << endl;
};

int main()
{
	Circle c1;
	c1.printRadiusOnly();
	cout << "对象c1的地址：" << &c1 << endl;
	
	cout<<"---------------"<<endl;
	
	Circle c2;
	c2.printRadiusOnly();
	cout << "对象c2的地址：" << &c2 << endl;

	system("pause");

	return 0;
}

























