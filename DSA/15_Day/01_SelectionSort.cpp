// https://www.hackerrank.com/contests/cse205-16915-day15/challenges/selection-sort-2-26108

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int n ;
    cin >> n;
    string Arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> Arr[i] ;
    }
    
    for (int i = 0; i < n-1; ++i)
    {
        string minS = Arr[i]; 
        int ind = i;
        for (int j = i+1; j < n; ++j)
        {
            if (minS > Arr[j]) {
                ind = j; 
                minS = Arr[j];
            }
        }
        swap(Arr[i], Arr[ind]);
        for (int j = 0; j < n; ++j)
        {
            cout << Arr[j] << " " ;
        }
        cout << endl; 
    }
  
    return 0;
}