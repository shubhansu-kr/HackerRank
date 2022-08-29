// https://www.hackerrank.com/contests/cse205-16915-day6/challenges/array-deletion-1-16920

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N; 
    cin >> N ;
    int Arr[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> Arr[i];
    }
    int element ;
    cin >> element; 
    int flag = 0;
    for (int i = 0; i < N; ++i)
    {
        if (!flag && Arr[i] == element) {
            flag = 1;
            continue;
        }
        if (flag) {
            Arr[i-1] = Arr[i];
        }
    }
    if (flag) --N;
    for (int i = 0; i < N; ++i)
    {
        cout << Arr[i] << " ";
    }
       
    return 0;
}