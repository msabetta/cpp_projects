#include <bits/stdc++.h>


using namespace std;


int main(){
    int a = 1;
    int b = 2;
    a ^= b ^= a ^= b ;
    cout << "a = " + to_string(a) << endl;
    cout << "b = " + to_string(b) << endl;

}

