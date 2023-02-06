/**
    Write a program that evaluates the two expressions in the section labeled "precedence.":
    1) A = X + Y - 2/2 + Z;
    2) A = X + (Y - 2)/(2 + Z);
    (Try evaluating the result with X = 1, Y = 2, and Z = 3.)
**/

#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    int a1, a2;

    x=1;
    y=2;
    z=3;

    a1 = x + y - 2/2 + z;
    cout << "first result: " + to_string(a1) << endl;
    a2 = x + (y - 2)/(2 + z);
    cout << "second result: " + to_string(a2) << endl;

}
  