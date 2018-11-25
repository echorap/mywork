#include<iostream>
#include<math.h>
using namespace std;

class Point
{
public:
	Point(float a = 0, float b = 0);  //Ĭ�Ϲ���
	float get_x() const;
	float get_y() const;

	void move(float a, float b);
	void print();

private:
	float x;
	float y;
};

Point::Point(float a , float b):x(a), y(b){};

float Point::get_x() const{
	return x;
};

float Point::get_y() const{
	return y;
};

// 
void Point::move(float a, float b){
	x += a;
	x += b;
};
void Point::print(){
	cout << "(" << x << "," << y << ")" << endl;
};


// �����
float dist(const Point& p1, const Point& p2)
{
	float dx = p1.get_x() - p2.get_x();
	float dy = p1.get_y() - p2.get_y();
	return sqrt(dx*dx+dy*dy);

}

// �е�
Point middle(const Point& p1, const Point& p2){
	return Point((p1.get_x() + p2.get_x()) / 2, (p1.get_y() + p2.get_y()) / 2);
}

int main(){
	Point p;  // Ĭ�Ϲ���
	Point q(1.0, 2.0);

	float dx, dy;

	cout << "��һ������Ϊ��";  p.print();
	cout << "�ڶ�������Ϊ��";  q.print();
	cout << endl;

	//q = p; // ���ǣ�0��0��
	//cout << "q = p֮��\n";
	//cout << "���ڵ�һ���������Ϊ��"; p.print();
	//cout << "���ڵڶ����������Ϊ��"; q.print();
	//cout << endl;

	cout << "�Ӽ�����������ֵ���ֱ��ʾ��һ����x��y�����ƫ������";
	cin >> dx >> dy;
	p.move(dx, dy);
	cout << "�ƶ�֮���һ���������Ϊ��";  p.print();
	cout << endl;

	cout << "�Ӽ�����������ֵ���ֱ��ʾ�ڶ�����x,y�����ƫ������";
	cin >> dx >> dy;
	q.move(dx, dy);
	cout << "�ƶ�֮��ڶ����������Ϊ��"; q.print();
	cout << endl;

	// ���Ծ���
	cout << "������֮��ľ��룺" << dist(p, q) << endl;

	// ����middle����
	cout << "������֮����е����꣺"; 
	middle(p, q).print();
	cout << endl;


	system("pause");
	return 0;
}







