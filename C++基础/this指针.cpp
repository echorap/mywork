// ÿһ�����󶼡�������һ��ָ��ָ���������֮Ϊthisָ��
// ���Կ���thisָ��Ͷ����ָ��һ��
// ��this��ָ��c



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
	// ��ʽʵ��thisָ��
	cout << "radius:" << radius << endl;
	cout << "this->radius:" << this->radius << endl;
	cout << "(*this).radius:" << (*this).radius << endl;

	cout << "this��ֵ��" << this << endl;
};

int main()
{
	Circle c1;
	c1.printRadiusOnly();
	cout << "����c1�ĵ�ַ��" << &c1 << endl;
	
	cout<<"---------------"<<endl;
	
	Circle c2;
	c2.printRadiusOnly();
	cout << "����c2�ĵ�ַ��" << &c2 << endl;

	system("pause");

	return 0;
}

























