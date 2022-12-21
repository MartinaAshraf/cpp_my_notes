//8=1+1+2+4=1*1*2*4
//A number is said to be a Spy number if the sum of all the digits is equal to the product of all digits
#include <iostream>
using namespace std;
int main()
{
int n,x,sum=0,prod=1;
cout<<"enter the number";
cin>>n;
while(n>0)
{
x=n%10;
sum=sum+x;
prod=prod*x;
n=n//10;
}
if(sum==prod)
{
cout<<"Spy Number";
}
else
{
cout<<"Not Spy Number";
}
return 0;
}
