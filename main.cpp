#include "functions.h"
#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;


void print_chars(){
    cout << "Called print_chars(), returns void." << endl;
}

int dim_array(int intArray[])
{
    int dim = 0;
    while( intArray != NULL)
        dim += 1;
    return dim;
}


int conta_valori(int arr[]){
    string str;
    int dim = dim_array(arr);
    cout << to_string(dim) << endl;
    for(int i=0; i< dim; i++){
        str += to_string(arr[i]) + " ";
    }
    cout << "Called conta_valori( " << str << "), returns int." << endl;
    int conta = 0;
 
    for(int i=0; i< dim; i++)
        conta += *(arr+i);
    return conta;
}

bool trova_carattere_str(char str[], char c_atteso){
    cout << "Called trova_carattere( " << str << " , " << c_atteso << ") returns char." << endl;
    bool trovato = false;
    for(int i=0; i < (int) strlen(str); i++){
        if(str[i] == c_atteso){
            trovato = true;
            break;
        }
    }
    return trovato;
}


float calcolatore(float op1, float op2, char c){
    cout << "Called calcolatore( " << to_string(op1) << " , " << to_string(op2) << " , " << c << ") returns float." << endl;
    float operation;
    switch (c)
    {
    case 'a': operation = op1 + op2;
        break;
    case 'b': operation = op1 - op2;
        break;
    case 'c': operation = op1 / op2;
        break;    
    default: operation = op1 * op2;
        break;
    }
    return operation;
}



int main(){
    int array[10] = {45, 30, 15, 80, 200, 100, 7, 56, 19, 34};
    char stringa[8] = {'c','a','s','u','p','o','l','a'};
    int op1 = conta_valori(array);
    cout << "conta valori: " << to_string(op1) << endl;
    bool found = trova_carattere_str(stringa,'c');
    cout << "trova_carattere: " << to_string(found) << endl;
    float calcola = calcolatore(3.27,8.77, 'f');
    cout << "calcolatore: " << to_string(calcola) << endl;
    return 0;
}
