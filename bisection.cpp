
#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x*x*x;
}

double bisection(double a, double b){
    double eps = 1e-6;

    while((b-a) > eps){
        double c = (a+b)/2.0;

        if(f(c) == 0){
            return c;
        }

        if(f(a)*f(c) < 0){
            b = c;
        }
        else{
            a = c;
        }
    }

    return (a+b)/2.0;
}

int main(){
    cout << bisection(-1, 10) << endl;
    return 0;
}
