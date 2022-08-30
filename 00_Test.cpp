// Test Section

#include <bits/stdc++.h>
using namespace std ;

int f3 (int a = 4, int b = 1) {
    if (2 < a && (3 & b)> (b-3)) {
        b = a+2;
        b = a+ 3;
        return 1 + f3(a, b+a);
    }
    a = 2 + a + b ;
    return a + 1 ;
}

int f1(int a = 2, int b = 7) {
    if ((a - 2) < (b & 4) && b > 5) {
        b = 2 + b + b;
        a = 3 + a + a;
        return f1(a+b, b) -b ;
    } 
    return b+1 ;
}

int f(int a = 8, int b = 7, int c = 0) {
    for (int i = 2; i < 6; ++i)
    {
        a = 9 + b ;
        if ((c&a&8) < (6&c)) {
            b = c+a;
            a = 8+c;
        }
    }
    return a+b;
}

int x(int a = 4, int b = 5, int c = 6 ){
    for (int c = 2; c < 6; c++)
    {
        a = 9 + b ;
        if ((c & 8 & a) < (6 & c)) {
            b = c + a;
            a = 8 + c; 
        }
    }
    return a + b ;
}

int main () {
    cout << x() << endl;

    return 0;
}