
#include <iostream>
using namespace std;


void Foo(int a)
{
    if (a == 0)
    {
        return;//break;
    }
    cout << "Hello --> " << a << endl;
    a--;
    Foo(a);
}
int Summa(int arr[], int size) {
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        //0 + 1 = 1  1 + 8 = 9   9 + 4 = 12
        summa += arr[i];
    }
    return summa;
}
int SummaREcursion(int arr[], int size, int index = 9)
{
    if (index == size - 1)
    {
        return arr[index];//
    }
    // 1 + 8 + 4 + 5 + 6 + 3 + 7 + 9 +11  + 2
    //                                13
    // 56    56    47    43     38     32   29    22
    return arr[index] + SummaREcursion(arr, size, index + 1);
}

void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 40 - 20;
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
void QuickSort(int arr[], int B, int E)
{
    int i = B, j = E;
    int temp, p;
    p = arr[(B + E) / 2];
    do
    {
        //{ 1,2,4,5,  5 ,3,  7   ,9, 8  , 11,21 };
        while (arr[i] < p) i++;
        while (arr[j] > p)j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    if (B < j)QuickSort(arr, B, j);
    if (i < E)QuickSort(arr, i, E);
}
int BinarySearch(int arr[], int size, int key)
{
    int B = 0, E = size - 1;
    while (true)
    {
        int p = (B + E) / 2;//4
        if (key > arr[p])
        {
            B = p + 1;
        }
        else if (key < arr[p])
        {
            E = p - 1;
        }
        else if (key == arr[p])return p;
        if (B > E) return -1;
    }
}

//Practical work 1
int powerOfNumber(int a, int n)
{
     if (n == 0)
     return 1;

    return a * powerOfNumber(a, n - 1);
}
//Practical work 2
void showStars(int N)
{
    if (N == 0)
        return;

    cout << " * ";
    showStars(N - 1);
}
//Practical work 3
int sumRange(int a, int b)
{
    if (a > b)
        return 0;

    return a + sumRange(a + 1, b);
}
//Practical work 4
int findMinPos(int a[], int pos, int minPos)
{
    if (pos > 90)
        return minPos;
    int sum = 0;
    int minSum = 0;

    for (int i = pos; i < pos + 10; i++)
        sum = sum + a[i];

    for (int i = minPos; i < minPos + 10; i++)
        minSum = minSum + a[i];

    if (sum < minSum)
        minPos = pos;
    return findMinPos(a, pos + 1, minPos);
}
//Practical work 5
void turm(int n, int from, int to, int temp)
{
    if (n ==1)
    {
        cout << from << " -> " << to << endl;
        return;
    }
    turm(n - 1, from, temp, to);
    cout << from << " -> " << to << endl;
    turm(n - 1, temp, to, from);

}


int main()
{

    /*Foo(10);
    const int size = 10;
    int arr[size] = { 1,8,4,5,6,3,7,9,11,2 };
    int summa = Summa(arr, size);
    cout << "Summa = " << summa << endl;
    summa = SummaREcursion(arr, size, 0);
    cout << "Summa = " << summa << endl;

    InitArray(arr, size);
    ShowArray(arr, size);
    QuickSort(arr, 0, size - 1);
    ShowArray(arr, size);
    int search_num, index_find;
    cout << "Enter number to search : "; cin >> search_num;
    index_find = BinarySearch(arr, size, search_num);
    if (index_find != -1)
    {
        cout << "Number [" << search_num << "] find in index [" << index_find << "]" << endl;
    }
    else
    {
        cout << "Number " << search_num << " not found!" << endl;
    }*/

    {
        int a, n;
        cout << "Enter the number: ";
        cin >> a;

        cout << "Enter the power of number: ";
        cin >> n;
        
        cout << "Result: " << powerOfNumber(a, n) << endl;
        
    }
    {
        int N;
        cout << "Enter N: ";
        cin >> N;

        showStars(N);
        cout << endl;
    
    }
       
    {
        int a, b;

        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Sum of numer form a to b: "<< sumRange(a, b) << endl;
        cout << endl;
        
    }



    {
        int a[100];
        srand(time(0));

        for (int i = 0; i < 100; i++)
        {
            a[i] = rand() % 100;
            cout << a[i] << " ";
        }
        int minPos = findMinPos(a, 0, 0);

        cout << endl;
        cout << "Start of the sequence: " << minPos + 1<< endl;

        int sum = 0;

        cout << "Block with the smallest sum: ";

        for (int i = minPos; i < minPos + 10; i++)
        {
            cout << a[i] << " ";
            sum += a[i];
        }
        cout << endl;
        cout << "Sum: " << sum << endl;
 

    }


    {
        int n = 6;
        turm(n, 1, 3, 2);
        return 0;
        
    }


























}