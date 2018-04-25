//
// Created by leelddd on 4/25/2018.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double T[7] = {};

void set_time() {
    int multi[] = {1000000, 60, 60, 24, 30};
    T[0] = multi[0];
    for (int i = 1; i < 5; ++i) {
        T[i] = T[i - 1] * multi[i];
    }
    T[5] = T[3] * 365;
    T[6] = T[5] * 100;
}

double lg(double num) {
    return log(num) / log(2);
}

//nlgn
double nlgn(double t) {
    double low = 0;
    double high = T[6];
    while (true) {
        double mid = (low + high) / 2;
        double re = mid * lg(mid);
        if (low == mid || high == mid)
            return mid;
        else if (re > t)
            high = mid;
        else
            low = mid;
    }
}

// n!
int de_factorial(double t) {
    double i = 1;
    double fac = 1;
    while (true) {
        fac = i * fac;
        if (fac > t)
            return i - 1;
        i++;
    }
}


int main() {
    set_time();
    string sp = " | ";
//    lgn
    cout << "lgn" << sp;
    for (double t:T)
        cout << 2 << "^" << t << sp;
    cout << endl;

//    n^1/2
    cout << "n^1/2" << sp;
    for (double t: T)
        cout << (double) t * (double) t << sp;
    cout << endl;

//    n
    cout << "n" << sp;
    for (double t: T)
        cout << t << sp;
    cout << endl;

//    nlgn
    cout << "nlgn" << sp;
    for (double t: T)
        cout << (long long) nlgn(t) << sp;
    cout << endl;

//    n^2
    cout << "n^2" << sp;
    for (double t: T)
        cout << (int) sqrt(t) << sp;
    cout << endl;

//    n^3
    cout << "n^3" << sp;
    for (double t: T)
        cout << pow(t, 0.3333333333333333333) << sp;
    cout << endl;

//    2^n
    cout << "2^n" << sp;
    for (double t: T)
        cout << (int) lg(t) << sp;
    cout << endl;

//    n!
    cout << "n!" << sp;
    for (double t: T)
        cout << de_factorial(t) << sp;
    cout << endl;
}