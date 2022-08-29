// https://www.hackerrank.com/contests/cse205-16915-day4/challenges/assignment-problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, k = 6, Arr[6];
    cin >> N;
    if (N < 0 || N > 5)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    while (N--)
    {
        int maxD = INT_MIN;
        for (int i = 0; i < 6; ++i)
        {
            cin >> Arr[i];
            if (maxD < Arr[i]) {
                maxD= Arr[i];
            } 
        }
        cout << maxD << endl;
    }

    return 0;
}