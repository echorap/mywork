#include<iostream>
using namespace std;

class Father
{
public:
	Father(int i): b_number(i) {}
	
	int get_number(){
		return b_number;
	}
	
	void print(){
		cout<<b_number<<endl;
	}
	
	
private:
	int b_number;	
};

class Son: public Father
{
	public:
	Son(int i, int j): Father(i), d_number(j) {}   	// 调用父类的构造函数
														// 两个类交互的关系只有复合类和继承会使用到
	
	void print()
	{
		cout<<get_number()<<" ";
		cout<<d_number<<endl;
	}
	
	
private:
	int d_number;
};

int main()
{
	Father father(2);
	Son son(3, 4);
	father.print();
	
	cout<<"son is ";
	son.print();
	cout<<"Father part of son is ";
	son.Father::print();
	
	return 0;
}












