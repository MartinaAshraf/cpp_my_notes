//1+(1/3)+(1/5)+……..+(1/n)
#include <iostream>

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i - 1);
    }

    cout << "Sum of the series is: " << sum << endl;

    return 0;
}
