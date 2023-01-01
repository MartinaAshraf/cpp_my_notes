/*Let x, y, and z be three functions of t defined as follows: x = t2
-8t+4, y = sin t + cos 2t , and z =power(e,3t)+5. Write a C++ program that reads in t, evaluates x,y, and z and prints them out to the
screen
*/


#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,t;
     double z,y;
         cout<<"Enter T: " ;
         cin>>t;
         x=pow(t,2)-8*t+4;
         y= (sin(t))+(cos(2*t));
         z= exp(3*t)+5;

    cout << x <<" "<<y<<" "<<z<< endl;
    return 0;
}
