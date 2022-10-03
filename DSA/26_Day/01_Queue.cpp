// https://www.hackerrank.com/contests/cse205-16915-day26/challenges/queue-1-21482

#include <bits/stdc++.h>
using namespace std ;

int main () {
    queue<int> q;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x; 
        bool isPushed = x;
        if (isPushed) {
            int val ;
            cin >> val;
            q.push(val);
        }
        else {
            cout << q.front() << " ";
            q.pop();
        }
    }
    cout << "\n";
    return 0;
}