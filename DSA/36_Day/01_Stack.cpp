// Stack

#include <bits/stdc++.h>
using namespace std ;

int main () {
    stack<string> st;
    int ch, x;
    while(cin >> ch) {
        if (ch == 1) {
            cin >> x;
            string k;
            while(x--){
                cin >> k;
                st.push(k);
            }
        }
        else {
            cout << st.top() << endl;
            st.pop();
            break;
        }
    }
    while(st.size()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}