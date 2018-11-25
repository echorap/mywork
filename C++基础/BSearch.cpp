#include<iostream>

using namespace std;

int BSearch(int *arr, int n, int value)
{
	int start, end, mid;
	end = n-1;
	start = 0;
	while(arr!=NULL&&start <= end)
	{
		mid = start+(end - start)/2;             // (start + end) / 2;
		if(arr[mid] > value)
			end = mid - 1;
		else if(arr[mid] < value)
			start = mid + 1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int value;
	int arr[] = {1,4,6,7,8,9,14};
	cin >> value;
	cout<< BSearch(arr, 7, value) <<endl;
	
	return 0;
}