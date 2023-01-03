/* Write a C++ program to compute the sum of the series 1 + 2 + 3 +... such that the sum is as large as 
possible without exceeding 100. The program should write out how many terms are used in the sum. 
*/
#include<iostream>
using namespace std;
int main()
{
int sum = 0,i=1;
while (sum +i<= 100)
{
sum += i;
i++;
}
cout <<"terms = "<< i-1;
}
