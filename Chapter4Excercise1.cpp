// Chapter4Excercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int num_1 = 0;
    int num_2 = 0;


    cout << "This program will compare two integers \n";

    cout << "Please enter your first integer: ";
    cin >> num_1;

    cout << "\nPlease enter your second integer: ";
    cin >> num_2;
    cout << endl;

    cout << "\nYou entered the numbers " << num_1 << " and " << num_2;

    if (num_1 < num_2)
    {
        cout << "\nNumber 2  is greater!!";
    }
    else if (num_1 > num_2)
    {
        cout << "\nNumber 1  is greater!!";
    }
    else
    {
        cout << "\nThe numbers are equal!!";
    }

    return 0;
}
