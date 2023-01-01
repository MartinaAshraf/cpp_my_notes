/*The electricity accounts of residents in a very small town are calculated as follows:

• if 500 units or less are used the cost is 2 cents (100 cents =$1) per unit;

• if more than 500, but not more than 1000 units are used, the cost is $10 for the first 500 
units, and then 5 cents for every unit in excess of 500;

• if more than 1000 units are used, the cost is $35 for the first 1000 units plus 10 cents for 
every unit in excess of 1000; in addition, a basic service fee of $5is charged, no matter how 
much electricity is used. 

Write a C++ program which reads the names and consumptions of 
the following users from an external file and displays the name, consumption and total 
charge for each user:

Ahmed, A B 200
Baker, C D 500 
Essop, S A 700
Jansen, G M 1000
Smith, Q G 1500
*/


#include<iostream>
using namespace std;
int main() {
 int m;
 cout << "Enter the number of users\n";
 cin >> m;
 while (m) {
 m--;
 int units;
 string n;
 cout << " Please enter The Name and Number of Units you Consumed : 
\n";
 cin >> n >> units;
 double amount = 0.0, srcuharge = 0.0;
 if (units <= 500) {
 amount = units * .02;
 }
 else if (units <= 1000) {
 amount = ((units - 500) * .05) + 10;
 }
 else {
 amount = ((units - 1000) * .10) + 35;
 }
 srcuharge = amount + 5;
 cout << "Electricity Bill for " << n << " = " << srcuharge <<
endl;
 }
}
