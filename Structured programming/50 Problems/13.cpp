/*A function is defined as follows:

       {𝑎𝑥^3 − 𝑏𝑥^2 + 𝑐𝑥 − 𝑑, 𝑥 > 1
𝑓(𝑥) = {0, 𝑥 = 1
       {−𝑎𝑥^3 + 𝑏𝑥^2 − 𝑐𝑥 + 𝑑, 𝑥 < 1
write a C++ program that reads the values of a, b, c, d, and x, and finds the value of f(x), and 
prints it out to the screen.
*/


#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){ 
int a,b,c,d,x,y; 
cout<<"enter the value of x"<<endl; 
cin>>x; 
cout<<"enter the value of a"<<endl; 
cin>>a; 
cout<<"enter the value of b"<<endl; 
cin>>b; 
cout<<"enter the value of c"<<endl; 
cin>>c; 
cout<<"enter the value of d"<<endl; 
cin>>d; 
 if(x>1) 
 { 
 y=(a*pow(x,3))-(b*pow(x,2))+(c*x)-d; 
 cout<<"f(X) = "<< y <<endl; 
 } 
else if (x<1) 
{ 
 y=(-a*pow(x,3))+(b*pow(x,2))-(c*x)+d; 
 cout<<"f(X) = "<< y <<endl; 
} 
else 
cout<<"f(X) = "<< 0 <<endl; 
return 0; 
}
