#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() {
        feet = 0;
        inches = 0.0;
    }

    Distance(int f, float i) {
        feet = f;
        inches = i;
    }

    void dispDist() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }

    Distance addDist(Distance d1, Distance d2) {
        Distance d;
        d.feet = d1.feet + d2.feet;
        d.inches = d1.inches + d2.inches;
        if (d.inches >= 12.0) {
            d.feet++;
            d.inches -= 12.0;
        }
        return d;
    }


};
int main() {
    Distance d1(5, 10.0);
    Distance d2(3, 8.5);
    Distance d3;

    d1.dispDist();
    d2.dispDist();

    d3 = d3.addDist(d1, d2);
    d3.dispDist();

    return 0;
}
