#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
	{
		unordered_map<int, int> record;
		for (int i = 0; i < nums1.size(); i++)
		{
			record[nums1[i]]++;
		}

		vector<int> resultVector;
		for (int i = 0; i < nums2.size(); i++)
		{
			if (record[nums2[i]]>0)
			{
				resultVector.push_back(nums2[i]);
				record[nums2[i]]--;
			}
		}

		return resultVector;
	}

};

int main()
{
	int nums1[] = { 1, 2, 2, 0 };
	int nums2[] = { 2, 2 };
	vector<int> v1(nums1, nums1 + sizeof(nums1) / sizeof(int));
	vector<int> v2(nums2, nums2 + sizeof(nums2) / sizeof(int));

	vector<int> result = Solution().intersect(v1, v2);

	for (vector<int>::iterator iter = result.begin(); iter != result.end();iter++)
	{
		cout << *(iter) << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
