#include<iostream>
#include<string>
using namespace std;

char repeatedChar(string s){
   
//    if bot char are near
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]) return s[i];
    }
// regzueqr
    int firstIndex = 0;
    for(int i = 0; i < s.size() - 1; i++){
        int tempIndex;
        for(int j = i + 1; j < s.size(); j++){
            if(s[i] == s[j]){
                firstIndex = j;
                if(j > firstIndex){
                    return s[j];
                }   
            }
        }
    }
}


int main(){

    string s;
    getline(cin, s);
    cout << repeatedChar(s);


}

// failed app
//  int count = INT32_MAX;
//     char ch;
//     int diff = 0;
//     for(int i = 0; i < s.size() - 1; i++){
//         for(int j = i + 1; j < s.size(); j++){
//             if(s[i] == s[j]){
//                 diff = j - i + 1;
//                 if(count > diff){
//                     count = (j-i+1);
//                     ch = s[i];
//                 }
//             }
//         }
//     }
//     return ch;

// op Input:
// "jkodgypoya"
// Output:
// "y"
// Expected:
// "o"

// second failed
// "regzueqr"
// Output:
// "r"
// Expected:
// "e"

// Second app failed
//  for(int i = 0; i < s.size(); i++){
//         if(s[i] == s[i+1]) return s[i];
//     }
//    for(int i = 0; i < s.size() - 1; i++){
//     for(int j = i + 1; j < s.size();j++){
//         if(s[i] == s[j]){
//             return s[i];
//         }
//     }
//    }