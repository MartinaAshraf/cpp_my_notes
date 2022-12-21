#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"enter x value";
cin>>x;
cout<<"enter y value";
cin>>y;
cout<<"enter z value";
cin>>z;
if(x>y && x>z)
{
cout<<"x is great";
}
else if(y>x && y>z)
{
cout<<"y is great";
}
else
{
cout<<"z is great";
}
return 0;
}
