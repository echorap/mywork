#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> s;		// 声明一个不能重复的元素集合
	s.insert(10);
	s.insert(-1);
	s.insert(2);
	s.insert(5);
	s.insert(7);
	s.insert(8);
	s.insert(9);
	s.insert(22);
	s.insert(10);
	
	set<int>::iterator here=s.begin();
	while (here !=s.end())
	{
		cout << *here << " ";
		here++;
	}
	cout << endl;

	int key;
	cout << "enter the integer to search.\n";
	cin >> key;
	here = s.find(key);
	if (here!=s.end())
	{
		cout << key << " is in this set" << endl;
	}
	else
	{
		cout << key << "is not in this set" << endl;
	}


	return 0;
}