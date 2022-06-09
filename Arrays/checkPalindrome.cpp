#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
    
    string rstr = str;
    reverse(rstr.begin(), rstr.end());
    if(rstr == str){
        return true;
    }else{
        return false;
    }
}

int main() {

    string str;
    getline(cin, str);
   cout << checkPalindrome(str);

return 0;
}