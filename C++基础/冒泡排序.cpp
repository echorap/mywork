#include<iostream>
#include<time.h>

using namespace std;

void randData(int *a, int n){
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << "\n";
}

void swap(int*m, int*n)
{
	int temp;
	temp = *m;
	*m = *n;
	*n = temp;
}

void bubbleSort(int *a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (a[j]>a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

void selectionSort(int*a, int n) 
{
	for (int i = 0; i < n-1; i++)			// 外层循环为了控制循环的次数
	{
		int min = i;
		for (int j = i+1; j < n; j++)		// 内层循环为了寻找最小值
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		if (min != i)				// 找到最小值后立马交换 
		{
			swap(&a[i], &a[min]);	// 交换后再进行下一层的循环
		}
	}
}

void insertSort(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i; j > 0; j--)		// 无序的第一个数和前面有序的依次比较
		{
			
			if (a[j]<a[j-1]){			// 小于这个数的话交换
				swap(&a[j], &a[j - 1]);
			}
			else{						// 不小于的话直接跳出内层循环
				break;
			}
		}
	}
}

void quickSort(int *a, int start, int end)
{
	if(start>=end)
		return;
	int i = start;
	int j = end;
	int key = a[i];
	
	while(i<j)
	{
		while(i<j&&a[j]>=key)
		{
			j--;
		}
		a[i] =a[j];
		while(i<j&&a[i]<=key)
		{
			i++;
		}
		a[j]=a[i];
	}
	a[i] = key;
	
	quickSort(a, start, i-1);
	quickSort(a, i+1, end);
}


void display(int *a,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}



int main()
{
	const int N = 10;
	int a[N];

	randData(a, N);
	//bubbleSort(a, N);
	//selectionSort(a, N);
	//insertSort(a, N);
	quickSort(a,0,N-1);

	display(a, N);

	system("pause");
	return 0;
}




