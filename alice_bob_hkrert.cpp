#include<bits/stdc++.h>
using namespace std;

vector<int> performQuery(vector<int> type, vector<int> x, int q){
    int i = 0;
    vector<int> v;
    vector<int> rV;
    while(i < q){
        if(type[i] == 1){
            v.push_back(x[i]);
            i++;
        }else if(type[i] == 2){
            v.erase(remove(v.begin(), v.end(), x[i]), v.end());
            i++;
        }
        else if(type[i] == 3){
            int xorAns = 0;
            for(auto ele = v.begin(); ele != v.end(); ele++){
                xorAns += (*ele ^ x[i]);
            }
            //v.clear();
            rV.push_back(xorAns);
            i++;
        }
    }
    return rV;
}

int main(){
    vector<int> type = {3,2,1,1,1,3};// {1,1,1,2,1,3,3};
    vector<int> x = {8,5,23,23,12,0}; // {5,5,11,5,16,7,11};
    int q = 6;
    vector<int> ans = performQuery(type, x, q);
    for(auto x:ans) cout << x << " ";
    return 0;
}