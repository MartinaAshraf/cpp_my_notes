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
for(int i=1;i<=5;i++)
{
for(int j=5;j>=i;j--)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}

/*
11111
2222
333
44
5
*/
#include <iostream>
using namespace std;
int main()
{ 
for(int i=1;i<=5;i++)
{
for(int j=5;j>=i;j--)
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
{
for(int i=1;i<=5;i++)
{
for(int j=5;j>=i;j--)
{
cout<<j;
}
cout<<endl;
}
return 0;
}
