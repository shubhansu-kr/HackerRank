// https://www.hackerrank.com/contests/cse205-16915-day2/challenges/array-deletion-1-27947

#include <bits/stdc++.h>
using namespace std ;

void deleteElement(int Arr[], int &ind, int &N) {
    for (int i = ind; i < N - 1; ++i)
    {
        Arr[i] = Arr[i+1];
    }
    --N;
}

int main () {
    int N;
    cin >> N ; 
    if (N == 1) {
        cout << "Invalid Input" << endl;
        return 0;
    }
    int Arr[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> Arr[i]; 
        if (Arr[i] > 1e5) {
            cout << "Invalid Input" << endl;
        }
        return 0;
    }
    
    for (int i = 1; i < N; ++i)
    {
        if (Arr[i] == Arr[i-1]) {
            deleteElement(Arr, i, N);
            --i;
        }
    }
    
    for (int i = 0; i < N; ++i)
    {
        cout << Arr[i] << " ";
    }
    

    return 0;
}