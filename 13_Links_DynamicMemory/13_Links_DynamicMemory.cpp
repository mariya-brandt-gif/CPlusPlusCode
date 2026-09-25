

#include <iostream>
#include <conio.h>
using namespace std;

void Change(int& a)
{
    a++;
}
int& FindMax(int& a, int& b)
{
    if (a > b) return a;
    else return b;
    
    int c = 5;
    return c;
}

void Test1()
{
    const int size = 10;
    int arr[size];
}
void Test2()
{
    int size = 5;
    int*arr= new int[size];
    delete[]arr;
}
int * CreateArray(int size)
{
    
    int*arr= new int[size];
    return arr;
}
void InitArray(int arr[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    } 
  
}
void ShowArray(int* arr, int size)
{
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    } 
  
}
int* AddNewElement(int* arr, int *size, int number)
{
    int* temp = new int[*size + 1];
    for (int i = 0; i <*size; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size] = number;
    delete[]arr;
    arr = temp;
    (*size)++;
    return arr;

}

//Practice 2
int* createArray2(int size)
{
    return new int[size];
}
void InitArray2(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray2(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void addElement(int*& arr, int& size, int element)
{
    int* newArr = new int[size + 1];
    for (int i = 0; i <size; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[size] = element;
    delete[]arr;
    arr = newArr;
    size++;
}
void removeLastElement(int*& arr, int& size)
{
    if (size <= 0)
        return;
    int* newArr = new int[size - 1];
    for (int i = 0; i < size-1; i++)
    {
        newArr[i] = arr[i];
    }
    delete[]arr;
    arr = newArr;
    size--;
}
void removeElementByIndex(int*& arr, int& size, int index)
{
    if (index <0 || index>= size)
    {
        cout << "Invalid index." << endl;
        return;
    }
    int* newArr = new int[size - 1];
    for (int i = 0, j = 0; i < size; i++)
    {
        if (i != index)
        {
            newArr[j] = arr[i];
            j++;
        }
    }
    delete[]arr;
    arr = newArr;
    size--;
}
void insertElement(int*& arr, int& size, int index, int element)
{
    if (index < 0 || index > size)
    {
        cout << "Invalid index." << endl;
        return;
    }
    int* newArr = new int[size + 1];
    for (int i= 0, j = 0; i < size + 1; i++)
    {
        if (i==index)
        {
            newArr[i] = element;
        }
        else
        {
            newArr[i] = arr[j];
            j++;
        }
    }
    delete[]arr;
    arr = newArr;
    size++;

}


int main()
{
    //{
    //    int size = 5;
    //    cout << " Enter size: "; cin >> size;
    //    int* arr = CreateArray(size);
    //    InitArray(arr, size);
    //    ShowArray(arr, size);

    //    int number;
    //    char choice = 'y';
    //    while (true)
    //    {
    //        cout << "Do you want to add number? y/n";
    //        choice = _getch();
    //        if (choice == 'n')break;
    //        cout << "Enter number: "; cin >> number;
    //        arr = AddNewElement(arr, &size, number);
    //        //system("cls")
    //        ShowArray(arr, size);


    //    }




    //    delete[]arr;
    //}

   /* int a = 5; 
    int* pa = new int(15); 
    int* pb = new int; 
    int* pc = nullptr; 

    *pc = 12;
    pc = new int(3);

    cout << "pa =" << pa << endl;
    cout << "pb =" << pb << endl;
    cout << "pc =" << pc << endl;

    cout << "*pa =" << *pa << endl;
    cout << "*pb =" <<*pb << endl;
    cout << "*pc =" << *pc << endl;

    delete pc;
    pc = new int(555);

    delete pa;
    delete pb;
    delete pc;*/

    //int a = 5; // variale
    //int* pa = &a; // pointer

    //int& la = a; //link
    //cout << "a =" << a << endl;
    //cout << "pa =" << pa << endl;
    //cout << "*pa =" << *pa << endl;
    //cout << "la =" << la << endl;

    //int b = 10;
    ////int* pb; //garbage (сміття)
    //int* pb = nullptr; //garbage (сміття)
    //int& lt=b;
    //pb = &b;
    //cout << "b =" << b << endl;
    //cout << "pb =" << pb << endl;
    //cout << "*pb =" << *pb << endl;

    //cout << "a =" << a << endl;
    //Change(a);
    //cout << "a" << a << endl;
    //cout << "b" << b << endl;
    //FindMax(a, b) = 111;
    //cout << "a" << a << endl;
    //cout << "b" << b<< endl;

    //{

    //    //Practice 1
    //    int* a = new int(5);
    //    double* b = new double(2.8);
    //    float* c = new float(4.0f);

    //    double product = (*a) * (*b) * (*c);
    //    cout << "динамічні змінні: " << endl;
    //    cout << "a= "<<*a << endl;
    //    cout << "b= "<<*b << endl;
    //    cout << "c= "<<*c << endl;

    //    cout << "Product = " << product << endl;

    //    delete a;
    //    delete b;
    //    delete c;
    //}

    {
        srand(time(0));
        int size = 7;
        int* arr = createArray2(size);
        InitArray2(arr, size);
        cout << "First array: ";
        ShowArray2(arr, size);

        addElement(arr, size, 200);
        cout << "Array after adding 200: ";
        ShowArray2(arr, size);

        removeLastElement(arr, size);
        cout << "Array after remove last element: ";
        ShowArray2(arr, size);

        removeElementByIndex(arr, size, 3);
        cout << "Array after remove element by index: ";
        ShowArray2(arr, size);

        insertElement(arr, size, 2, 555);
        cout << "Array after inserting 555 at index 2: ";
        ShowArray2(arr, size);

        delete[] arr;

    }


}
