//12345->54321
#include<iostream>
using namespace std;
int main()
{
int n,rev=0,x;
cout<<"enter the number \n";
cin>>n;        //12
while(n>0)
{
x=n%10;        //2 ... 1
rev=rev*10+x;  //2 ... 1
n=n/10;        //1 ... 0
}
cout<<"reverse="<<rev;//21
return 0;
}
