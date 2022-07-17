#include<bits/stdc++.h>
using namespace std;

int minSteps_helper(int n, int *ans){
    if(n <= 1){
        ans[n]  = 0;
        return ans[n];
    }
    if(ans[n] != -1){
        return ans[n] + 1;
    }
    int x = minSteps_helper(n-1, ans), y = INT_MAX, z = INT_MAX;
    if(n % 2 == 0) y = minSteps_helper(n/2, ans);
    if(n % 3 == 0) z= minSteps_helper(n/3, ans);

    return min(x, min(y,z)) + 1;
}
int minSteps(int n){
    if(n <= 1){
        return 0;
    }
    int *ans = new int[n + 1];
    for(int i = 0; i < n + 1; i++) ans[i] = -1;
    return minSteps_helper(n, ans);
}

int main(){
    int n;
    cin >> n;
    cout << minSteps(n);

    return 0;
}