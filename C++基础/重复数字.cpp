#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

class Solution{
public:
	vector<int> intersection(vector<int> & nums1, vector<int>& nums2) // 传入两个vector
	{
		/*set<int> record;
		for (int i = 0; i < nums1.size(); i++){
			record.insert(nums1[i]);
		}*/
		set<int> record(nums1.begin(), nums1.end());

		set<int> results;
		for (int i = 0; i < nums2.size(); i++)
		{
			//cout <<"find: "<< *(record.find(nums2[i])) << "\n";
			if (record.find(nums2[i]) != record.end())
				results.insert(nums2[i]);
		}

		/*vector<int> resultVector;
		for (set<int>::iterator iter = results.begin(); iter!=results.end();iter++)
		{
			resultVector.push_back(*iter);
		}*/

		//return resultVector;
		return vector<int>(results.begin(), results.end());

	}
};

int main()
{
	vector<int> res;
	vector<int> a;
	vector<int> b;

	int i = 0, j=0;
	do{
		cin >> i;
		a.push_back(i);
	}while (getchar() != '\n');

	do{
		cin >> j;
		b.push_back(j);
	}while (getchar() != '\n');

	Solution s;
	res = s.intersection(a, b);

	vector<int>::iterator iter;
	for (iter = res.begin(); iter !=res.end(); iter++)
	{
		cout << *iter<<" ";
	}
	cout << endl;

	system("pause");
	return 0;
}
