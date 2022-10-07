// https://www.hackerrank.com/contests/cse205-16915-day29/challenges/stack2-26199

#include <bits/stdc++.h>
using namespace std ;

int main () {
    string exp;
    cin >> exp;
    if (exp.length() > 10) {cout << "Stack Full\n" ; return 0;}

    stack<char> st;
    for(auto &it: exp) {
        if (it == '(') st.push(it);
        else {
            if(st.empty() || st.top() != '(') {
                cout << "Not Balanced\n";
                return 0;
            }
            st.pop();
        }
    }
    if (st.empty()){
        cout << "Balanced";
    }
    else {
        cout << "Not Balanced";
    }
    return 0;
}