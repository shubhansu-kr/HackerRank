// Housefull

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N, x;

    cin >> N >> x; 
    if (N >= x) {
        cout << "Booked\n";
    } 
    else {
        cout << "Houseful\n";
    }

    return 0;
}