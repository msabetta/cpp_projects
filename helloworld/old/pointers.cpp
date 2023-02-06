#include <iostream>
#include <string>

using namespace std;

void func1(string *str)
{
   *str += " modified dy func1()";
}

void func2(string &str)
{
    str += " and by func2()";
}

int main()
{
    string word = "New word";

    cout << "Initial word: " << word << endl;
    func1(&word);
    cout << "After first function: " << word << endl;
    func2(word);
    cout << "After second function: " << word << endl;

    return 0;
} ///:~