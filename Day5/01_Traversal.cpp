// https://www.hackerrank.com/contests/cse205-16915-day5/challenges/array-traversal-2-26108

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N, sum = 0; 
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int x; 
        cin >> x ;
        sum += x ;
    }
    cout << sum << endl;    
    return 0;
}