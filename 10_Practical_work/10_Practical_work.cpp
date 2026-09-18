

#include <iostream>
using namespace std;

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void SortArray(int arr[], int size, int direction =1 ) 
{
	for (int i = 0; i < size -1; i++)
	{
		for (int j = 0; j < size-j-1; j++) 
		{	
			if (direction == 1 && arr[j] < arr[j+1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
			if(direction == 0 && arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void InitArray2(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41-20;
	}
}

void SortArray2(int arr[], int left, int right)
{
	for (int i = left; i < right; i++)
	{
		for (int j = left; j < right - (i - left); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}








int main()
{
	srand(time(0));

	{
		int arr[10];

		InitArray(arr, 10);
		cout << "Array: " << endl;
		ShowArray(arr, 10);

		SortArray(arr, 10, 0);
		cout << "Ascending order: " << endl; //Aufsteigend:
		ShowArray(arr, 10);

		SortArray(arr, 10, 1);
		cout << "Descending order: " << endl; //Absteigend:
		ShowArray(arr, 10);
	}

	{
		int arr[10];

		InitArray2(arr, 10);
		cout << "Array: " << endl;
		ShowArray(arr, 10);

		int firstNegative = -1;
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] < 0)
			{
				firstNegative = i;
				break;
			}
		}
		int lastNegative = -1;
		for (int i = 9; i>= 0; i--)
		{
			if (arr[i] < 0)
			{
				lastNegative = i;
				break;
			}
		}
		if (firstNegative != -1 && lastNegative != -1 && firstNegative < lastNegative)
		{
			SortArray2(arr, firstNegative + 1, lastNegative - 1);
		}
		cout << "Result: " << endl;
		ShowArray(arr, 10);

	}




















}
