/* There are eight pints in a gallon, and 1.76 pints in a liter. The volume of a tank is given as 2
gallons and 4 pints. Write a C++ program which reads this volume in gallons and prints and
converts it to liters
*/
#include <iostream>
using namespace std;
int main()
{
 int gallons;
float liters;
cout << "Enter a whole number of gallons: ";
cin >> gallons;
liters=3.7854*gallons;
cout << "Liters =" << liters ;
return 0;
}
