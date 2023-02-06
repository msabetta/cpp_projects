#include <iostream>
//print the following:
/*
* Hello
* #ShivamCDAC
* Bye
*/

using namespace std;
// class A{
//     public:
//         A(){
//             cout << "Hello" << endl;
//         }
//         ~A(){
//             cout << "Bye" << endl;
//         }
// };

struct A{
    A(){
        cout << "Hello" << endl;
    }
    ~A(){
        cout << "Bye" << endl;
    }
};

static A obj;

int main(){
    cout << "#ShivamCDAC" << endl;
}