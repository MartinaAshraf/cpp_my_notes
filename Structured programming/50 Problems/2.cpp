/*Suppose that the largest integer on your system is 1031 − 1, write a C++ statement which will
compute this number, bearing in mind that an attempt to compute 1031 will cause an overflow 
error.
*/

2
#include <iostream>
#include<cmath>
#include<algorithm>
Using namespace std;

Int main()
{
    Int r,h;//3,4
    Double A,S,Sc,V;
    Cin>>r>>h;
    A=3.14*r*r;
    S=sqrt(4*3.14*A);
    Sc=2*3.14*(r*r+r*h);
    V=3.14*r*r*h;
    Cout<<”area of a circle = “<<A<<endl;//28.26
    Cout<<”circumference of a circle = “<<S<<endl;//18.84
    Cout<<”surface area of a cylinder = “<<Sc<<endl;//131.88
    Cout<<”volume of a cylinder = “<<V<<endl;//113,04
    return 0;
}
