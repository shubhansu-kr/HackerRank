// https://www.hackerrank.com/contests/cse205-16915-day10/challenges/insertion-sort-1-21482

#include <bits/stdc++.h>
using namespace std ;

void insertionSort(int *Arr, int n) {

    for (int i = 1; i < n; ++i)
    {
        int temp = Arr[i];
        int j = i-1;
        while(temp < Arr[j]){
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = temp;
    }
}

int main () {
    int n;
    cin >> n;
    int *cards = new int[n];
    
    for (int i = 0; i < n; ++i)
    {
        cin >> cards[i] ;
    }
    
    insertionSort(cards, n) ;

    for (int i = 0; i < n; ++i)
    {
        cout << cards[i] << " " ;
    }
    
    return 0;
}