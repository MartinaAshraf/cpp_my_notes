#include<iostream>

using namespace std;

int main() {

    int num, temp = 0;
    cin >> num;

    while (num != 0) {
        temp = num % 10;
        num /= 10;
        cout << temp;
    }
    
}
