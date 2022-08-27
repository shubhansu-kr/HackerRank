// https://www.hackerrank.com/contests/cse205-16915-day5/challenges/array-insertion-2-16915

#include <bits/stdc++.h>
using namespace std ;

void insertElement(char Arr[], int &N, char z, int ind) {
    for (int i = N; i > ind; --i)
    {
        Arr[i] = Arr[i-1];
    }
    Arr[ind] = z;
    ++N;
}

int main () {
    int N; 
    int size ;
    cin >> size;
    if (size <= 0 || size > 20) {
        cout << "Invalid size of array" << endl;
        return 0;
    }
    char Arr[2*size];
    int i = 0;
    do{
        cin >> Arr[i];
        ++i;
    }while(Arr[i-1] != '\0');
    N = i-1;
    for (int i = 0; i < N; ++i)
    {
        if (Arr[i] >= 'A' && Arr[i] <= 'Z') {
            insertElement(Arr, N, Arr[i]+32, i+1);
        }
    }
    for (int i = 0; i < N; ++i)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}