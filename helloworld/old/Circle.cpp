#include <iostream>
#include <cmath>
using namespace std;
int main(){
int radius;
double pi1 = M_PI;
double area;
cout << "Enter the radius of the circle: ";
cin >> radius;
area = pi1 * pow(radius,2);
cout << "The area of the circle is " + to_string(area) << endl;
}