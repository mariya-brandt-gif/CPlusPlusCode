#include <iostream>
#include <iomanip>
using namespace std;

void InitArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------------" << endl << endl;
}
void FillRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}
int** AddNewRowEnd(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows + 1];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = arr[i];
	}
	temp[rows] = new int[cols];
	FillRow(temp[rows], cols);
	delete[]arr;
	rows++;
	return temp;
}
int** AddRowByPosition(int** arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows + 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	temp[pos] = new int[cols];
	FillRow(temp[pos], cols);
	for (int i = pos; i < rows; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[]arr;
	rows++;
	return temp;
}
int** AddColumnEnd(int** arr, int& rows, int& cols)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		temp[i][cols] = 5;
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	cols++;
	return temp;

}
int** DeleteRowEnd(int** arr, int& rows, int& cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr[rows - 1];
	delete[]arr;
	rows--;
	return temp;
}

//Exercice 1

int** AddRowBeginning(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows + 1];

	temp[0] = new int[cols];
	FillRow(temp[0], cols);
	for (int i = 0; i < rows; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[]arr;
	rows++;
	return temp;
}
//Exercice 2
int** DeleteRowBeginning(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows - 1];

	delete[] arr[0];

	for (int i = 1; i < rows; i++)
	{
		temp[i - 1] = arr[i];
	}
	delete[]arr;
	rows--;
	return temp;
}
//Exercice 3
int** DeleteRowByPosition(int** arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows - 1];
	delete[] arr[pos];

	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = pos+1; i < rows; i++)
	{
		temp[i - 1] = arr[i];
	}
	delete[]arr;
	rows--;
	return temp;
}
//Exercice 4
int** AddColumnBeginning(int** arr, int rows, int& cols) 
{
	int** temp = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		temp[i][0] = 5;
	}
	for (int i = 0; i < rows; i++)

	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j + 1] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	cols++;
	return temp;
}
//Exercice 5
int** AddColunmByPosition(int** arr, int rows, int& cols, int pos)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i=0; i<rows; i++)
	{
		for (int j = 0; j < pos; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		temp[i][pos] = 5;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = pos; j < cols; j++)
		{
			temp[i][j + 1] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	cols++;
	return temp;
}
//Exercice 6
int** DeleteColunmByPosition(int** arr, int rows, int& cols, int pos)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols - 1];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < pos; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = pos+1 ; j < cols; j++)
		{
			temp[i][j-1] = arr[i][j];
		}
		
	}
	
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	cols--;
	return temp;
}


int main()
{

	/*int size = 5;
	int* arr = new int[size];

	delete[]arr;*/
	int rows = 4;
	int cols = 5;
	//cout << "Enter count rows : "; cin >> rows;
	//cout << "Enter count cols : "; cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	{
		InitArray(arr, rows, cols);
		ShowArray(arr, rows, cols);

		arr = AddNewRowEnd(arr, rows, cols);
		ShowArray(arr, rows, cols);

		arr = AddNewRowEnd(arr, rows, cols);
		ShowArray(arr, rows, cols);

		arr = AddRowByPosition(arr, rows, cols, 2);
		ShowArray(arr, rows, cols);

		arr = AddColumnEnd(arr, rows, cols);
		ShowArray(arr, rows, cols);

		arr = AddColumnEnd(arr, rows, cols);
		ShowArray(arr, rows, cols);

		arr = DeleteRowEnd(arr, rows, cols);
		ShowArray(arr, rows, cols);
		arr = DeleteRowEnd(arr, rows, cols);
		ShowArray(arr, rows, cols);

		cout << "== Exercice 1 ==" << endl;
		arr = AddRowBeginning(arr, rows, cols);
		ShowArray(arr, rows, cols);

		cout << "== Exercice 2 ==" << endl;
		arr = DeleteRowBeginning(arr, rows, cols);
		ShowArray(arr, rows, cols);

		cout << "== Exercice 3 ==" << endl;
		arr = DeleteRowByPosition(arr, rows, cols,4);
		ShowArray(arr, rows, cols);

		cout << "== Exercice 4 ==" << endl;
		arr = AddColumnBeginning(arr, rows, cols);
		ShowArray(arr, rows, cols);

		cout << "== Exercice 5 ==" << endl;
		arr = AddColunmByPosition(arr, rows, cols, 3);
		ShowArray(arr, rows, cols);

		cout << "== Exercice 6 ==" << endl;
		arr = DeleteColunmByPosition(arr, rows, cols, 4);
		ShowArray(arr, rows, cols);

		
		for (int i = 0; i < rows; i++)
		{
			delete[] arr[i];
		}
		delete[]arr;
	}
	


}