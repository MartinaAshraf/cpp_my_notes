/*Write some C++ statements which will:

(a) find the length C of the hypotenuse of a right-angle triangle in terms of the lengths A and 
B of the other two sides;

(b) find the length C of a side of a triangle given the lengths A and B of the other two sides 
and the size in degrees of the included angle θ, using the cosine rule:

𝑐^2 = 𝑎^2+ 𝑏^2 − 2𝐴𝐵 cos 𝜃
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    float c1 = sqrt(a * a + b * b);
    cout << c1 << endl;
    float anglec, c2;
    cin >> anglec;
    anglec = anglec * (3.142 / 180.0);
    c2 = sqrt(a * a + b * b - 2 * a * b * cos(anglec));
    cout << c2;
    return 0;
}
