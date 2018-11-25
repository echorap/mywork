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
	for (int i = 0; i < n-1; i++)			// ���ѭ��Ϊ�˿���ѭ���Ĵ���
	{
		int min = i;
		for (int j = i+1; j < n; j++)		// �ڲ�ѭ��Ϊ��Ѱ����Сֵ
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		if (min != i)				// �ҵ���Сֵ�������� 
		{
			swap(&a[i], &a[min]);	// �������ٽ�����һ���ѭ��
		}
	}
}

void insertSort(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i; j > 0; j--)		// ����ĵ�һ������ǰ����������αȽ�
		{
			
			if (a[j]<a[j-1]){			// С��������Ļ�����
				swap(&a[j], &a[j - 1]);
			}
			else{						// ��С�ڵĻ�ֱ�������ڲ�ѭ��
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




