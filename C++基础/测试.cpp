#include<iostream>
#include<vector>
#include<set>
#include<iterator>

using namespace std;

class Solution{
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
	{
		set<int> record(nums1.begin(), nums2.end());
		/*for (int i = 0; i < nums1.size(); i++){
		record.insert(nums1[i]);
		}*/
		set<int> resultSet;
		for (int i = 0; i < nums2.size(); i++){
			if (record.find(nums2[i]) != record.end())
				resultSet.insert(nums2[i]);
		}
		/*vector<int> resultVector;
		set<int>::iterator iter;
		for (iter = resultSet.begin(); iter!=resultSet.end(); iter++)
		{
		resultVector.push_back(*iter);
		}*/

		return vector<int>(resultSet.begin(), resultSet.end());
	}
};


int main()
{
	int nums1[] = { 1, 2, 2, 1 };
	int nums2[] = { 2, 2 };
	vector<int> v1(nums1, nums1 + sizeof(nums1) / sizeof(int));
	vector<int> v2(nums2, nums2 + sizeof(nums2) / sizeof(int));

	
	vector<int> result;
	result = Solution().intersection(v1, v2);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";	
	}
	cout << endl;

	return 0;
}