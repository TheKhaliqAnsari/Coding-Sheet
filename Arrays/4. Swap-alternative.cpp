#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int *arr, int size)
{
    int i = 0, j;
    int new_size;
    if(size % 2 == 0){
        new_size = size;
    }else{
        new_size = size - 1;
    }
    while(i < new_size){
        int j = i + 1;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i = i + 2;
    }
}
int main() {
int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
return 0;
}