// https://www.hackerrank.com/contests/cse205-16915-day2/challenges/linearsearch-2-22176

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N ;
    cin >> N ;
    int Arr[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> Arr[i];
    }
    
    int maxMarks = -1e9, maxInd = -1;
    for (int i = 0; i < N; ++i)
    {
        if (Arr[i] > maxMarks) {
            maxMarks = Arr[i];
            maxInd = i;
        }
    }
    
    cout << maxInd << endl;
    return 0;
}