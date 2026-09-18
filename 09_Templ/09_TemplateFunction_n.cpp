// 09_Templ.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//



#include <iostream>
#include <iomanip> //setw()
using namespace std;



int max2(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
float max2(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}
double max2(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}


int max3(int a, int b, int c)
{
    int result = a;
    if (b > result)
        result = b;
    if (c > result)
        result = c;
    return result;

}
float max3(float a, float b, float c)
{
    float result = a;
    if (b > result)
        result = b;
    if (c > result)
        result = c;
    return result;

}
double max3(double a, double b, double c)
{
    double result = a;
    if (b > result)
        result = b;
    if (c > result)
        result = c;
    return result;

}


int min2(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
float min2(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}
double min2(double a, double b)
{
    if (a < b)
        return a;
    else
        return b;
}


int min3(int a, int b, int c)
{
    int result = a;
    if (b < result)
        result = b;
    if (c < result)
        result = c;
    return result;

}
float min3(float a, float b, float c)
{
    float result = a;
    if (b < result)
        result = b;
    if (c < result)
        result = c;
    return result;

}
double min3(double a, double b, double c)
{
    int result = a;
    if (b < result)
        result = b;
    if (c < result)
        result = c;
    return result;

}




template <typename T>
double average(T aa[], int nn)
{
    double sum = 0;
    for (int i = 0; i < nn; i++)
    {
        sum += aa[i];
    }
    return sum / nn;
}





template <typename T>
T maxArrayOneDimensional(T a1[], int n1)
{
    T max = a1[0];

    for (int i = 1; i < n1; i++)
    {
        if (a1[i] > max)
        {
            max = a1[i];
        }

    }
    return max;
}
template <typename T>
T maxArrayTwoDimensional(T a2[][6], int rows)
{
    T max = a2[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (a2[i][j] > max)
            {
                max = a2[i][j];
            }
        }

    }
    return max;
}







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





int main()

{

    cout << "Max int: " << max2(35, 24) << endl;
    cout << "Max float: " << max2(3.5, 8.9) << endl;
    cout << "Max double: " << max2(4.36, 6.74) << endl;
    cout << endl;
    cout << "Max of tree int: " << max3(35, 24, 36) << endl;
    cout << "Max of treefloat: " << max3(3.5, 8.9, 5.6) << endl;
    cout << "Max of tree double: " << max3(4.36, 6.74, 5.68) << endl;
    cout << endl;
    cout << "Min int: " << min2(35, 24) << endl;
    cout << "Min float: " << min2(3.5, 8.9) << endl;
    cout << "Min double: " << min2(4.36, 6.74) << endl;
    cout << endl;
    cout << "Min of tree int: " << min3(35, 24, 56) << endl;
    cout << "Min of tree float: " << min3(3.5, 8.9, 5.9) << endl;
    cout << "Min of tree double: " << min3(4.36, 6.74, 8.74) << endl;

    cout << endl;
    cout << endl;

    int aa[5] = { 25, 36, 98, 69, 87 };
    cout << "Average: " << average(aa, 5) << endl;
    float bb[5] = { 25.3, 36.5, 98.9, 6.5, 87.9 };
    cout << "Average: " << average(bb, 5) << endl;
    double cc[5] = { 5.35, 3.56, 9.98, 9.53, 8.88 };
    cout << "Average: " << average(cc, 5) << endl;

    cout << endl;
    cout << endl;

    int a1[5] = { 25, 36, 98, 69, 87 };
    cout << "Max one dimensonal array: " << maxArrayOneDimensional(a1, 5) << endl;
    float b1[5] = { 25.3, 36.5, 98.9, 6.5, 87.9 };
    cout << "Max one dimensonal array: " << maxArrayOneDimensional(b1, 5) << endl;
    double c1[5] = { 5.35, 3.56, 9.98, 9.53, 8.88 };
    cout << "Max one dimensonal array: " << maxArrayOneDimensional(c1, 5) << endl;
    cout << endl;
    int a2[3][6] = { {15,18,36,45,86,96}, {1,8,36,4,6,96}, {15,8,3,48,81,97} };
    cout << "Max two dimensonal array:" << maxArrayTwoDimensional(a2, 3) << endl;
    float b2[3][6] = { {15.2, 18.5, 36.9, 45.8, 86.6, 96.6}, {1.3, 8.6, 36.5, 4.9, 6.8, 96}, {15.5, 8.9, 3.6, 48.6, 81.6, 97.3} };
    cout << "Max two dimensonal array:" << maxArrayTwoDimensional(b2, 3) << endl;
    double c2[3][6] = { {15.36, 18.89, 36.36, 45.45, 86.98, 96.56}, {1.25, 8.36, 0.36, 34.5, 6.98, 96.36}, {15.5, 8.36, 33.36, 48.56, 81.89, 97.69} };
    cout << "Max two dimensonal array:" << maxArrayTwoDimensional(c2, 3) << endl;

    cout << endl;
    cout << endl;



    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);

