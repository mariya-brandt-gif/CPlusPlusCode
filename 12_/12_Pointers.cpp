
#include <iostream>
using namespace std;

void Change(int a)
{
	a++;
}
void Change(int* a)
{
	(*a)++;
}
int FindMax(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else if (b > c and b > a)
		return b;
	else
		return c;
}
int* FindMax(int* a, int* b, int* c)
{
	if (*a > *b && *a > *c)
		return a;
	else if (*b > *c and *b > *a)
		return b;
	else
		return c;
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 50;
	}
}void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}cout << endl;
}
int* MaxElement(int* arr, int size)
{
	int* max = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max) {
			max = arr + i;
		}
	}
	return max;
}


// Practical work 2
void enterArr(int* p, int a2) 
{
	cout << "Enter " << a2 << " integeres: " << endl;

	for (int i = 0; i < a2; i++)
	{
		cin >> *(p + i);
	}
	
}
void showDirect(int* p, int a2)
{
	cout << "Direct order: ";

	for (int i = 0; i < a2; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
}
void showReverse(int* p, int a2)
{
	cout << "Reverse order: ";

	for (int i = a2-1; i >= 0; i--)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
}
int calculateSum(int* p, int a2)
{
	int sum = 0;
	for (int i = 0; i < a2; i++)
	{
		sum += *(p + i);
	}
	return sum;

}

// Homework 1

int findMinIndex(int h1[], int n1) 
{
	int minIndex = 0;
	for (int i = 1; i < n1; i++)
	{
		if (h1[i] < h1[minIndex])
		{
			minIndex = i;
		}
	}
	return minIndex;
}
int findMaxIndex(int h1[], int n1) 
{
	int maxIndex = 0;
	for (int i = 1; i < n1; i++)
	{
		if (h1[i] > h1[maxIndex])
		{
			maxIndex = i;
		}
	}
	return maxIndex;
}
void swapElements(int h1[], int index1, int index2)
{
	int temp = h1[index1];
	h1[index1] = h1[index2];
	h1[index2] = temp;
}

void showArray(int h1[], int n1)
{
	for (int i = 0; i < n1; i++)
	{
		cout << h1[i] << " ";
	}
	cout << endl;
}

// Homework 2

void swapEvedOdd(int* arr, int n)
{
	for (int i = 0; i < n-1; i+=2)
	{
		int temp = *(arr + i); 
		*(arr + i) = *(arr + i + 1);
		*(arr + i + 1) = temp;
	}
}



int main()
{
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	int* Max = MaxElement(arr, size);
	(*Max) *= 2;
	ShowArray(arr, size);


	int a = 5, b = 8, c = 12;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	int max = FindMax(a, b, c);
	cout << "Max = " << max << endl;
	max++;
	cout << "Max = " << max << endl;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	int* maxEl = FindMax(&a, &b, &c);
	cout << "Max = " << *maxEl << endl;
	(*maxEl)++;
	cout << "Max = " << *maxEl << endl;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;


	cout << "a = " << a << endl;
	Change(&a);
	cout << "a = " << a << endl;
	Change(&a);
	cout << "a = " << a << endl;
	Change(&a);
	cout << "a = " << a << endl;

	/*
	int a = 5;
	int b = 10;

	int* pa = &a;
	int* pb = &b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "pa = " << pa << endl;
	cout << "pb = " << pb << endl;

	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	cout << a + b << endl;
	cout << *pa + *pb << endl;

	pa = &b;
	cout << "b = " << b << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	*pa += 2;
	cout << "b = " << b << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	const int size = 10;
	int arr[size]{};
	int* parr = &arr[0];

	cout << arr << endl;//address first element
	cout << parr << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << &arr[1] << endl;
	cout << *parr << endl;
	cout << parr + 1 << endl;
	cout << *parr + 1 << endl;


	for (int i = 0; i < size; i++)
	{
		*(parr + i) = rand() % 100; //arr[i] = rand() % 100;
		cout << *(parr + i) << " ";
	}
	cout << endl;

	parr = arr;
	for (int i = 0; i < size; i++)
	{
		*parr = rand() % 10;
		parr++;
	}
	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr++;
	}
	cout << endl;
	int* newp = arr;
	*newp = 0;
	newp += 3;
	*newp = 0;
	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr++;
	}
	cout << endl;
	parr--;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr--;
	}
	cout << endl;

	*/


	//{
	//	int a;
	//	int b;
	//	int c;

	//	cout << "Enter three Number: ";
	//	cin >> a >> b >> c;

	//	int* pa = &a;
	//	int* pb = &b;
	//	int* pc = &c;

	//	int product = *pa * *pb * *pc;
	//	int average = (*pa * *pb * *pc) / 3;
	//	int min = *pa;

	//	if (*pb < min)
	//		min = *pb;
	//	if (*pc < min)
	//		min = *pc;
	//	cout << "Product: " << product << endl;
	//	cout << "Average: " << average << endl;
	//	cout << "Minimum: " << min << endl;
	//}

	{
		const int a2 = 5;
		int arr[a2];

		int* p = arr;
		enterArr(p, a2);
		showDirect (p, a2);
		showReverse (p, a2);

		int sum = calculateSum(p, a2);

		cout << "Sum of element: " << sum << endl;	
	

	}

	{
		int n1;
		cout << "Number of elements: ";
		cin >> n1;

		int h1[100];
		cout << "Enter the elements: "<< endl;
		for (int i = 0; i < n1; i++)
		{
			cin >> h1[i];
		}

		int minIndex = findMinIndex(h1, n1);
		int maxIndex = findMaxIndex(h1, n1);

		swapElements(h1, minIndex, maxIndex);
		cout << "Transformed array: " << endl;
		showArray(h1, n1);

	}

	{
		const int n2 = 8;
		int arr[n2] = { 28, 21, 69, 54, 65, 38, 98,3 };

		swapEvedOdd(arr, n2);
		for (int i = 0; i < n2; i++)
		{
			cout << arr[i] << " ";
		}

	}











	
}
