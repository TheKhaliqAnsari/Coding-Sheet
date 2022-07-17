#include<bits/stdc++.h>
using namespace std;

int minSteps(int n){
    if(n <= 1){
        return 0;
    }
    int x = minSteps(n-1), y = INT_MAX, z = INT_MAX;
    if(n % 2 == 0) y = minSteps(n/2);
    if(n % 3 == 0) z= minSteps(n/3);

    return min(x, min(y,z)) + 1;
}

int main(){
    int n;
    cin >> n;
    cout << minSteps(n);

    return 0;
}