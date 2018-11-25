#include<iostream>
#include<unordered_map>
#include<cstring>

using namespace std;

class Solution {
public:
	/**
	* @param s: a string
	* @param t: a string
	* @return: true if the characters in s can be replaced to get t or false
	*/
	bool isomorphic(string &s, string &t)
	{
		unordered_map<char, char> m1;   //s --> t
		unordered_map<char, char> m2;   //t --> s

		for (int i = 0; i < s.size(); i++)
		{
			if (m1.count(s[i]) > 0 && m1[s[i]] != t[i])
				return false;

			if (m2.count(t[i]) > 0 && m2[t[i]] != s[i])
				return false;

			m1[s[i]] = t[i];
			m2[t[i]] = s[i];
		}

		return true;
	}
};


int main()
{	
	char *s1="AbDeG";
	char *s2="AbdEg";
	s1+=2;
	s2+=2;
	printf("%d\n",strcmp(s1,s2));
	
	return 0;
}