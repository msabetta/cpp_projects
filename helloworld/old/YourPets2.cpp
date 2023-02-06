//: C03:YourPets2.cpp
#include <iostream>
#include <cstdint>
using namespace std;

char dog;
int cat;
float bird;
double fish;

void f(int pet)
{
    cout << "pet id number: " << pet << endl;
}

int main()
{
    long int i; 
    short int j;
    long double k;
    cout << "f(): " << (intptr_t)&f << endl;
    cout << "dog: " << (intptr_t)&dog << endl;
    cout << "cat: " << (intptr_t)&cat << endl;
    cout << "bird: " << (intptr_t)&bird << endl;
    cout << "fish: " << (intptr_t)&fish << endl;
    cout << "i: " << (intptr_t)&i << endl;
    cout << "j: " << (intptr_t)&j << endl;
    cout << "k: " << (intptr_t)&k << endl;
} ///:~