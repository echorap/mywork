//比较数组、vector、array
#include <iostream>
#include <vector>
#include <array>
#include <iomanip>

using namespace std;

int main(void)
{
	/*1.构造方式
	* vector:有多种构造方式，不需要定义元素个数；除常见的初始化方式外，还可以
	* 通过vector和数组构造新的vector
	* array:定义时必须指定array的大小，可通过array构造新的array，不可使用数组构造
	* 数组:定义时必须指定array的大小，使用{}初始化
	*/
	vector<int> myvector = { 1, 2, 3, 4, 5 };
	array<int, 5> myarray = { 1, 2, 3, 4, 5 };
	int myint[5] = { 1, 2, 3, 4, 5 };

	/*2.访问方式
	* 三者均可通过下标运算符[]对元素进行操作，vector和array还可以通过at/front/back进行操作
	*/
	cout << setw(10) << "vector" << setw(10) << "array" << setw(10) << "数组" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << setw(10) << myvector.at(i) << setw(10) << myarray.at(i) << setw(10) << myint[i] << endl;
	}
	/*3.遍历方式
	* vector和array还可以通过正向和反向迭代器对元素进行遍历
	*/
	cout << "=============正向迭代器遍历==========" << endl;
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "=============反向迭代器遍历==========" << endl;
	for (vector<int>::reverse_iterator it = myvector.rbegin(); it != myvector.rend(); ++it)
	{
		cout << *it << endl;
	}
	/*4.增删元素
	* vector可以通过push_back/pop_back/emplace/emplace_back/insert动态增删元素
	* array和数组无法实现动态增删元素
	*/
	myvector.push_back(6);
	myvector.emplace_back(7);
	vector<int>::iterator it = myvector.end();
	myvector.insert(it, { 8, 9 });//在尾部插入元素，可通过it改变插入位置，也可以插入多个元素
	myvector.pop_back();
	cout << "=============动态增删元素==========" << endl;
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	{
		cout << *it << endl;
	}

	system("pause");
	return 0;
}
