/*

    *
   **
  ***
 ****
*****

*/
#include <iostream>
using namespace std;
int main()
{
for(int i=1;i<=5;i++)
{
for(int j=5;j>=i;j--)
{
cout<<" ";
}
for(int k=1;k<=i;k++)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}


/*
    1
   22
  333
 4444
55555
*/
#include <iostream>
using namespace std;
int main()
{
  int i,j,k;
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
cout<<" ";
}
for( k=1;k<=i;k++)
{
cout<<i;
}
cout<<endl;
}
return 0;
}


/*
    1
   12
  123
 1234
12345
*/
#include <iostream>
using namespace std;
int main()
{
  int i,j,k;
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
cout<<" ";
}
for( k=1;k<=i;k++)
{
cout<<k;
}
cout<<endl;
}
return 0;
}
