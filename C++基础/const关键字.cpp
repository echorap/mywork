// 1.限定一个变量是只读的，提高程序健壮性
// const和函数：const int func(const int a)const;
// 第一个const修饰返回值，返回值不能修改；
// 第二个不能修改形参的值；例如以下是错误的：

/*
int func(const int a){
	a+=3;
	return a;
}
*/

// 第三个不能修改成员变量的值，增加程序的健壮性或鲁棒性。
// const关键的作用：
//（1）const定义常量 const float pi = 3.14;    其值不能被改变
//（2）const与指针   常量指针与指针常量
//（3）const与函数    三个位置  const int func(const int &a)const;
//					  a.修饰形参时，形参不能被修改;
//                    b.修饰成员函数，在括号最后，函数体内不能修改成员变量的值
//（4）const与对象    const Point p; 对象的变量不能被修改







#include<iostream>
using namespace std;

class Point
{
public:
	Point(float a=0, float b=0);
	float getX() const;
	float getY() const;
	void move(float a, float b);  // 偏移量
	void print() const;			  // const成员函数
	
private:
	float x;					//点的x,y坐标
	float y;                    
};


int main()
{
	
}