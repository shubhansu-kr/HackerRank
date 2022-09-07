// https://www.hackerrank.com/contests/cse205-16915-day13/challenges/binary-search-1-16856

#include <bits/stdc++.h>
using namespace std ;

int searchBin(int *Arr, int &n, int &x){
    int low = 0, high = n-1;
    int mid = low + (high - low)/2;

    while(low <= high) {
        if (Arr[mid] == x) return mid;
        else if (Arr[mid] > x){high = mid-1;}
        else {low = mid + 1;}
        mid = low + (high-low/2);
    }
    return -1;
}

int main () {
    int n; 
    cin >> n; 
    int Arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> Arr[i] ;
    }
    int x ; 
    cin >> x;

    cout << searchBin(Arr, n, x);

    return 0;
}