//�Ƚ����顢vector��array
#include <iostream>
#include <vector>
#include <array>
#include <iomanip>

using namespace std;

int main(void)
{
	/*1.���췽ʽ
	* vector:�ж��ֹ��췽ʽ������Ҫ����Ԫ�ظ������������ĳ�ʼ����ʽ�⣬������
	* ͨ��vector�����鹹���µ�vector
	* array:����ʱ����ָ��array�Ĵ�С����ͨ��array�����µ�array������ʹ�����鹹��
	* ����:����ʱ����ָ��array�Ĵ�С��ʹ��{}��ʼ��
	*/
	vector<int> myvector = { 1, 2, 3, 4, 5 };
	array<int, 5> myarray = { 1, 2, 3, 4, 5 };
	int myint[5] = { 1, 2, 3, 4, 5 };

	/*2.���ʷ�ʽ
	* ���߾���ͨ���±������[]��Ԫ�ؽ��в�����vector��array������ͨ��at/front/back���в���
	*/
	cout << setw(10) << "vector" << setw(10) << "array" << setw(10) << "����" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << setw(10) << myvector.at(i) << setw(10) << myarray.at(i) << setw(10) << myint[i] << endl;
	}
	/*3.������ʽ
	* vector��array������ͨ������ͷ����������Ԫ�ؽ��б���
	*/
	cout << "=============�������������==========" << endl;
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "=============�������������==========" << endl;
	for (vector<int>::reverse_iterator it = myvector.rbegin(); it != myvector.rend(); ++it)
	{
		cout << *it << endl;
	}
	/*4.��ɾԪ��
	* vector����ͨ��push_back/pop_back/emplace/emplace_back/insert��̬��ɾԪ��
	* array�������޷�ʵ�ֶ�̬��ɾԪ��
	*/
	myvector.push_back(6);
	myvector.emplace_back(7);
	vector<int>::iterator it = myvector.end();
	myvector.insert(it, { 8, 9 });//��β������Ԫ�أ���ͨ��it�ı����λ�ã�Ҳ���Բ�����Ԫ��
	myvector.pop_back();
	cout << "=============��̬��ɾԪ��==========" << endl;
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	{
		cout << *it << endl;
	}

	system("pause");
	return 0;
}
