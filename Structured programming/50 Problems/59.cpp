/*The transcendental number e (2.718281828 ...) can be shown to be the limit of
1/(1 − 𝑥)^(1/x)
as x tends to zero (from above).
Write a C++ program which shows how this expression converges to e as x gets closer 
and closer to zero (use the real kind with the greatest precision available on your system).
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
double e = exp(1);
cout << fixed << setprecision(7);
cout << " e = " << e << "\n";
double x = 1.0;
double res = 3.0;
double eps = 1e-8;
while (res - e >= eps) {
res = 1 / pow((1.0 - x), 1 / x);
cout << fixed << setprecision(9);
cout << "when x = " << x << " ===>> ";
cout << fixed << setprecision(7);
cout << "result = " << res;
cout << "\n";
x /= 10;
}
}
