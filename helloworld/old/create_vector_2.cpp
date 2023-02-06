#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int main(){
    vector<float> vet,vet2,vet3;

    for (int i=0; i<25; i++)
      vet.push_back(1.0 * i);

    for (int i=0; i<25; i++)
      vet2.push_back(1.0 * i);

    for (int i=0; i<25; i++)
      vet3.push_back(vet[i] + vet2[i]);


    cout << "-----vet------\n"; 

    for (int i=0; i<vet.size(); i++)
      cout << to_string(vet[i]) << endl;

    cout << "-----vet2------\n"; 

    for (int i=0; i<vet2.size(); i++)
      cout << to_string(vet2[i]) << endl;

    cout << "-----vet3------\n"; 

    for (int i=0; i<vet3.size(); i++)
      cout << to_string(vet3[i]) << endl;
    
}