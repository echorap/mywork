#include<iostream>

using namespace std;

void printArray(int *array, int size){
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
		if (i<(size-1))
		{
			cout << ",";
		}
	}
	cout << "\n";
}

void printArray(float *array, int size){
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
		if (i<(size - 1))
		{
			cout << ",";
		}
	}
	cout << "\n";
}

void printArray(const char **array, int size){
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
		if (i<(size - 1))
		{
			cout << ",";
		}
	}
	cout << "\n";
}




int main()
{
	const int max = 5;
	int iArray[max] = { 10, 20, 30, 40, 50 };
	float fArray[max] = { 1.1, 1.2, 1.3, 1.4, 1.5 };
	const char *cArray[max] = { "one", "two", "three", "four", "five" };

	printArray(iArray, 5);
	printArray(fArray, 5);
	printArray(cArray, 5);

	//for (int i = 0; i < max; i++)
	//{
	//	cout << iArray[i] << ",";
	//}
	//cout << "\n";
	//for (int i = 0; i < max; i++)
	//{
	//	cout << fArray[i] << ",";
	//}
	//cout << "\n";

	//for (int i = 0; i < max; i++)
	//{
	//	cout << cArray[i] << ",";
	//}
	//cout << endl;

	system("pause");
	return 0;
}