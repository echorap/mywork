#include<iostream>
#include<list>

using namespace std;

typedef list<int> IntList;

int main()
{
	IntList lst;   // list<int> lst;
	for (int i = 0; i < 5; ++i)
	{
		lst.push_front(i);
		lst.push_back(i);
	}

	IntList::iterator itor = lst.begin();
	while (itor!=lst.end())
	{
		cout << *itor++ << " ";
	}
	cout << endl;

	return 0;
}