// https://www.hackerrank.com/contests/cse205-16915-day7/challenges/search-array-16921

#include <bits/stdc++.h>
using namespace std ;

int searchArr(char * Arr, int n) {
    int count = 0 ;
    for (int i = 0; i < n; ++i)
    {
        if (Arr[i] >=  'a' && Arr[i] <= 'z') ++count;
    }
    return count == 0? -1: count;
}

int main () {
    int n ;
    cin >> n ;
    if (n < 1 || n > 20) {
        cout << "Invalid array size";
        return 0 ;
    }
    char Arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> Arr[i] ;
    }

    cout << searchArr(Arr, n) << endl;
    
    return 0;
}