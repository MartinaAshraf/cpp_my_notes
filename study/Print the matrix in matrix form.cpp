/*
1 2 3
4 5 6
7 8 9
*/

#include <iostream>
using namespace std;
int main()
{
int list[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
cout << list[i][j] << " ";
}
cout << endl;
}
return 0;
}
