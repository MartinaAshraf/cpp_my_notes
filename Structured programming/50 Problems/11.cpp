// Write a C++ code that reads an integer N and computes Factorial N.

#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    long long fact=1;

    for (int i = 1; i <= n; ++i) {
        fact=fact*i;
    }

    cout<<fact<<endl;

    return 0;
}
