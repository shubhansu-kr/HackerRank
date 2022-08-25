// https://www.hackerrank.com/contests/cse205-16915-day3/challenges/arraydeletion2-24906

#include <bits/stdc++.h>
using namespace std ;

int main () {
    
    int *Arr = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        cin >> Arr[i]; 
    }
    int x; 
    cin >> x ;

    for (int i = 0; i < 10; ++i)
    {
        if (x == Arr[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "ELEMENTS NOT FOUND";
    
    return 0;
}