#include <iostream>
#include "header.h"

using namespace std;

void  func1(int x, double y) {
    cout << "Called func1(" << x << ", " << y << "), returns void." << endl;
}


char  func2() {
    cout << "Called func2(), returns char." << endl;
    return 'a';
}

int   func3(int x) {
    cout << "Called func3(" <<  x << "), returns int." << endl;
    return 0;
}

float func4(double a, char b) {
    cout << "Called func4("<< a << ", " << b << "), returns float." << endl;
    return 0.0;
}