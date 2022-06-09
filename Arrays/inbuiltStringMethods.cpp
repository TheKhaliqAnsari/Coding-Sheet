#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
    getline(cin, str);
    cout << str;
    cout << endl;
    cout << "String len is : " << str.length();
    string :: iterator it;
    for(it = str.begin(); it != str.end(); it++){
        cout << '_' << *it;
    }


    return 0;
}