// https://www.hackerrank.com/contests/cse205-16915-day31/challenges/stack-application-2-26121

#include <bits/stdc++.h>
using namespace std ;

int main () {
    string s;
    cin >> s;
    string st = s;
    reverse(st.begin(), st.end());
    if (s == st) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome"; 
    }
    return 0;
}