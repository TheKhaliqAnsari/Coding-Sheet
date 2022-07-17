#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// fact 5 = 5*4*3*2*1; =>120
int fact(ll n){
    if(n == 1) return n;
    return n * fact(n-1);
}


int main(){
    // ll n;
    // cin >> n;
    cout << fact(5);

    return 0;
}