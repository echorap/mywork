#include<iostream>
#include<vector>
#include<cassert>

using namespace std;

class Solution{
public:
	void sortColors(vector<int>& nums)
	{
		int count[3] = {0};
		for(int i=0; i<nums.size(); i++)
			count[nums[i]] ++;
		
		int index = 0;
		for(int i=0; i< count[0]; i++)
			nums[index++] = 0;
		for(int i=0; i< count[1]; i++)
			nums[index++] = 1;
		for(int i=0; i< count[2]; i++)
			nums[index++] = 2;
		
	}
};


int main()
{
	int nums[] = {2, 0, 2, 1, 1, 0};
	vector<int> vec(nums, nums+sizeof(nums)/sizeof(int));
	Solution().sortColors(vec);
	for(int i=0; i<vec.size(); i++)
		cout<<vec[i]<<" ";
	cout<<endl;
	
	return 0;
}