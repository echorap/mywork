// �����һ����if,ż�������׳��쳣�������Լ���װ����

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
		// ���п��ܳ����쳣�Ĵ������
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

	catch (...) // ���ϲ����е����
	{
		cout << "���������쳣!" << endl;
	}


	system("pause");
	return 0;
}