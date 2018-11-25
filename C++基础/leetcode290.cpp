/*
����һ��?pattern(ģʽ)?��һ���ַ���?str?���ж�?str?�Ƿ���ѭ��ͬ��ģʽ��
�������ѭָ��ȫƥ�䣬���磬pattern���ÿ����ĸ���ַ���str�е�ÿ���ǿյ���֮�������˫�����ӵĶ�Ӧģʽ��

ʾ��1:

����: pattern = 
"abba"
, str = 
"dog cat cat dog"

���: true
*/

#include<iostream>
#include<unordered_map>
#include<string>
 
using namespace std;
 
class Solution{
public:
	bool wordPattern(string& pattern, string& str)
	{
		vector<string> words=split(str);
		if (pattern.size() != words.size())
			return false;
 
		unordered_map<char, string> map1;
		unordered_map<string, char> map2;
 
		for (int i = 0; i < pattern.size(); i++)
		{
			if (map1.count(pattern[i])>0 && map1[pattern[i]] != words[i])
				return false;
			if (map2.count(words[i]) > 0 && map2[words[i]] != pattern[i])
				return false;
			map1[pattern[i]] = words[i];
			map2[words[i]] = pattern[i];
		}
		return true;
 
	}
 
	vector<string> split(const string& str)
	{
		vector<string> res;
		string temp;
 
		for (int i = 0; i <= str.size(); i++)
		{
			if (str[i] == ' ' || str[i] == '\0')
			{
				res.push_back(temp);
				temp.clear();
			}
			else
			{
				temp += str[i];
			}
		}
		return res;
	}
 
 
};
 
int main()
{
	string pattern = "abba";
	string str = "cat dog dog cat";
	bool reslut = Solution().wordPattern(pattern, str);
 
	if (reslut)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
 
	system("pause");
	return 0;
}