#include <bits/stdc++.h>
using namespace std;

void arrange(int *arr, int size)
{
    int start = 0, end = size - 1;
    int i = 1;
    while (start <= end)
    {
        if (i % 2 != 0)
        {
            arr[start] = i;
            start++;
            i++;
        }
        else
        {
            arr[end] = i;
            end--;
            i++;
        }
    }
}

int main()
{
   int n;
   cin >> n;
   int arr[n];
   arrange(arr, n);
   for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
        return 0;

}