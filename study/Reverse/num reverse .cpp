//12345->54321
#include<iostream>
using namespace std;
int main()
{
int n,z,rev=0,x;
cout<<"enter the number";
cin>>n;
z=n;
while(n>0)
{
x=n%10;
rev=rev*10+x;
n=n/10;
}
cout<<"reverse="<<rev;
return 0;
}
