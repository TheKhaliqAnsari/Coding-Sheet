#include<iostream>
using namespace std;

int lenRec(char str[]){
    if(str[0] == '\0'){
        return 0;
    }
    return 1 + lenRec(str + 1);
}

int main(){
    char str[100];
    cin.getline(str, 100);
    cout << lenRec(str);

    return 0;
}