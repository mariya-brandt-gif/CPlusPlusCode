// 02_DataType.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
    
    float discount = 0.05;
    float costProduct = 34.99;
    int count = 5;

    cout << "enter cost product: ";
    cin >> costProduct;
    cout << "Enter count: ";
    cin >> count;

    float price = count * costProduct - count * costProduct * discount;
    cout << "You need to pay : " << price << "grn" << endl;

    int num;
    cout << "Enter number : ";
    cin >> num;
    cout << "num =" << num << endl;

    // 2 

    double inch;
    cin >> inch;

    int cm = inch * 2.54;
    cout << "TV diagonal: " << cm << "cm";




}
