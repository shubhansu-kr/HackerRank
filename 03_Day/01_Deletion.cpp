// https://www.hackerrank.com/contests/cse205-16915-day3/challenges/arraydeletion2-24906

#include <bits/stdc++.h>
using namespace std ;

int main () {
    
    int N;
    cin >> N; 

    int *Arr = new int[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> Arr[i];
    }
    
    int ind; 
    cin >> ind;

    if (ind < 0 || ind >= N) {
        cout << "Invalid Input";
        return 0;
    }

    for (int i = ind; i < N-1; ++i)
    {
        Arr[i] = Arr[i+1];
    }
    --N;
    for (int i = 0; i < N; ++i)
    {
        cout << Arr[i];
    }
    cout << endl;
    return 0;
}