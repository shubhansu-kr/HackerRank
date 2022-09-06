// https://www.hackerrank.com/contests/cse205-16915-day12/challenges/array-bubblesort-1-26699

#include <bits/stdc++.h>
using namespace std ;

void bubbleSort(int *Arr, int N)
{
    // Input: Array, N -> No. of elements in the array
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j < N - i; ++j)
        {
            if (Arr[j] > Arr[j + 1])
                swap(Arr[j], Arr[j + 1]);
        }
    }
}

int main () {
    int Arr[10] ;
    for (int i = 0; i < 10; ++i)
    {
        cin >> Arr[i];
    }
    bubbleSort(Arr, 10);
    for (int i = 0; i < 10; ++i)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    return 0;
}