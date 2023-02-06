#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(){
    vector<float> vet;

    for (int i=0; i<25; i++)
      vet.push_back(1.0 * i);
    
    cout << "before\n";

    for (int i=0; i<vet.size(); i++)
      cout << to_string(vet[i]) << endl;

    for (int i=0; i<25; i++)
      vet[i] = pow(vet[i],2);

    cout << "after\n";  


    for (int i=0; i<vet.size(); i++)
      cout << to_string(vet[i]) << endl;

}