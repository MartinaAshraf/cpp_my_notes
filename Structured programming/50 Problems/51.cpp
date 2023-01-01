/*Write a C++ program for the general solution of the quadratic equation: ax
2 + bx + c = 0.
Your program should be able to handle all possible values of the data a, b, and c. Try it out on
the following values of a, b and c:

(a) 1, 1, 1 (complex roots);
(b) 2, 4, 2 (equal roots of –1.0);
(c) 2, 2, –12 (roots of 2.0 and –3.0).

Rewrite your program with complex types so that it can handle complex roots, as well as all
the other special cases.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {

    float a, b, c, x1, x2, discriminant, reallPart, imaginaryPart;
    cout << "Hi Dr. please Enter coefficients a , b and c ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "K1 = " << x1 << endl;
        cout << "K2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        cout << "Roots are real and same.." << endl;
        x1 = -b/(2*a);
        cout << "K1 = K2 =" << x1 << endl;
    }

    else {
        reallPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different.."  << endl;
        cout << "K1 = " << reallPart << "+" << imaginaryPart << "i" << endl;
        cout << "K2 = " << reallPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
