// Basic String palindrome
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string str;
    getline(cin, str);
    string :: reverse_iterator it;
    for(it = str.rbegin(); it != str.rend(); it++){
        cout << *it << ' ';
    }


    return 0;
}