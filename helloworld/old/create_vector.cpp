#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int main(){
    vector<float> vet;

    for (int i=0; i<25; i++)
      vet.push_back(1.0 * i);

    for (int i=0; i<vet.size(); i++)
      cout << to_string(vet[i]) << endl;


}