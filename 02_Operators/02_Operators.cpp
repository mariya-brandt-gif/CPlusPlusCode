

#include <iostream>
using namespace std;

int main()
{

	//  + - * / % < > <= >= == !=
	//Унарні —   5 (-5)   ++   -- 
	//Бінарні — + - * / % < > <= >= == !=
	//Тернарні -  ?:


	//int a = 5, b = 3;
	//cout << a + b << endl;
	//cout << a - b << endl;
	//cout << a * b << endl;
	//cout << a / b << endl;
	//cout << a % b << endl;
	//cout << 10 % 9 << endl;//1
	//cout << 3 % 9 << endl;//??  3/9 = 0.3333
	//cout << 4 % 12 << endl;//???
	//

	////Інкремент і декремент  ++ --
	//int c = 8;
	//cout << "c = " << c << endl;
	//c = c + 1;
	//cout << "c = " << c << endl;
	//c++;//c = c + 1  postfix form increment
	//cout << "c = " << c << endl;
	//++c;// prefix form increment
	//cout << "c = " << c << endl;

	//c = c - 1;
	//cout << "c = " << c << endl;
	//c--; //postfix form decrement
	//cout << "c = " << c << endl;
	//--c;//prefix form decrement
	//cout << "c = " << c << endl;

	//int d = 3;
	//cout << d++ << endl;//-----------------> 
	//cout << ++d << endl;// <------------------
	//cout << d << endl;

	//d = d + 12;
	//cout << d << endl;
	//d += 12;
	//cout << d << endl;
	//d -= 12;
	//cout << d << endl;
	//d *=12;
	//cout << d << endl;
	//d /= 12;
	//cout << d << endl;



	////Звужуюче перетворення
	////1. Неявне перетворення.
	//int A = 23.5;
	//cout << "A = " << A << endl;

	////Розширююче перетворення.
	//unsigned int salary = 3000000000;
	//cout << salary << endl;

	////2. Явне перетворення (int)num
	//double num = 2.45;//2.4500000000000001
	//cout << num << endl;
	//float num2 = (int)num;//2.45000001
	//cout << num2 << endl;

	////1. Оператори порівняння; < > <= >= 
	////2. Оператори рівності;   ==  !=
	////3. Логічні оператори об'єднання та негативна інверсія. &&(and), || (or)

	//cout << (5 > 2) << endl;
	//cout << (5 < 2) << endl;
	//cout << (5 == 2) << endl;
	//cout << (5 != 2) << endl;

	//if (ymova)
	//{
	//	dia1;
	//}
	//else
	//{
	//	dia2;
	//}
	//int a, b;
	//float res;
	//cout << "Enter number a : "; cin >> a;
	//cout << "Enter number b : "; cin >> b;
	//if (b == 0) 
	//{
	//	cout << "Can't divide by zero!" << endl;
	//}
	//else 
	//{
	//	res = (float)a / b;
	//	cout << "Res : " << a << " / " << b << " = " << res << endl;

	//}
	////тернарного оператора  ymova ? true : false;
	//(b == 0) ? cout << "Error" << endl :
	//	cout << "Res : " << a << " / " << b << " = " <<(float) a / b << endl;


	/*

		int day;
		cout << "Enter number day : "; cin >> day;
		if (day == 1)
		{
			cout << "Monday" << endl;
		}
		else if (day == 2)
		{
			cout << "Tuesday" << endl;
		}
		else if (day == 3)
		{
			cout << "Wednesday" << endl;
		}
		else {
			cout << "Error number day" << endl;
		}

		if (day >= 1 && day <= 5)//&& - and
		{
			cout << "Work day" << endl;

		}
		else if (day == 6  || day == 7)// || - or
		{
			cout << "Weekend" << endl;
		}

	//
	//	float a, b, res;
	//	char key;
	//	cout << "Enter number a : "; cin >> a;
	//	cout << "Enter number b : "; cin >> b;
	//	cout << "Choose the operation : " << endl;
	//	cout << " [+] - add numbers " << endl;
	//	cout << " [-] - sub numbers " << endl;
	//	cout << " [*] - multy numbers " << endl;
	//	cout << " [/] - div numbers " << endl;
	//	cin >> key;
	//	if (key == '+')
	//	{
	//		res = a + b;
	//		cout << "Res = " << res << endl;
	//	}
	//	else if (key == '-')
	//	{
	//		res = a - b;
	//		cout << "Res = " << res << endl;
	//	}
	//	else if (key == '*')
	//	{
	//		res = a * b;
	//		cout << "Res = " << res << endl;
	//	}
	//	else if (key == '/')
	//	{
	//		res = a / b;
	//		cout << "Res = " << res << endl;
	//	}
	//	else
	//	{
	//		cout << "Error choice" << endl;
	//	}


	//	cout << "Enter number a : "; cin >> a;
	//	cout << "Enter number b : "; cin >> b;
	//	cout << "Choose the operation : " << endl;
	//	cout << " [+] - add numbers " << endl;
	//	cout << " [-] - sub numbers " << endl;
	//	cout << " [*] - multy numbers " << endl;
	//	cout << " [/] - div numbers " << endl;
	//	cin >> key;//' + '
	//	switch (key)
	//	{
	//	default:
	//		cout << "Error choice" << endl;
	//		break;
	//	case '+':
	//		res = a + b;
	//		cout << "Res = " << res << endl;
	//		break;
	//	case '-':
	//		res = a - b;
	//		cout << "Res = " << res << endl;
	//		break;
	//	case '*':
	//		res = a * b;
	//		cout << "Res = " << res << endl;
	//		break;
	//	case '/':
	//		res = a / b;
	//		cout << "Res = " << res << endl;
	//		break;

	//	}


	//	int day;
	//	cout << "Enter number day : "; cin >> day;
	//	switch (day)
	//	{
	//	case 1:	case 2:	case 3:	case 4:	case 5:
	//		cout << "Work day " << endl;
	//		break;


	//	default:
	//		break;
	//	}






	// cout << "\n 1 ";
   // cout << "\n  ";

	//int country;

	//cin >> country;

	//if (country == 1)
	//{
	//    cout << "Berlin";
	//}
	//else if (country ==2)
	//{
	//    cout << "Warsaw";
	//}
	//else if (country == 3)
	//{
	//    cout << "Kyiv";
	//}
	//else if (country == 4)
	//{
	//    cout << "Roma";
	//}
	//else if (country == 5)
	//{
	//    cout << "Paris";
	//}
	//else {
	//    cout << "Invalid number";
	//}

	/*   cout << "\n  ";


	switch (country) {
	case 1:
		cout << "Berlin";
		break;
	case 2:
		cout << "Warsaw";
		break;
	case 3:
		cout << "Kyiv";
		break;
	case 4:
		cout << "Roma";
		break;
	case 5:
		cout << "Paris";
	default:
		cout << "Invalid number";
	}*/



	// cout << "\n 2 ";
	// cout << "\n  ";

	//int day;
	//cin >> day;

	//if (day == 6 || day == 7) {
	//    cout << "Weekend";
	//}
	//else {
	//    cout << "Not weekend";
	//}

	//int day;
	//cin >> day;

	//switch (day) {
	//case 6:
	//    cout << "Weekend";
	//    break;
	//case 7:
	//    cout << "Weekend";
	//    break;
	//default:
	//    cout << "Not weekend";
	//}



	//cout << "\n 3 ";
	//cout << "\n  ";

	//int course;
	//cout << "1 - North" << endl;
	//cout << "2 - South" << endl;
	//cout << "3 - West" << endl;
	//cout << "4 - East" << endl;

	//cout << "Enter the course: ";
	//cin >> course;

	//if (course == 1) {
	//	cout << "After the 'back' command, the ship moves south.";
	//}
	//else if (course == 2) {
	//	cout << "After the 'back' command, the ship moves north.";
	//}
	//else if (course == 3) {
	//	cout << "After the 'back' command, the ship moves east.";
	//}
	//else if (course == 4) {
	//	cout << "After the 'back' command, the ship moves west.";
	//}
	//else {
	//	cout << "Invalid number!";
	//}

	//cout << "\n  ";

	//switch (course) {
	//case 1:
	//	cout << "After the 'back' command, the ship moves south.";
	//	break;
	//case 2:
	//	cout << "After the 'back' command, the ship moves north.";
	//	break;
	//case 3:
	//	cout << "After the 'back' command, the ship moves east.";
	//	break;
	//case 4:
	//	cout << "After the 'back' command, the ship moves west.";
	//	break;
	//default:
	//	cout << "Invalid number!";
	//}


	cout << "\n 4 ";
	cout << "\n  ";
	int animal;
	cout << "1 - Zebra" << endl;
	cout << "2 - Dog " << endl;
	cout << "3 - Lion" << endl;
	cout << "4 - Elephant" << endl;
	cout << "5 - Wolf" << endl;
	cout << "6 - Tiger" << endl;
	cout << "7 - Giraffe" << endl;

	cout << " Select an animal: ";
	cin >> animal;

	if (animal == 1 || animal == 4 || animal == 7) {
		cout << "herbivore";
	}
	else if (animal == 2 || animal == 5 || animal == 6) {
		cout << "predator";
	}
	else {
		cout << "Invalid number!";
	}

	//cout << "\n  ";

	switch (animal) {
		case 1:
			cout << "herbivore";
			break;
		case 2:
			cout << "predator";
			break;
		case 3:
			cout << "predator";
			break;
		case 4:
			cout << "herbivore";
			break;
		case 5:
			cout << "predator";
			break;
		case 6:
			cout << "predator";
			break;
		case 7:
			cout << "herbivore";
			break;
		default:
			cout << "Invalid number!";
	}









}
