// 1.�޶�һ��������ֻ���ģ���߳���׳��
// const�ͺ�����const int func(const int a)const;
// ��һ��const���η���ֵ������ֵ�����޸ģ�
// �ڶ��������޸��βε�ֵ�����������Ǵ���ģ�

/*
int func(const int a){
	a+=3;
	return a;
}
*/

// �����������޸ĳ�Ա������ֵ�����ӳ���Ľ�׳�Ի�³���ԡ�
// const�ؼ������ã�
//��1��const���峣�� const float pi = 3.14;    ��ֵ���ܱ��ı�
//��2��const��ָ��   ����ָ����ָ�볣��
//��3��const�뺯��    ����λ��  const int func(const int &a)const;
//					  a.�����β�ʱ���ββ��ܱ��޸�;
//                    b.���γ�Ա��������������󣬺������ڲ����޸ĳ�Ա������ֵ
//��4��const�����    const Point p; ����ı������ܱ��޸�







#include<iostream>
using namespace std;

class Point
{
public:
	Point(float a=0, float b=0);
	float getX() const;
	float getY() const;
	void move(float a, float b);  // ƫ����
	void print() const;			  // const��Ա����
	
private:
	float x;					//���x,y����
	float y;                    
};


int main()
{
	
}