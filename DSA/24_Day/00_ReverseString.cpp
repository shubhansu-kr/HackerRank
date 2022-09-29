// https://www.hackerrank.com/contests/cse205-16915-day24/challenges/stack-2-16915

#include <bits/stdc++.h>
using namespace std ;

int main () {
    string s ;
    getline(cin, s);
    stack<char> st;
    for(auto &c: s) {
        st.push(c);
    }
    s = "";
    while(st.size()) {
        s += st.top();
        st.pop();
    }
    cout << s << "\n";
    return 0;
}