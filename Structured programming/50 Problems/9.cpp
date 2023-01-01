/*Write a C++ program to calculate the dot product 𝑥⃗ . 𝑦⃗ = ∑ 𝑥⃗𝑖𝑦⃗𝑖 𝑛 𝑖=1 of pairs of data points as 
{(𝑥⃗𝑖 , 𝑦⃗𝑖 ): 𝑖 = 1,2, … , 𝑛}. Modify the program to evaluate 𝑆 = 𝑥⃗1𝑦⃗𝑛 + 𝑥⃗2𝑦⃗𝑛−1 + ⋯ 𝑥⃗𝑛𝑦⃗1.
*/

#include<iostream>
using namespace std;
float dot_product(float array_a[], float array_b[], int size) {
float sum_dotproduct = 0;
for (int i = 0; i < size; i++) {
sum_dotproduct += array_a[i] * array_b[i];
}
return sum_dotproduct;
}
int main() {
const int size = 1e5;
int n;
float array_a[size],array_b[size];
cin >> n;
for (int i = 0; i < n; i++) {
cin >> array_a[i];
}
for (int j = 0; j < n; j++) {
cin >> array_b[j];
}
cout << "sum of dot product = " << dot_product(array_a, array_b, n);
}
