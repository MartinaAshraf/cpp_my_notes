/*. Write a C++ program to compute the intensity of black body radiation at given temperature T 
and frequency ν according to the Planck function:
𝑃𝑣(𝑇) =(2ℎ𝑣^3/c^2)*(1/e^(ℎ𝑣/𝑘T)-1)

where ℎ = 6.63 × 10−34, 𝑐 = 3.00 × 108, 𝑘 = 1.38 × 10−23. 
The program should prompt for input of temperature and frequency.
*/

#include<iostream>
#include<cmath>
usingnamespacestd;
intmain(){
  
double h=6.63*1e-34,c=3.00*1e8,k=1.38*1e-23,t,v,p,e=2.718281828;
cin >>t>>v;
p=2*((h*pow(v,3))/pow(c,2))*(1/pow(e,((h*v)/(k*t))-1));
cout<<p;
return0;
}
