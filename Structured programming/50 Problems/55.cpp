/*A person deposits $1000 in a bank. Interest is compounded monthly at the rate of 1% 
per month. Write a C++ program which will compute the monthly balance, but write it only 
annually for 10 years (use nested DO loops, with the outer loop for 10 years, and the inner 
loop for 12 months). Note that after 10 years, the balance is $3300.39, whereas if interest 
had been compounded annually at the rate of 12% per year the balance would only have
been $3105.85
 */

#include<iostream>
using namespace std;
int main() {
double feed = 1000;
int i = 0;
do{
i++;
for (int j = 0; j < 12; j++) {
feed += (feed * 0.01);
}
} while (i < 10);
cout << "The total rate is " << feed << endl;
}
