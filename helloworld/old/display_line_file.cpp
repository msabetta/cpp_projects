#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream in ("Circle.cpp");
  string s,line;

  while(getline(in, line)){
    if (cin.get() == '\n'){
        cout << line + "\n";
    }
  }
} ///:~