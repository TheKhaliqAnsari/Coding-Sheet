#include<iostream>
using namespace std;



int main(){

    char string[100];
    cin >> string;
    string[6] = 'K';
    cout << string;
    cout << endl;

    int len = 0;
    for(int i = 0; string[i] != '\0'; i++){
        len = len + 1;
    }
    cout << "Length is :: " << len;
    return 0;
}