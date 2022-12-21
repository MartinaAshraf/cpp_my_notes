#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"enter the value of x:";
cin>>x;
cout<<"enter the value of y:";
cin>>y;
//swap(x,y) دى فانكشن جاهزه بدل المعادلات
x=x+y;
y=x-y;
x=x-y;

cout<<"x="<<x<<"y="<<y;
return 0;
}
