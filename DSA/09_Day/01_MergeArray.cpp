// https://www.hackerrank.com/contests/cse205-16915-day9/challenges/merge-array-16921

#include <bits/stdc++.h>
using namespace std ;

int m, n; 
int * createArr (int &a) {
    cin >> a ;
    if (a <= 0 || a > 20) {
        a = -1; 
        return nullptr;
    }
    int prev = -1e9;
    int * Arr = new int[a];
    for (int i = 0; i < a; ++i)
    {
        cin >> Arr[i] ;
        if (prev > Arr[i]) {
            a = -2;
            return nullptr;
        }
        prev = Arr[i];
    }
    return Arr;     
}

int * mergeArr(int *Arr1, int *Arr2) {
    int *newArr = new int[m+n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (Arr1[i] < Arr2[j]) {
            newArr[k] = Arr1[i];
            ++i, ++k;
        }
        else {
            newArr[k] = Arr2[j];
            ++j, ++k;
        }
    }
    while (i < m) {
        newArr[k] = Arr1[i];
        ++i, ++k;
    }
    while (j < n) {
        newArr[k] = Arr2[j];
        ++j, ++k;
    }
    return newArr;
}

int main () {
    
    int * Arr1 = createArr(m);
    if (m == -1) {cout << "Invalid Array"; return 0;}
    if (m == -2) {cout << "Incorrect Array Elements"; return 0;}
    int * Arr2 = createArr(n);
    if (n == -1) {cout << "Invalid Array"; return 0;}
    if (n == -2) {cout << "Incorrect Array Elements"; return 0;}
    
    int * newTeam = mergeArr(Arr1, Arr2);

    // Traverse the array 
    for (int i = 0; i < m+n; ++i)
    {
        cout << newTeam[i] << endl ;
    }
    
    return 0;
}