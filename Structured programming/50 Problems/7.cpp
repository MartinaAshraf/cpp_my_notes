/*Write a C++ program that finds the largest and smallest values of a given set of values, i.e., 
{𝑥𝑖, 𝑖 = 1,2, … , 𝑛}.
*/

#include <iostream>
using namespace std;
int main()
{
 int SIZE, max, min;
 cout << "What Number of Element You Want To Add : ";
 cin >> SIZE;
 int array[SIZE];
 cout << "Enter The Elements\n";
 for (int i = 0; i < SIZE; i++) {
 cout << "Element " << i + 1 << " = ";
 cin >> array[i];
 }
 max = array[0];
 min = array[0];
 for (int i = 1; i < SIZE; i++) {
 if (array[0] > array[i]) {
 min = array[i];
 }
 else if (array[0] < array[i]) {
 max = array[i];
 }
 }
 cout << "The Max Element = " << max << endl;
 cout << "The Min Element = " << min << endl;
}
