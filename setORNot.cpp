#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 1;
    }else if (n / 10 == 0){
        cout << n + 2;
    }else{
        cout << n + 1;
    }
    

    return 0;
}