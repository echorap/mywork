#include<iostream>
#include<map>
#include<string>

using namespace std;

typedef std::map<int, string> Map;
typedef Map::iterator itor;
int main()
{
    Map *map = new Map();
    int key;
    string value;
    while (cin >> key >> value)    // �����string�ͷ�int����
    {
        map->insert(make_pair(key, value));
    }
    for (itor it = map->begin(); it != map->end(); ++it)
        cout << "key:" << it->first << " value:" << it->second << endl;
    delete map;
    system("pause");
    return 0;
}
