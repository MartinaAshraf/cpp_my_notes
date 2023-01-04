/* It has been suggested that the population of the United States may be modelled by the
𝑃(𝑡) =(197273000)/(1 + 𝑒^( −0.03134(𝑡−1913.25) ) )
where t is the date in years. Write a C++ program to compute and display the population every 
ten years from 1790 to 2000. Use the intrinsic function EXP(X) to compute the exponential e^x.
Use your program to find out if the population ever reaches a "steady state", i.e. whether it stops changing.
*/
#include<iostream>
using namespace std;
int main() {
for (double t = 1790; t <= 2000; t+=10) {
double ex = exp(-0.03134 * (t - 1913.25));
double res = 197273000 / (1 + ex);
cout << "year: " << t << " ";
cout<<"population: " << (int)res << "\n";
}
cout << "\nPopulation won't reach steady state\n";
}
