#include "mytemperature.h"

double celsius_to_fah(double cel) {
    return cel * 9.0 / 5.0 + 32.0;
}

#include <iostream>
#include <iomanip>
#include "mytemperature.h"

using namespace std;

int main() {
    cout << "Celsius    Fahrenheit | Fahrenheit    Celsius" << endl;
    cout << "--------------------------------------------" << endl;

    for (double cel = 40.0; cel >= 31.0; cel -= 1.0) {
        double fah = celsius_to_fah(cel);
        cout << fixed << setprecision(1) << cel << "\t" << fah << "\t | ";

        double fah2 = 120.0 - (40.0 - cel) * 10.0;
        double cel2 = fahrenheit_to_cels(fah2);
        cout << fixed << setprecision(2) << fah2 << "\t" << cel2 << endl;
    }

    return 0;
}