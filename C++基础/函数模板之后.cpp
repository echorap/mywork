// 模板/通用函数

#include<iostream>

using namespace std;


template <class T>   // 声明T类型，表示T是一个未知的类型 模板参数类型
void printArray(T *array, int size){
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
		if (i<(size - 1))
		{
			cout << ",";
		}
	}
	cout << "\n";
}


int main()
{
	const int max = 5;
	int iArray[max] = { 10, 20, 30, 40, 50 };
	float fArray[max] = { 1.1, 1.2, 1.3, 1.4, 1.5 };
	const char *cArray[max] = { "one", "two", "three", "four", "five" };

	printArray(iArray, 5);		//调用时候确定T的类型
	printArray(fArray, 5);
	printArray(cArray, 5);

	//for (int i = 0; i < max; i++)
	//{
	//	cout << iArray[i] << ",";
	//}
	//cout << "\n";
	//for (int i = 0; i < max; i++)
	//{
	//	cout << fArray[i] << ",";
	//}
	//cout << "\n";

	//for (int i = 0; i < max; i++)
	//{
	//	cout << cArray[i] << ",";
	//}
	//cout << endl;

	system("pause");
	return 0;
}