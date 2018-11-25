// 静态局部变量：函数结束后，静态变量的内存空间不会被系统回收，下一次调用可以保留上一次的计算结果，和全局变量相似。
// 静态局部变量和全局变量的作用范围不一样。

// 静态全局变量和全局变量的区别：生命周期不变，作用域缩小，
// 静态全局变量只能在它生命的文件中使用，不能被extern关键字引用。



#include<iostream>
using namespace std;

void func()
{
	static int count = 0;
	printf("这是第%d次调用\n", ++count);
}

int main()
{
	func();
	func();
	func();

	system("pause");
	return 0;
}