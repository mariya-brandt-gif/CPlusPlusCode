

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





















}
