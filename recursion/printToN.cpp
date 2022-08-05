#include<iostream>
using namespace std;

void printTillN(int n){
    if(n == 0) return;
    printTillN(n - 1 );
    cout << n << " ";
}

int main(){

    int n;
    cin >> n;
    printTillN(n);


    return 0;
}