/* Write a C++ program to calculate x, 
where  𝑥 = −𝑏 ± (√(𝑏^2 − 4𝑎𝑐))/2𝑎
and a = 2,b = -10, c = 12 (use cin to input the data)
*/
#include<iostream>
#include<cmath>
usingnamespacestd;
intmain()
{
float a,b,c,x,y;
cin>>a>>b>>c;
x=-b+sqrt(b*b-4*a*c)/2*a;//الموجب
y=-b-sqrt(b*b-4*a*c)/2*a;//السالب
cout<<x<<endl<<y;
return0;
}
