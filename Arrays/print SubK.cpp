#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 12345;
    string str;
    int i = num;
    int temp;
    while(i >= 0){
        temp = num%10;
        //str.push_back(temp);
        i = num/10;
        cout << i << endl;
    }
    cout << str;
    return 0;
}