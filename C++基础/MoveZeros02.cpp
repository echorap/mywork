#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	// ʱ�临�Ӷȣ�O(n)
	// �ռ临�Ӷȣ�O(1)
	void moveZeroes(vector<int>& nums)
	{
		//vector<int> nonZeroElements;
		int k = 0; // nums�У�[0...k]��Ԫ�ؾ�Ϊ����Ԫ��
		for(int i = 0; i<nums.size(); i++)
			if(nums[i])   // ����Ԫ��
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