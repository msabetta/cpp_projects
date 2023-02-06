#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream in ("Circle.cpp");
  string s,line;

  while(getline(in, line))
    s += line + "\n";
  cout << s;

  int count=0;
  for(int i=0; i<s.size(); i++)
    if (s[i] == ' ')
      count += 1;
  cout << "Gli spazi vuoti sono: " + to_string(count) << endl;


} ///:~