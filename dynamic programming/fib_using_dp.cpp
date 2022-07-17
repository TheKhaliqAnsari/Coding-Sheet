#include<bits/stdc++.h>
using namespace std;

int fib3(int n){
    int *ans = new int[n+1];
    ans[0] = 0;
    ans[1] = 1;
    for(int i = 2; i < n + 1; i++){
        ans [i] = ans[i - 1] + ans[i - 2];
    }
    return ans[n];
}

int fib_dp(int n, int *ans){
    // base case ->
    if(n <= 1) return n;
    //check if ans is stored or not ->
    if(ans[n] != -1){
        return ans[n];
    }
    ans[n] = fib_dp(n - 1, ans) + fib_dp(n-2, ans);
    return ans[n];

}

int fib(int n){
    int *ans = new int[n + 1];
    for(int i = 0; i < n + 1; i++) ans[i] = -1;
    return fib_dp(n, ans);
}

int main(){
    int num;
    cout << "Enter Number : ";
    cin >> num;
    cout << fib3(num);
}