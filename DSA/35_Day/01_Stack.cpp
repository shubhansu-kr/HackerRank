// 

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