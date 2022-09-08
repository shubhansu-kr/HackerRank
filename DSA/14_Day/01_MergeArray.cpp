// https://www.hackerrank.com/contests/cse205-16915-day14/challenges/merge-array2-16921/problem

#include <bits/stdc++.h>
using namespace std ;

int main() {
    int m, n; 
    cin >> m;
    if (m < 1 || m > 20) {
        cout << "Invalid Array" << endl;
        return 0;
    }
    int *Arr1 = new int[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> Arr1[i];
    }
    
    cin >> n;
    if (n < 1 || n > 20 || m == n) {
        cout << "Invalid Array" << endl;
        return 0;
    }
    int *Arr2 = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> Arr2[i];
    }
    

    // check correct order
    int prev = 1e9;
    for (int i = 0; i < m; ++i)
    {
        if (prev < Arr1[i]) {
            cout << "Incorrect Array Elements" << endl;
            return 0;
        }
        prev = Arr1[i];
    }
    prev = 1e9;
    for (int j = 0; j < n; ++j)
    {
        if (prev < Arr2[j]) {
            cout << "Incorrect Array Elements" << endl;
            return 0;
        }
        prev = Arr2[j];
    }
    
    int *Arr = new int[m+n];
    
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (Arr1[i] > Arr2[j]) {
            Arr[k++] = Arr1[i++];
        }
        else {
            Arr[k++] = Arr2[j++];
        }
    }

    while (i < m) {
        Arr[k++] = Arr1[i++];
    }
    while (j < n) {
        Arr[k++] = Arr2[j++];
    }

    for (int i = 0; i < m+n; ++i)
    {
        cout << Arr[i] << endl;
    }
    
    return 0; 
}


// int m, n; 
// int * createArr (int &a) {
//     cin >> a ;
//     if (a <= 0 || a > 20) {
//         a = -1; 
//         return nullptr;
//     }
//     int prev = 1e9;
//     int * Arr = new int[a];
//     for (int i = 0; i < a; ++i)
//     {
//         cin >> Arr[i] ;
//         if (prev < Arr[i]) {
//             a = -2;
//             return nullptr;
//         }
//         prev = Arr[i];
//     }
//     return Arr;     
// }

// int * mergeArr(int *Arr1, int *Arr2) {
//     int *newArr = new int[m+n];
//     int i = 0, j = 0, k = 0;
//     while (i < m && j < n) {
//         if (Arr1[i] > Arr2[j]) {
//             newArr[k] = Arr1[i];
//             ++i, ++k;
//         }
//         else {
//             newArr[k] = Arr2[j];
//             ++j, ++k;
//         }
//     }
//     while (i < m) {
//         newArr[k] = Arr1[i];
//         ++i, ++k;
//     }
//     while (j < n) {
//         newArr[k] = Arr2[j];
//         ++j, ++k;
//     }
//     return newArr;
// }

// int main () {
    
//     int * Arr1 = createArr(m);
//     if (m == -1) {cout << "Invalid Array"; return 0;}
//     if (m == -2) {cout << "Incorrect Array Elements"; return 0;}
//     int * Arr2 = createArr(n);
//     if (n == -1) {cout << "Invalid Array"; return 0;}
//     if (n == -2) {cout << "Incorrect Array Elements"; return 0;}
    
//     int * newTeam = mergeArr(Arr1, Arr2);

//     // Traverse the array 
//     for (int i = 0; i < m+n; ++i)
//     {
//         cout << newTeam[i] << endl ;
//     }
    
//     return 0;
// }