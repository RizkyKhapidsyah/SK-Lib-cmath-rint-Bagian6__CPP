#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

/*  Source by Programiz
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

using namespace std;

int main() {
    double x = 16.87, result;
    result = rint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    x = 18.5;
    result = rint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    fesetround(FE_DOWNWARD);
    x = 24.87;
    result = rint(x);
    cout << "Rounding downward (" << x << ") = " << result << endl;

    fesetround(FE_UPWARD);
    x = 45.32;
    result = rint(x);
    cout << "Rounding upward (" << x << ") = " << result << endl;

    _getch();
    return 0;
}