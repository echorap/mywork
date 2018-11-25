#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	// 时间复杂度：O(n)
	// 空间复杂度：O(1)
	void moveZeroes(vector<int>& nums)
	{
		//vector<int> nonZeroElements;
		int k = 0; // nums中，[0...k]的元素均为非零元素
		for(int i = 0; i<nums.size(); i++)
			if(nums[i])   // 非零元素
				nums[k++] = nums[i];
				//nonZeroElements.push_back(nums[i]);
				
		for(int i=k;i<nums.size();i++)
			nums[i] = 0;
		
		
		/*		
		for(int i = 0; i < nonZeroElements.size(); i++)
		{
			nums[i] = nonZeroElements[i];
		}
		
		for(int i = nonZeroElements.size();i < nums.size();i++)
			nums[i] = 0;	
		*/		
	}
};

int main()
{
	int arr[] = {0, 1, 0, 3, 12};
	vector<int> vec(arr, arr+sizeof(arr)/sizeof(int));
	Solution().moveZeroes(vec);
	
	for(int i = 0;i<vec.size();i++)
		cout<<vec[i]<<" ";
	cout<<endl;
	
	return 0;
}