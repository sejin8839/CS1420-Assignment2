/*
Author - Name:Sejin Yoon ID:u1311019
Date: Mar 22, 2023
Program: To check whether a number is happy or not
Version 2 - using while loop
filename: Assignment2_Ver1.cpp
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num <= 0)
    {
        cout << "Please enter a number greater than 0" << endl;
        return 0;
    }

    
    for (;;)
    {
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        if (sum == 1)
        {
            cout << "The number is a happy number." << endl;
            break;
        }
        else if (sum == 4)
        {
            cout << "The number is not a happy number." << endl;
            break;
        }
        else
        {
            num = sum;
        }
    }
    return 0;
}