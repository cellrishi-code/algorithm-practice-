#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return -(x - 3) * (x - 3) + 9;
}

double binarySearchMax(double l, double r) {
    double eps = 1e-9;

    while (r - l > eps) {
        double mid = l + (r - l) / 2.0;
        double next = mid + eps;

        if (f(mid) < f(next)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    return (l + r) / 2.0;
}

int main() {
    double x = binarySearchMax(0, 6);

    cout << fixed << setprecision(6);
    cout << "Maximum at x = " << x << '\n';
    cout << "Maximum value = " << f(x) << '\n';

    return 0;
}