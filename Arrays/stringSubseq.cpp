#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
    getline(cin, str);
    int acount = 0, ans = 0;
    for(int i = 0; i != str.size(); i++){
        if(str[i] == 'a') acount++;
        if(str[i] == 'g'){
            if(acount > 0){
                ans++;
                acount = 0;
            }else{
                continue;
            }
        }
    }
    cout << ans;

    return 0;
}

// Brute Force Approach : N^2
// int a = 0;
//     int g = 0;
//     int ans = 0;
//     for(int i = 0; i != str.size() - 1; i++){
//         if(str[i] == 'a'){
//             for(int j = i + 1; j != str.size(); j++){
//                 if(str[j] == 'g'){
//                     ans++;
//                     str[i] = 'x';
//                     str[j] = 'x';
//                     break;
//                 }
//             }
//         }
//     }
//     cout <<"Total number of ag : " << ans;