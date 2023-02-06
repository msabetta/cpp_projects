#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 11;
    int y = 10;
    int sum = x & y;
    int xor_num = x^y;
    int not_xor_num = !(x^y);
    bitset<8> b1(x);
    bitset<8> b2(y);
    bitset<8> b3(sum);
    bitset<8> b4(xor_num);
    bitset<8> b5(not_xor_num);

    cout << "Binary of x:" << b1 << endl;
    cout << "Binary of y:" << b2 << endl;
    cout << "Binary of sum:" << b3 << endl;
    cout << "Binary of xor:" << b4 << endl;
    cout << "Binary of not_xor:" << b5 << endl;

    if(!(x ^ y)){
        printf("equal");
    }

    return 0;
}

