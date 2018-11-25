#include<iostream>
#include<map>

using namespace std;

typedef map<int, string> mymap;
typedef mymap::iterator itor;

int main()
{
	mymap * map = new mymap();
	int key;
	string value;
	while(cin>>key>>value)
	{
		map->insert(make_pair(key, value));
	}
	for(itor it=map->begin(); it!=map->end();++it)
		cout<<"key: "<<it->first<<" value: "<<it->second<<endl;
	
	delete map;
	return 0;
}