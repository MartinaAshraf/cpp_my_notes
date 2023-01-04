/*A sphere of mass m1 impinges obliquely on a stationary sphere of mass m2, the direction of
the blow making an angle α with the line of motion of the impinging sphere. If the coefficient
of restitution is e it can be shown that the impinging sphere is deflected through an angle β
such that
tan 𝛽 =(𝑚2(1 + 𝑒) tan a)/(𝑚1 − 𝑒𝑚2 + (𝑚1 + 𝑚2)𝑡𝑎𝑛2a)
Write a C++ program to read values of m1, m2, e, and α (in degrees) and to compute the angle
β in degrees.
Hint: The problems in these exercises should all be structure planned or flowcharted before being
coded into C++.
*/
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
usingnamespacestd;
intmain()
{
double m1,m2,e,a,Beta;
cin>>m1>>m2>>e>>a;
Beta=m2*(1+e)*tan(a*3.14159/180)/(m1-(e*m2)+((m1+m2)*(tan(a*3.14159/180)*tan(a*3.14159/180))));
cout<<fixed<<showpoint<<setprecision(8)<<atan(Beta)*180/3.1415;
}
