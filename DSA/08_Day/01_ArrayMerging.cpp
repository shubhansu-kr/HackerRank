// https://www.hackerrank.com/contests/cse205-16915-day8/challenges/arraymerging-22176

#include <bits/stdc++.h>
using namespace std ;

int m, n; 
int * createArr (int &n) {
    cin >> n ;
    int * Arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> Arr[i] ;
    }
    return Arr;     
}

int main () {
    int * Programmer = createArr(m);
    int * Automation = createArr(n);
    
    int * newTeam = new int[m+n];
    for (int i = 0; i < m+n; ++i)
    {
        if (i >= m) {
            newTeam[i] = Automation[i-m];
            continue;
        }
        newTeam[i] = Programmer[i];
    }
    
    // Traverse the array 
    for (int i = 0; i < m+n; ++i)
    {
        cout << newTeam[i] << " " ;
    }

    return 0;
}