#include<iostream>
using namespace std;

int xpown(int x, int n){
    // base case ->
    if(n == 0) return 1;
    // recursive call ->
    int smallans = xpown(x, n - 1);
    return x * smallans;
    
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << xpown(x, n);
    return 0;
}