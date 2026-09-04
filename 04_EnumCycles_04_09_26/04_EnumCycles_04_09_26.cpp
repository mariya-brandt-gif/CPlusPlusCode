

#include <iostream>
using namespace std;

int main()
{
	// cout << "\n 1 ";
   // cout << "\n  ";

	//int i = 1;
	//while (i <= 100)
	//{
	//	cout << i << endl;
	//	i++;
	//}
	// cout << "\n 2 ";
   // cout << "\n  ";

	/*int i = 1;
	int count = 0;

	while (i <= 200)
	{
		if (i % 2 == 0)
			{ 
			cout << i << " ";
			count++;
			}
		i += 1;
	}
	cout << "Amount: " << count << endl;*/

	// cout << "\n 3 ";
	// cout << "\n  ";

	//int n;
	//int i = 0;
	//int number;
	//int sum = 0;

	//cout << "Enter how many numbers you want to enter: ";
	//cin >> n;

	//while (i < n)
	//{
	//	cout << "Enter number: ";
	//	cin >> number;

	//	if (number % 2 == 0)
	//	{
	//		sum += number;
	//	}
	//	i++;

	//}
	//cout << "Sum: " << sum << endl;

	//cout << "\n 4 ";
	//cout << "\n  ";

	//int sum = 0;
	//for (int i = 1; i <= 12; i++)
	//{
	//	sum += i;
	//}
	//cout << " Amount of strikes: " << sum << endl;

	//cout << "\n 5 ";
	//cout << "\n  ";

	int number;
	int sum = 0 ;

	for ( ; ; )
	{
		cout << "Enter number: ";
		cin >> number;

		if (number == 0)
		{
			break;
		}
		sum += number;
	}

	cout << "Sum: " << sum << endl;




}


