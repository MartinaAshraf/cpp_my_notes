/*
*****
 ****
  ***
   **
    *
*/

#include <iostream>
using namespace std;
int main()
{
for(int i=5;i>0;i--)
{
for(int j=i;j<5;j++)
{
cout<<" ";
}
for(int k=0;k<i;k++)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}



/*
55555
 4444
  333
   22
    1
*/
#include <iostream>
using namespace std;
int main()
{ int i ,j,k;
for(int i=5;i>0;i--)
{
for(int j=i;j<5;j++)
{
cout<<" ";
}
for(int k=0;k<i;k++)
{
cout<<i;
}
cout<<endl;
}
return 0;
}




/*
12345
 1234
  123
   12
    1
*/




#include <iostream>
using namespace std;
int main()
{ int i,j,k;
for(int i=5;i>0;i--)
{
for(int j=i;j<5;j++)
{
cout<<" ";
}
for(int k=0;k<i;k++)
{
cout<<k;
}
cout<<endl;
}
return 0;
}
