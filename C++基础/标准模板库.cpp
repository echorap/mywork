#include<iostream>
#include<vector>		
using namespace std;

int main()
{

	vector<int> v(10);			// 容器

	for (int i = 0; i<10; i++)
	{
		v[i] = i;
	}


	/*for (int i = 0; i < 10; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;*/

	vector<int>::iterator itor = v.begin();
	while (itor!=v.end())
	{
		cout << *(itor++) << " ";		// 类似指针，可以解引用 
	}
	cout << endl;

	// system("pause");
	return 0;
}