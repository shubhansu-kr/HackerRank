// https://www.hackerrank.com/contests/cse205-16915-day32/challenges/stack1-28066

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N, x;
    cin >> N;
    if (N < 3) {
        cout << "Invalid Input";
        return 0;
    }
    stack<int> st;
    while(cin >> x) {st.push(x);}

    bool isOdd = N % 2;
    N /= 2;

    while(N--){st.pop();}

    if (isOdd) {
        cout << st.top() << "\n";
        st.pop();
        cout << st.top() << "\n";
    }
    else {
        cout << st.top() << "\n";
        cout << st.top() << "\n";
    }
    
    return 0;
}