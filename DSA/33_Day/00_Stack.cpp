// https://www.hackerrank.com/contests/cse205-16915-day33/challenges/stack-application-1-26121

#include <bits/stdc++.h>
using namespace std ;

int main () {
    string exp;
    cin >> exp;

    stack<int> st;
    for(auto &it: exp) {
        if (it == '{' || it == '(' || it == '[') {
            st.push(it);
        }
        else if (it == '}' && !st.empty() && st.top() == '{' || it == ']' && !st.empty() && st.top() == '[' || it == ')' && !st.empty() && st.top() == '(') {
            st.pop();
        }
        else {
            cout << "Not Balanced";
            return 0;
        }
    }
    if (st.size()){
        cout << "Not Balanced";
        return 0;
    }
    cout << "Balanced";

    return 0;
}