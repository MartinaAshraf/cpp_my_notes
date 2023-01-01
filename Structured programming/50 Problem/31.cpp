/* If C and F are Celsius and Fahrenheit temperatures respectively, the formula for conversion from Celsius to Fahrenheit is
F = 9C/5 + 32. 

(a)Write a C++ program which will ask you for the Celsius temperature and display the equivalent Fahrenheit one with some sort of comment,
e.g. The Fahrenheit temperature is: ...
Try it out on the following Celsius temperatures (answers in parentheses):0 (32), 100 (212), -40 (-40!), 37 (normal human temperature: 98.6).

(b) Change the program to use a DO loop to compute and write the Fahrenheit equivalent
of Celsius temperatures ranging from 20° to 30° in steps of 1°
*/
#include <iostream>
using namespace std;
int main()
{

 
    float fahrenheit, celsius;
    int choice;
 
 
    cout << "Enter 1 for convert Fahrenheit to celsius \nEnter 2 for convert Celsius to Fahrenheit" << endl;
    cin >> choice;
 
 
    if (choice == 1)
    {
 
        cout << "Enter the Fahrenheit degree :" << endl;
        cin >> fahrenheit;
 
        celsius = (fahrenheit - 32) / 1.8;
        cout  << " degree celsius is: " << celsius << endl;
    }
    else if (choice == 2)
    {
 
        cout << "Enter the Celsius degree :" << endl;
        cin >> celsius;
 
        fahrenheit = (1.8 * celsius) + 32;
        cout << " degree Fahrenheit is: " << fahrenheit<< endl;
    }
    else
    {
 
        cout << "Please enter a valid degree" << endl;
    }
    return 0;
}
