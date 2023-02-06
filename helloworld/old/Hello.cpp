//: C02:Hello.cpp
// Saying Hello with C++
#include <iostream> // Stream declarations
#include <string>

using namespace std;

int main() {
//cout << "Hello, World! I am "
//<< 8 << " Today!" << endl;
string name;
cout << "Name: ";
cin >> name;

string surname;
cout << "Surname: ";
cin >> surname;


cout << "You are " + name + " " + surname << endl;


} ///:~