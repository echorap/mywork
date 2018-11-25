#include<iostream>
#include<math.h>
using namespace std;

class Point
{
public:
	Point(float a = 0, float b = 0);  //默认构造
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


// 点距离
float dist(const Point& p1, const Point& p2)
{
	float dx = p1.get_x() - p2.get_x();
	float dy = p1.get_y() - p2.get_y();
	return sqrt(dx*dx+dy*dy);

}

// 中点
Point middle(const Point& p1, const Point& p2){
	return Point((p1.get_x() + p2.get_x()) / 2, (p1.get_y() + p2.get_y()) / 2);
}

int main(){
	Point p;  // 默认构造
	Point q(1.0, 2.0);

	float dx, dy;

	cout << "第一个坐标为：";  p.print();
	cout << "第二个坐标为：";  q.print();
	cout << endl;

	//q = p; // 都是（0，0）
	//cout << "q = p之后\n";
	//cout << "现在第一个点的坐标为："; p.print();
	//cout << "现在第二个点的坐标为："; q.print();
	//cout << endl;

	cout << "从键盘输入两个值，分别表示第一个点x，y方向的偏移量：";
	cin >> dx >> dy;
	p.move(dx, dy);
	cout << "移动之后第一个点的坐标为：";  p.print();
	cout << endl;

	cout << "从键盘输入两个值，分别表示第二个点x,y方向的偏移量：";
	cin >> dx >> dy;
	q.move(dx, dy);
	cout << "移动之后第二个点的坐标为："; q.print();
	cout << endl;

	// 测试距离
	cout << "两个点之间的距离：" << dist(p, q) << endl;

	// 测试middle函数
	cout << "两个点之间的中点坐标："; 
	middle(p, q).print();
	cout << endl;


	system("pause");
	return 0;
}







