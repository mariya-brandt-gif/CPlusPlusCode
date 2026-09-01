// 02_DataType.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
    
    //float discount = 0.05;
    //float costProduct = 34.99;
    //int count = 5;

    //cout << "enter cost product: ";
    //cin >> costProduct;
    //cout << "Enter count: ";
    //cin >> count;

    //float price = count * costProduct - count * costProduct * discount;
    //cout << "You need to pay : " << price << "grn" << endl;

    //int num;
    //cout << "Enter number : ";
    //cin >> num;
    //cout << "num =" << num << endl;


    //cout << "\n 3.";
    //cout << "\n";
    //double inch;
    //double cm;
    //cout << "Enter the size of your TV in inches: "; //"Gib die Größe deines Fernsehers in Zoll ein"
    //cin >> inch;
    //cm = inch * 2.54;
    //cout << "TV screen diagonal: " << cm << " cm"; //"Diagonale des Fernsehers (in Zoll):"
    //cout << "\n";



    //cout << "\n 4.";
    //cout << "\n";
    //double feedConsumptionPerDay_gramm = 20;   
    //int day = 30;
    //double feedConsumptionPerDay_kilogramm = feedConsumptionPerDay_gramm / 1000;

    //cout << "Feed consumption per month (kg) " << feedConsumptionPerDay_kilogramm * day;
    //cout << "\n";


   //// cout << "\n  Homework";
   //// cout << "\n 1.";
   //// cout << "\n";
   // int a;
   // int ab;
   // int bb;
   // cout << "Enter the number 1. \n";
   // cin >> a;
   // cout << "Enter the number 2. \n";
   // cin >> ab;
   // cout << "Enter the number 3. \n";  
   // cin >> bb;  
   // int summe = a + ab + bb;
   // cout << a << " + " << ab << " + " << bb << " = " << summe;


   // /*cout << "\n  ";
   // cout << "\n 2.";
   // cout << "\n"*;
   // double c;
   // double cb;
   // cout << "Enter the number 1. \n";
   // cin >> c;
   // cout << "Enter the number 2. \n";
   // cin >> cb;
   // double arithmeticMeanOfTwoNumbers = (c + cb)/2;
   // cout << "The arithmetic mean of numbers " << c << " and " << cb << " is " << arithmeticMeanOfTwoNumbers;

   // /*cout << "\n  ";
   // cout << "\n 3.";
   // cout << "\n";*/

    //double km;
    //cout << "Enter the kilometers. \n";
    //cin >> km;
    //double meter = km * 1000;
    //cout << km << " kilomenters equals " << meter << " meter";

    cout << "\n  ";
    cout << "\n 4.";
    cout << "\n";

    const double priceA = 2.99;
    const double priceB = 3.60;
    const double priceC = 4.56;
    const double priceD = 5.58;

    int quantityA;
    cout << "Enter the quantity of item 1:\n";
    cin >> quantityA;
    int quantityB;
    cout << "Enter the quantity of item 2:\n";
    cin >> quantityB;
    int quantityC;
    cout << "Enter the quantity of item 3:\n";
    cin >> quantityC;
    int quantityD;
    cout << "Enter the quantity of item 4:\n";
    cin >> quantityD;

    double total = priceA * quantityA + priceB * quantityB + priceC * quantityC + priceD * quantityD;
    cout << "The total cost is " << total;

    

}
