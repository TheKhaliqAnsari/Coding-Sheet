#include <bits/stdc++.h>
using namespace std;
void swap(int *arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void sortZeroesAndOne(int *arr, int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[start] == 1 && arr[end] == 0)
        {
            swap(arr, start, end);
            start++, end--;
        }
        else if (arr[start] == 1 && arr[end] == 1)
        {
            end--;
        }
    }
}
int main()
{
    int size;

    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }

    sortZeroesAndOne(input, size);

    for (int i = 0; i < size; ++i)
    {
        cout << input[i] << " ";
    }

    cout << endl;
    delete[] input;
    return 0;
}