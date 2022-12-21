#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "enter x value" << endl;
    cin >> x;
    cout << "enter y value" << endl;
    cin >> y;

    int sum = x + y;
    int sup = x - y;
    int mul = x * y;
    int div = x / y;

    cout << "sum=" << sum << " sup=" << sup << " mul=" << mul << " div=" << div << endl;
    return 0;
}
