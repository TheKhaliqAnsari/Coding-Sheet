#include <bits/stdc++.h>
using namespace std;
int duplicateNumber(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] == arr[i])
            {
                ans = arr[j];
            }
        }
    }
    return ans;
}
int main()
{
    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    cout << duplicateNumber(input, size) << endl;
    return 0;
}