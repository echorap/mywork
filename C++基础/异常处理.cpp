// 大多数一般用if,偶尔会用抛出异常，比如自己封装函数

#include<iostream>
using namespace std;

bool f()
{
	int a = 5;
	int b = 0;

	if (b == 0) throw 3.3;
	int c = a / b;
}

int main()
{
	try
	{
		// 把有可能出现异常的代码放入
		f();
	}

	catch (int code)
	{
		cout << code << endl;
	}

	catch (const char *error)
	{
		cout << "error:" << error << endl;
	}

	catch (...) // 以上不含有的情况
	{
		cout << "捕获所有异常!" << endl;
	}


	system("pause");
	return 0;
}