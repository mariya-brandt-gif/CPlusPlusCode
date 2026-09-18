#include <iostream>
using namespace std;

//void Hello();//prototype functions
//void sayHello()
//{
//    cout << "Hello world" << endl;
//}
//
//void Star(int count) //1500
//{
//    for (int i = 0; i < count; i++)
//    {
//        cout << "* ";
//    }
//    cout << endl;
//}
//void AnyLine(char symbol, int count)
//{
//    for (int i = 0; i < count; i++)
//    {
//        cout << symbol << " ";
//    }
//    cout << endl;
//}
//
//int MyPow(int number, int step)// 2**5 2*2*2*2*2
//{
//    int pow = 1;
//    for (int i = 0; i < step; i++)
//    {
//        pow *= number;
//    }
//    //cout << "Pow number " << number << " is " << pow << endl;
//    return pow;
//}
//int Max(int a, int b) {
//    /* if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }*/
//    return (a > b) ? a : b;
//}
//int Min(int a, int b) {
//    return (a < b) ? a : b;
//}
//void Second()
//{
//    cout << "Second function working...." << endl;
//}
//void First()
//{
//
//    cout << "First function start" << endl;
//    Second();
//    cout << "First function end" << endl;
//
//}
//void Change(int a, int b)
//{
//    cout << "a = " << a << " . b = " << b << endl;
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "a = " << a << " . b = " << b << endl;
//}
//void InitArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        //900%90= 0.....89   + 10
//        //rand() % 90  --> 
//        arr[i] = rand() % 90 + 10;//
//    }
//}
//void ShowArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//int SummaArray(int arr[], int size)
//{
//    int summa = 0;
//    for (int i = 0; i < size; i++)
//    {
//        summa += arr[i];
//    }
//    return summa;
//}
//void InitMatrix(int arr[][7], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            arr[i][j] = rand() % 90 + 10;
//        }
//    }
//}
//void ShowMatrix(int arr[][7], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int A = 100;//gloabal variable 
//
//void setA()
//{
//    A = 99;
//}
//void Show()
//{
//    cout << A << endl;
//}
//void setSecond()
//{
//    int A = 77;
//    cout << A << endl;
//}
//int main()
//{
//    Show();
//    setA();
//    Show();
//    setSecond();
//    Show();
//    //int A = 10;//local variable
//    cout << A << endl;
//    cout << ::A << endl;
//    ::A = 33;
//    cout << ::A << endl;
//
//
//    //int a = 5;
//    //if (a == 5)
//    //{
//    //    int b = 7;
//    //    cout << b << endl;
//    //}
//    //cout << b << endl;
//
//
//
//
//
//
//    const int rows = 5;
//    const int cols = 7;
//    int array[rows][cols];
//    InitMatrix(array, rows, cols);
//    ShowMatrix(array, rows, cols);
//
//
//
//
//
//    const int size = 10;
//    int arr[size];
//    InitArray(arr, size);
//    ShowArray(arr, size);
//    int summa = SummaArray(arr, size);
//    cout << "Summa elements = " << summa << endl;
//
//
//    int a = 4, b = 7;
//    cout << "a = " << a << " . b = " << b << endl;
//    Change(a, b);
//    cout << "a = " << a << " . b = " << b << endl;
//    First();
//
//
//
//
//
//    cout << "Min element = " << Min(5, 8) << endl;
//    cout << "Min element = " << Min(15, 4) << endl;
//    cout << "Max element = " << Max(5, 8) << endl;
//    cout << "Max element = " << Max(15, 4) << endl;
//    cout << "Res = " << MyPow(2, 2) << endl;
//    int res = MyPow(2, 3);
//    cout << "Res = " << res << endl;
//    MyPow(2, 5);
//    AnyLine('$', 65);
//    AnyLine('*', 15);
//    AnyLine('@', 74);
//    Star(10);
//    Star(15);
//    Star(25);
//    //Функція оголошується до функції main.
//    sayHello();
//    sayHello();
//    sayHello();
//    sayHello();
//    //Функція оголошується за допомогою прототипу
//    Hello();
//}



//
//
//void rectangle(int n, int k) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < k; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	int n;
//	int k;
//
//	cout << "enter n:";
//	cin >> n;
//	
//	cout << "enter k:";
//	cin >> k;
//
//	rectangle(n, k);
//
//	return 0;
//}


