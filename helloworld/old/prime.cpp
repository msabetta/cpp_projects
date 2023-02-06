#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>

using namespace std;

int main (){
    vector<int> numbers = {5, 11, 22, 44, 17, 43, 12, 88, 24};
    int conta_div;
    int resto; 

    for(int i: numbers){
        conta_div = 0;
        for(int f=1; f<=i; f++)
        {
            resto = i%f;
            if(resto == 0)
                conta_div++;  
        }
        if (conta_div == 2)
            cout << i << " ";
    }

    cout << "\n";
    cout << "counter: " + to_string(conta_div) << endl;
}

