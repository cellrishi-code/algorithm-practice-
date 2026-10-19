#include<bits/stdc++.h>
using namespace std;

double f(double x ){
    return x*x;
}

double integ13(double a , double b){
    const int n = 1000*1000;
    double h = (b-a)/n;
    double s = f(a)+f(b);
    for(int i = 1 ; i<=n-1 ; ++i){
        double x = a+i*h;
        s+= f(x)*((i&1)? 4 :2);
    }
    s =s *h/3;
    return s ;

}

double inte38(double a , double b ){
    const int  n = 99;
    double h = (b-a)/n;
    double s = f(a)+f(b);
    for(int i = 1 ; i<=n-1; ++i){
        double x = a+i*h;
        if(i%3==0){
            s+=2*f(x);
        }
        else{
            s+=3*f(x);
        }
    }
    s=s*3*h/8;
    return s;

}


double trap(double a , double b ){
    const int n = 5565;
    double h = (b-a)/n;
    double s = f(a)+f(b);
    for(int i = 1 ; i<=n-1;++i){
        double x = a+i*h;
        s+=2*f(x);
    }
    s= s*h/2;
    return s;
}



int main(){
    cout<<integ13(4,5)<<endl;
    cout<<inte38(4,5)<<endl;
    cout<<trap(4,5);
    return 0 ;
}