//
//long long factorial(int o) {
//	long long result = 1;
//
//	for (int i = 1; i <= o; i++) {
//		result *= i;
//	}
//	return result;
//}
//int main() {
//	int o;
//
//	cout << "enter number";
//	cin >> o;
//
//	cout << o << "!=" << factorial(o) << endl;
//
//	return 0;
//}

//
//bool isPrime(int p) {
//	if (p < 2)
//		return false;
//	for (int i = 2; i < p; i++) {
//		if (p % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	int p;
//
//	cout << "enter the number: ";
//	cin >> p;
//
//	if (isPrime(p))
//		cout << "The number is prime." << endl;
//	else
//		cout << "The number is not prime." << endl;
//}


//
//void minMax(int a[], int n) 
//{
//	int min = a[0];
//	int max = a[0];
//	int minIndex = 0;
//	int maxIndex = 0;
//
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] < min) {
//			min = a[i];
//			minIndex = i;
//		}
//		if (a[i] > max)
//		{
//			max = a[i];
//			maxIndex = i;
//		}
//	}
//	cout << "Minimum: " << min << ", number: " << minIndex << endl;
//	cout << "Maximum: " << max << ", number: " << maxIndex << endl;
//}
//int main() {
//	int a[10];
//	
//	srand(time(0));
//
//	for (int i = 0; i < 10; i++) {
//		a[i] = rand() % 100;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout<< endl;
//	minMax(a, 10);
//
//
//}
//  




//
//int cube(int c) {
//	return c * c * c;
//}
//int main() {
//	int c;
//
//	cout << "enter the number: ";
//	cin >> c;
//
//	cout << "cube of the number: " << cube(c) << endl;
//
//}
//
//
//bool isPos(int y) {
//	return y > 0;
//}
//int main() {
//	int y;
//
//	cout << "enter the number: ";
//	cin >> y;
//
//	if (isPos(y))
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//}

//
//bool isLeapYear(int year) 
//{
//	if (year % 400 == 0)
//		return true;
//	if (year % 100 == 0)
//		return false;
//	if (year % 4 == 0)
//		return true;
//	return false;
//}
//int daysInMonth(int month, int year)
//{
//	if (month == 2)
//	{
//		if (isLeapYear(year))
//			return 29;
//		else
//			return 28;	
//	}
//	if (month == 4 || month == 6 || month == 9 || month == 11)
//		return 30;
//	return 31;
//}
//long long daysFromStart(int day, int month, int year) 
//{
//	long long days = 0;
//	for (int y = 1; y < year; y++)
//	{
//		if (isLeapYear(y))
//			days += 366;
//		else 
//			days +=365;
//	}
//	for (int m = 1; m < month; m++)
//	{
//		days += daysInMonth(m, year);
//	}
//	days += day;
//	return days;
//}
//long long dateDifference(int day1, int month1, int year1, int day2, int month2, int year2)
//{
//	long long date1 = daysFromStart(day1, month1, year1);
//	long long date2 = daysFromStart(day2, month2, year2);
//	long long difference = date1 - date2;
//
//	if (difference < 0)
//		difference = -difference;
//	return difference;
//}
//int main()
//{
//	int day1, month1, year1;
//	int day2, month2, year2;
//
//	cout << "Enter first date (day month year): "<< endl;
//	cin >> day1 >> month1 >> year1;
//
//	cout << "Enter second date (day month year): "<< endl;
//	cin >> day2 >> month2 >> year2;
//
//	cout << "Difference in days: " << dateDifference(day1, month1, year1, day2, month2, year2) << endl;
//}






//double average(int a[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i];
//	}
//	return (double)sum / n;
//
//}
//int main() {
//	int a[10];
//
//	srand(time(0));
//
//	for (int i = 0; i < 10; i++) { a[i] = rand() % 100; };
//	cout << "Array: ";
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	cout << "Average: " << average(a, 10) << endl;
//}



void countElements(int a[], int n)
{
	int positive = 0;
	int negative = 0;
	int zero = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			positive++;
		if (a[i] < 0)
			negative++;
		else
			zero++;
	}
	cout << "Positive: " << positive << endl;
	cout << "Negative: " << negative << endl;
	cout << "Zero: " << zero << endl;
}
int main() {
	int a[10];

	srand(time(0));

	for (int i = 0; i < 10; i++) { a[i] = rand() % 201 - 100; };
	cout << "Array: ";

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	countElements(a, 10);
}



