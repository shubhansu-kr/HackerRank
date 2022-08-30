// https://www.hackerrank.com/contests/cse205-16915-day7/challenges/array-insertion-2-1

#include <bits/stdc++.h>
using namespace std ;

void insertChar(char * person, int &n, int pos, char ele) {
    pos--;
    for (int i = n; i > pos; --i)
    {
        person[i] = person[i-1];
    }
    person[pos] = ele;
    ++n;
}

void traverse (char * person, int n) {
    for (int i = 0; i < n; ++i)
    {
        if (i == n-1) {
            cout << person[i] ;
            break;
        }
        cout << person[i] << "\t" ;
    }
    return ;
}

int main () {
    int n;
    cin >> n;
    char person[n+1];
    for (int i = 0; i < n; ++i)
    {
        cin >> person[i];
    }
    int pos;
    cin >> pos;

    if (pos < 1 || pos > n+1) {
        cout << "Invalid Position" << endl;
        return 0;
    }
    char ele; 
    cin >> ele;
    
    insertChar(person, n, pos, ele);
    traverse(person, n);
    return 0;
}