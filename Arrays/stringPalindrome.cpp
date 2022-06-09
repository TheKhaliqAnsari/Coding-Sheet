#include<iostream>
using namespace std;

int len(char str[]){
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len = len + 1;
    }
    return len;
}


bool checkPali(char str[]){
    int start = 0;
    int end = len(str) - 1;
    while(start <= end){
        if(str[start] == str[end]){
            start++;
            end--;
        }else{
            return false;
            break;
        }
    }
    return true;

}

int main(){
    char str[100];
    cin >> str;
    cout << checkPali(str);


    return 0;
}