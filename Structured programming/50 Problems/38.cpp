/* A plumber opens a savings account with $100,000 at the beginning of January. He then makes a deposit 
of $1000 at the end of each month for the next 12 months (starting at the end of January). Interest is 
calculated and added to his account at the end of each month (before the $1000 deposit is made). The 
monthly interest rate depends on the amount A in his account at the time when interest is calculated,
in the following way: 
A ≤ 110000: 1% 
110000 ≤ A < 125000: 1.5% 
A > 125000: %2 
Write a C++ program which displays, for each of the 12 months, under suitable headings, the situation at 
the end of the month as follows: the number of the month, the interest rate, the amount of interest and 
the new balance. 
(Answer: values in the last row of output should be 12, 0.02, 2534.58,130263.78)
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float bal = 100000, rate, interest;
for (int i = 1; i <= 12; i++)
{
if (bal <= 110000)
rate = 0.01;
else if (bal > 110000 && bal < 125000)
rate = 0.015;
else
rate = 0.02;
interest = bal * rate;
bal += interest;
bal += 1000;
cout << "month : " << i << " ";
cout << "rate : " << rate << " ";
cout << "interest : " << interest << " ";
cout << "new balance : " << fixed <<setprecision(2) << bal << endl;
}
}
