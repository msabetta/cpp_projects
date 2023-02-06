#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int countOccurrences(char *str, string word){
  char *p;
  // split the string by spaces in a
  vector<string> a;
  
  p = strtok(str, " ");
  while (p != NULL)
  {
    a.push_back(p);
    p = strtok(NULL, " ");
  }

  // search for pattern in a
  int c = 0;
  for (int i = 0; i < a.size(); i++)

    // if match found increase count
    if(word == a[i])
      c++;
  return c;
}




int main() {
  ifstream in ("4.txt");
  string s,line;
  string word;

  while(getline(in, line))
    s += line + "\n";
  //cout << s;

  //int n = s.length();
  
  // declaring character array
  //char char_array[n+1];
  // copying the contents of the
  // string to char array
  //strcpy(char_array, s.c_str());

  char p[s.length()+1];
  int i;
    for (i = 0; i < sizeof(p); i++) {
        p[i] = s[i];
        //cout << p[i];
    }

  cout << "word to search: ";
  cin >> word;

  cout << "The occorrences of word " + word + " are " + to_string(countOccurrences(p,word));

} ///:~