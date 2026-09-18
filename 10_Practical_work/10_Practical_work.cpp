

#include <iostream>
using namespace std;


void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
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
void BubbleSort(int arr[], int size, int direction =1 )
{
	for (int i = 0; i < size -1; i++)
	{
		for (int j = 0; j < size-j-1; j++) {	
				if (direction == 1 && arr[j] < arr[j+1]) 
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j+1] = temp;
				}
				if(direction == 0 && arr[j] < arr[j + 1])
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
   




















}
