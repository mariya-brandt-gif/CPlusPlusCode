#include <iostream>
using namespace std;

int main() {
	cout << "\n  Home Work";
	cout << "\n 1 ";
	cout << "\n  ";

	double a;
	double b;
	cout << "Enter side a : "; cin >> a;
	cout << "Enter side b : "; cin >> b;
	if (a == b) {
		cout << " Тhe rectangle is a square. " << endl;
	}
	else {
		cout << " Тhe rectangle is not a square. " << endl;
	}

	cout << "\n 2 ";
	cout << "\n  ";

	int age;
	cout << " Enter age: "; cin >> age;


	if (age < 0) {
		cout << "Invalid input" << endl;
	}

	else if (age < 1) {
		cout << "The child is still a baby and is allowed to stay at home with their parents." << endl;
	}
	else if (age >= 1 && age <= 5) {
		cout << "The child is allowed to go to kindergarten." << endl;
	}
	else if (age >= 6 && age <= 18) {
		cout << "The child has to go to school." << endl;
	}
	else if (age >= 19) {

	}
	else {
		cout << "The person is an adult and is allowed to study or work." << endl;
	}

	cout << "\n 3 ";
	cout << "\n  ";

	int a, b, c;
	cout << "Enter three numbers: " << endl;
	cin >> a >> b >> c;

	if ((a < 0 && b < 0) || (a < 0 && c < 0) || (c < 0 && b < 0)) {
		cout << " Exactly two number are negative." << endl;
	}
	else {
		cout << " Exactly two number are not negative." << endl;
	}

	cout << "\n 4 ";
	cout << "\n  ";


	double d;
	cout << "Enter a number: " << endl;
	cin >> d;

	if (d >= -1 && d <= 1) {
		cout << " The number belongs to the interval [-1, 1]." << endl;
	}
	else if (d >= 2 && d <= 5) {
		cout << " The number belongs to the interval [2, 5]." << endl;
	}
	else {
		cout << " The number does not belong to the intervals [-1, 1] and [2, 5]." << endl;
	}


	cout << "\n 5 ";
	cout << "\n  ";


	int a, b, c;
	cout << "Enter three numbers: " << endl;
	cin >> a >> b >> c;

	if (( a == b && a != c) || (a == c && a !=b ) || ( c == b && a != b)) {
		cout << " Exactly two number are equal." << endl;
	}
	else {
		cout << " Exactly two number are not equal." << endl;
	}

	cout << "\n 6 ";
	cout << "\n  ";


	int a, b, c;
	cout << "Enter three numbers: " << endl;
	cin >> a >> b >> c;

	if ( a % 2 != 0 && b % 2 != 0 && c %2 != 0) {
		cout << " All three numbers are odd." << endl;
	}
	else {
		cout << " Not all three numbers are odd." << endl;
	}

	