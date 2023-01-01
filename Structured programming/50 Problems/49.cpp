 /*Write a C++ program which reads two numbers (which may be equal) and writes out the larger 
one with a suitable message, or if they are equal, writes out a message to that effect.
*/

#include<iostream>
using namespace std;
void comparison(float num1, float num2) {
if (num1 == num2) {
cout << "both are equal \n";
}
else {
if (num1 > num2) {
cout << "num1 is larger than num2";
}
else {
cout << "num2 is larger than num1";
}
}
}
int main() {
float x, y;
cin >> x >> y;
comparison(x, y);
}
