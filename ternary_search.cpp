
#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return -(x - 3) * (x - 3) + 9;
}

double tenary_search(double a, double b) {
    double eps = 1e-9;

    while ((b - a) > eps) {
        double m1 = a + (b - a) / 3.0;
        double m2 = b - (b - a) / 3.0;

        if (f(m1) < f(m2)) {
            a = m1;
        } else {
            b = m2;
        }
    }

    return (a + b) / 2.0;
}

int main() {
    cout << fixed << setprecision(6);
    cout << tenary_search(0, 6);
    return 0;
}
