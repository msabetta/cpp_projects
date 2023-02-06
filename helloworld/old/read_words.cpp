#include <iostream>

using namespace std;


int main(){

    string word;
    int scelta;

    while(true){
/*         cout << "Insert a word: ";
        cin >> word;
        if(word == "quit")
            break;
        else if(word == "house")
            cout << "good" << endl;
        else if(word == "war")
            cout << "Good job!" << endl; */
        
        cout << "Insert a number: ";
        cin >> scelta;


        switch(scelta){
            case 1: cout << "good" << endl;
                break;
            case 2: cout << "Good job!" << endl;
                break;
            case 0: exit(1);
                break;
        }




    }
}