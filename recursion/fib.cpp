#include<bits/stdc++.h>
using namespace std;

int fib(int x){
    // base case
    if(x == 0 || x == 1) return x;
    return fib(x - 2) + fib(x - 1);
}

int main(){

    int x;
    cin >> x;
    cout << fib(x);

    return 0;
}