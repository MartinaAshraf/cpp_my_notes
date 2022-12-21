#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, z;
    cout << "enter x value: ";
    cin >> x;
    cout << "enter y value: ";
    cin >> y;
    cout << "enter z value: ";
    cin >> z;

    int perimeter = x + y + z;
    double area = sqrt(perimeter*(perimeter-x)*(perimeter-y)*(perimeter-z));

    cout << "perimeter = " << perimeter<<endl << " Area = " << area << endl;

    return 0;
}
