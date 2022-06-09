#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    str.pop_back();
    string::iterator it;
    for(it = str.begin(); it != str.end(); it++) cout << *it << " ";
return 0;
}