#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    cout << fixed << setprecision(1);

    int k = 0;
    int t;
    double t1 = 800;
    double t2 = 327;
    double tm = -1 / 0.021 * log(t2 / t1);
    double avg;

    while (k < 5) {
        cout << "Введите значение t" << ++k << ": ";
        cin >> t;

        if (t < tm) {
            avg = t1 * exp(-0.021 * t);
            cout << "Ср. значение t" << k << ": " << avg << "\n" << endl;
        }
        else {
            avg = t2 * exp(-0.015 * (t - tm));
            cout << "Ср. значение t" << k << ": " << avg << "\n" << endl;
        }
    }
    return 0;
}
