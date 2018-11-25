// 特点：1. 没有返回值
//       2. 不带参数
//       3. 不能被重载，只有一个
//       4. 必须公有，和构造函数一样

// 不编写构造函数和析构函数时候，系统会自动分配，某些特殊情况才必须用，如用new的时候，析构函数用delete []。
// 即内存中有指针成员变量，并且指针指向堆空间，必须有析构函数，释放指针指向的堆空间，避免内存泄漏。


#include<iostream>
using namespace std;

class Test
{
public:
	Test(){
		x = new int[10];
	}
	~Test(){
		delete []x;
	}					// 由于对象占空间，用析构函数销毁
	
	void print(){
		for(int i =0;i<10;i++)
		{
			cout<<x[i]<<endl;
		}
	}
	
private:
	int *x;
};

int main()
{
	Test t;                    // 创建时调用构造函数
							   // 对象被销毁时自动调用析构函数		
	t.print();
	
	return 0;
}
