/*Suppose that the largest integer on your system is 1031 − 1, write a C++ statement which will
compute this number, bearing in mind that an attempt to compute 1031 will cause an overflow 
error.
*/


#include <iostream>
#include<cmath>
#include<algorithm>
Using namespace std;

Int main()
{
    int r,h;//3,4
    double A,S,Sc,V;
    cin>>r>>h;
    A=3.14*r*r;
    S=sqrt(4*3.14*A);
    Sc=2*3.14*(r*r+r*h);
    V=3.14*r*r*h;
    cout<<”area of a circle = “<<A<<endl;//28.26
    cout<<”circumference of a circle = “<<S<<endl;//18.84
    cout<<”surface area of a cylinder = “<<Sc<<endl;//131.88
    cout<<”volume of a cylinder = “<<V<<endl;//113,04
    return 0;
}
