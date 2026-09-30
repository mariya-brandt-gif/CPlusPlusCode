#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Exercice 4

int getLength(char text[])
{
	int length = 0;
	while (text[length] != '\0')
	{
		length++;
	}
	return length;
}

int main()
{
	//{
	//	cout << "Hello" << endl;
	//	cout << "Hi" << endl;
	//	//C-Style rows
	//	//string
	//	char word[] = { 'H','e','l','l','o','!','\0' };
	//	for (int i = 0; i < 6; i++)
	//	{
	//		cout << word[i];
	//	}
	//	cout << endl;

	//	char my_string[] = "string";
	//	cout << "my string : " << my_string << endl;
	//	for (int i = 0; i < sizeof(my_string); i++)
	//	{
	//		cout << my_string[i] << " code -->" <<
	//			static_cast<int>(my_string[i]) << endl;
	//	}

	//	//my_string = "cat"; error
	//	my_string[1] = 'p';

	//	cout << my_string << endl;


	//	char name[15] = "Max";// Max\0
	//	cout << "My name is : " << name << endl;


	//	//char your_name[255];
	//	//cout << "Enter your name :";
	//	////cin >> your_name; read to the space
	//	//cin.getline(your_name, 255);
	//	//cout << "Your name : " << your_name << endl;
	//	//cout << "Sizeof " << sizeof( your_name )<< endl;
	//	//cout << "Strlen " << strlen( your_name )<< endl;

	//	char text[] = "Print this!";
	//	char dest[50];
	//	strcpy_s(dest, text);
	//	cout << dest << endl;

	//	char arr[255] = "Returns the head of a list.";
	//	cout << arr << endl;
	//	//cout << "Enter text : "; cin >> arr;
	//	//cout << "Enter text : "; cin.getline(arr,255);
	//	cout << arr << endl;
	//	_strupr_s(arr);
	//	cout << arr << endl;
	//	_strlwr_s(arr);
	//	cout << arr << endl;

	//	_strrev(arr);
	//	cout << arr << endl;
	//	_strrev(arr);
	//	cout << arr << endl;
	//	cout << "Copy arrays : " << endl;
	//	char arr2[255];
	//	strcpy_s(arr2, arr);
	//	cout << arr2 << endl;
	//	arr2[5] = '\0';
	//	cout << arr2 << endl;

	//	cout << "Add to array " << endl;
	//	strcat_s(arr, "......");
	//	cout << arr << endl;
	//	//cout << "Enter text : "; cin >> arr2;
	//	strcat_s(arr, arr2);
	//	cout << arr << endl;

	//	char someText[] = "White123";
	//	someText[2] == 'A';

	//	// letter or number
	//	cout << someText[0] << " -----> " << isalnum(someText[0]) << endl;
	//	cout << someText[5] << " -----> " << (bool)isalnum(someText[5]) << endl;

	//	// letter 
	//	cout << someText[0] << " -----> " << (bool)isalpha(someText[0]) << endl;
	//	cout << someText[5] << " -----> " << (bool)isalpha(someText[5]) << endl;


	//	// symbol is number 
	//	cout << someText[0] << " -----> " << (bool)isdigit(someText[0]) << endl;
	//	cout << someText[5] << " -----> " << (bool)isdigit(someText[5]) << endl;


	//	//space
	//	cout << someText[0] << " -----> " << (bool)isspace(someText[0]) << endl;
	//	cout << someText[5] << " -----> " << (bool)isspace(someText[5]) << endl;

	//	//big letter
	//	cout << someText[0] << " -----> " << (bool)isupper(someText[0]) << endl;
	//	cout << someText[5] << " -----> " << (bool)isupper(someText[5]) << endl;

	//	//small letter
	//	cout << someText[0] << " -----> " << (bool)islower(someText[0]) << endl;
	//	cout << someText[5] << " -----> " << (bool)islower(someText[5]) << endl;


	//	cout << someText[0] << " -----> " << (char)tolower(someText[0]) << endl;
	//	cout << someText[1] << " -----> " << (char)toupper(someText[1]) << endl;


	//	float x = -5, y = 2.7, z = 3.14;
	//	cout << setw(5) << x << endl;
	//	cout << setw(5) << y << endl;
	//	cout << setw(5) << z << endl;

	//	SetColor(6);
	//	cout << "Hello" << endl; SetColor(7);

	//	for (int i = 0; i < 16; i++)
	//	{
	//		SetColor(i); cout << "Hello" << endl;
	//	}
	//	SetConsoleCP(1201);
	//	SetConsoleOutputCP(1201);
	//	srand(time(0));
	//	Sleep(3000);
	//	system("cls");//clear screen 
	//	SetPos(5, 10);
	//	//SetColor(3); cout << "Hello" << endl;
	//	/*for (int i = 0; i < 200; i++)
	//	{
	//		Sleep(250);
	//		SetPos(rand() % 30, rand() % 30);
	//		SetColor(rand() % 16);
	//		cout << "*";
	//	}*/
	//	for (int i = 0; i < 255; i++)
	//	{
	//		cout << i << " symbol : " << (char)i << endl;
	//	}

	//}

	////Exercice 1
	//{
	//	char text[255];
	//	cout << "Enter text: ";
	//	cin.getline(text, 255);
	//	int countA = 0;
	//	int countO = 0;
	//	for (int i = 0; text[i] != '\0'; i++)
	//	{
	//		char c = tolower(text[i]);
	//		if (c =='a')
	//		{
	//			countA++;
	//		}
	//		if (c =='o')
	//		{
	//			countO++;
	//		}
	//	}
	//	cout << "Exercice 1 " << endl;
	//	cout << "a/A: " << countA << endl;
	//	cout << "o/O: " << countO << endl;

	//	if (countA > countO)
	//	{
	//		cout << "There are more a's." << endl;
	//	}
	//	else if (countA < countO) 
	//	{
	//		cout << "There are more o's." << endl;
	//	}
	//	else
	//	{
	//		cout << "The number is equal. " << endl;
	//	}

	//}

	////Exercice 2
	//{
	//	char text[255];
	//	cout << "Enter text: ";
	//	cin.getline(text, 255);

	//	int letters = 0;
	//	int digits = 0;
	//	int spaces = 0;

	//	for (int i = 0; text[i] != '\0'; i++)
	//	{
	//		if (isalpha(text[i]))
	//		{
	//			letters++;
	//		}
	//		else if (isdigit(text[i]))
	//		{
	//			digits++;
	//		}
	//		else if (isspace(text[i]))
	//		{
	//			spaces++;
	//		}
	//	}
	//	cout << "Exercice 2 " << endl;
	//	cout << "Letters: " << letters << endl;
	//	cout << "Digits: " << digits << endl;
	//	cout << "Spaces: " << spaces << endl;


	//}
	////Exercice 3
	//{
	//	char text[255];
	//	cout << "Enter text: ";
	//	cin.getline(text, 255);

	//	for (int i = 0; text[i] != '\0'; i++)
	//	{
	//		if (isupper(text[i]))
	//		{
	//			text[i] = tolower(text[i]);
	//		}
	//		else if (islower(text[i]))
	//		{
	//			text[i] = toupper(text[i]);
	//		}
	//	}
	//	cout << "Result exercice 3: " << text << endl;

	//}
	////Exercice 4
	//{
	//	char text[255];
	//	cout << "Enter text: ";
	//	cin.getline(text, 255);
	//	cout << "Length exercice 4: " << getLength(text) << endl;

	//}
	////Exercice 5
	//{
	//	char text[255];
	//	char result[255];

	//	char symbol;

	//	cout << "Enter text: ";
	//	cin.getline(text, 255);

	//	cout << "Enter symbol to delete: ";
	//	cin >> symbol;

	//	int j = 0;

	//	for (int i = 0; text[i] != '\0'; i++)
	//	{
	//		if (text[i] != symbol)
	//		{
	//			result[j] = text[i];
	//			j++;
	//		}
	//	}
	//	result[j] = '\0';
	//	cout << "Result: " << result << endl;
	//	cout << endl;
	//}

	//Exercice 6
	{
		char text[255];

		cout << "Enter text: ";
		cin.getline(text, 255);

		int whitespaces = 0;
		int vowels = 0;
		int consonants = 0;
		int punctuation = 0;

		for (int i = 0;text[i] != '\0'; i++)
		{
			char c6 = text[i];
			if (isspace(c6))
			{
				whitespaces++;
			}
			if (isalpha(c6))
			{
				char lower = tolower(c6);

				if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
				{
					vowels++;
				}
				else
				{
					consonants++;

				}
			}
		
			if (ispunct(c6))
			{
				punctuation++;
			}
		}
		cout << "Result exercice 6: " << endl;
		cout << "Whitespaces: " << whitespaces << endl;
		cout << "Vowels: " << vowels << endl;
		cout << "Consonants: " << consonants << endl;
		cout << "Punctuation: " << punctuation << endl;


	}

}
