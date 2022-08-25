// https://www.hackerrank.com/contests/cse205-16915-day3/challenges/linear-search-2-16856

#include <bits/stdc++.h>
using namespace std ;

int main () {
    
    int *Arr = new int[10];
    int N;
    for (int i = 0; i < 10; ++i)
    {
        cin >> Arr[i];
    }
    int x ;
    cin >> x;
    for (int i = 0; i < N-1; ++i)
    {
        if (Arr[i] == x) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "ELEMENT NOT FOUND" << endl;    
    
    return 0;
}