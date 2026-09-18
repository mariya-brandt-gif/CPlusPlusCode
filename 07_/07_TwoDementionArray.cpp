

#include <iostream>
#include <iomanip> //setw()
using namespace std;

int main()
{
    //srand(time(NULL));
    //int a;
    //a = rand(); //0......32767
    //cout << a << endl;

    //for (int i = 0; i < 25; i++)
    //{
    //    a = rand() % 10; //0.....9
    //    cout << a << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < 25; i++)
    //{
    //    a = rand() % 100; //0.....99
    //    cout << a << " ";
    //}
    //cout << endl;

    //for (int i = 0; i < 25; i++)
    //{
    //    a = rand() % 50; //0....49
    //    cout << a << " ";
    //}
    //cout << endl;

    ////0....x-1 ---->rand()%x
    //// x.... y -----> (y-x)+x


    ////----> 9....12
    //for (int i = 0; i < 25; i++)
    //{
    //    a = rand() % 4 + 9;
    //    cout << a << " ";
    //}
    //cout << endl;

    //const int size = 10;
    //int arr[size];

    //for (int i = 0; i < size; i++)
    //{
    //    arr[i] = rand() % 100;
    //    cout << arr[i] << " ";

    //}
    //cout << endl;

    //const int rows = 5;
    //const int cols = 6;
    //int array[rows][cols]{};
    //int max = array[0][0];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        //array[i][j] = rand() % 90+10;
    //        array[i][j] = rand() % 100;
    //        //cout << array[i][j] << "\t ";
    //        cout << setw(4)<< array[i][j] << " ";// oder left setw()
    //        if (array[i][j] > max)
    //        {
    //            max = array[i][j];
    //        }

    //    }
    //    cout << endl;
    //}
    //cout << "Max element in the matrix "<< max << endl;
    //cout << endl;
    //cout << "----Max element in the every line ----- " << max << endl;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        max = array[i][0];
    //        cout << setw(4) << array[i][j] << " ";
    //        if (array[i][j] > max)
    //        {
    //            max = array[i][j];
    //        }

    //    }
    //    cout << "Max element in row: " << i << " is --> " << max << endl;
    //    cout << endl;
    //}


    ////int array1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    ////int array1[3][3] = { {1},{4,5},{7,8,9} };
    //int array1[3][3] = { 1,4,5,7,8,9 };

    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << array1[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    // 
    {
        cout << "Exercise 1" << endl;
        int a[4][3];
        int count = 0;
        srand(time(0));

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = rand() % 11 - 5;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << setw(2) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a[i][j] != 0)
                {
                    count++;
                }
            }

        }
        cout << "Number of non zero elements: " << count << endl;
    }


    {
        cout << endl;
        cout << "Exercise 2" << endl;
        int a[3][3];
        int count = 0;
        srand(time(0));

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = rand() % 11 - 5;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << setw(2) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a[i][j] == 0)
                {
                    count++;
                }
            }

        }
        cout << "Number of zero elements: " << count << endl;
    }

    {
        cout << endl;
        cout << "Exercise 3" << endl;

        int a[7][3];
        int count = 0;
        srand(time(0));

        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = -20 + rand() % 40;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a[i][j] > -12 && a[i][j] < 12)
                {
                    count++;
                }
            }

        }
        cout << "Number of elements: " << count << endl;
    }
    {
        cout << endl;
        cout << "Exercise 4" << endl;
        int a[4][5];
        int count = 0;
        srand(time(0));

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                a[i][j] = -20 + rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (a[i][j] > 0)
                {
                    count++;
                }
            }

        }
        cout << "Number of positive elements: " << count << endl;

    }

    {
        cout << endl;
        cout << "Exercise 5" << endl;
        double a[5][4];
        double product = 1;
        srand(time(0));

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                a[i][j] = -20 + rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (a[i][j] > 0)
                {
                    product *= a[i][j];
                }
            }

        }
        cout << "Product of positive elements: " << product << endl;
    }

    {
        cout << endl;
        cout << "Exercise 6" << endl;
        double a[5][4];
        double product = 1;


        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                a[i][j] = -20 + rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (a[i][j] < 0)
                {
                    product *= a[i][j];
                }
            }

        }
        cout << "Product of positive elements: " << product << endl;
    }

    {

        cout << endl;
        cout << "Exercise 7" << endl;
        int a[4][4];
        int count = 0;
        srand(time(0));

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                a[i][j] = rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (a[i][j] % 6 == 1)
                {
                    count++;
                }
            }

        }
        cout << "Number of elements: " << count << endl;
    }

    {
        cout << endl;
        cout << "Exercise 8" << endl;
        int a[5][6];
        int min;
        srand(time(0));

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                a[i][j] = -20 + rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        min = a[0][0];

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (a[i][j] < min)
                {
                    min = a[i][j];
                }
            }

        }
        cout << "Minimum element: " << min << endl;
    }

    {

        cout << endl;
        cout << "Exercise 9" << endl;
        int a[5][6];
        int max;
        srand(time(0));

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                a[i][j] = -20 + rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        max = a[0][0];

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
            }

        }
        cout << "Maximum element: " << max << endl;
    }

    {

        cout << endl;
        cout << "Exercise 10" << endl;
        double a[5][4];
        double sum = 0;
        srand(time(0));

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                a[i][j] = -20 + rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << setw(3) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (a[i][j] < 0)
                {
                    sum += a[i][j];
                }
            }

        }
        cout << "Sume of negative elements: " << sum << endl;

    }


    {
        cout << "Home work Exercise 1" << endl;
        int a[4][3];
        int count = 0;
        srand(time(0));

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = rand() % 11 - 5;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << setw(2) << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a[i][j] == 0)
                {
                    count++;
                }
            }

        }
        cout << "Number of zero elements: " << count << endl;

    }

    {
        cout << "Home work Exercise 2a" << endl;
        int n;
        cout << "Enter n: ";
        cin >> n;

        int a[100][100];
        srand(time(0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = -20 + rand() % 41;
            }
        }
        cout << "Array: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << setw(4) << a[i][j] << " ";
            }
            cout << endl;
        }
        int max = a[0][0];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j >= i)
                {
                    if (a[i][j] > max)
                    {
                        max = a[i][j];
                    }
                }
            }

        }
        cout << "Number of zero elements: " << max << endl;

    }






}
