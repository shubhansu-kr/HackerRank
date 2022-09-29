// https://www.hackerrank.com/contests/cse205-16915-day24/challenges/queue-1-22176/problem

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N; 
    cin >> N ;

    if (N < 3 || N > 15) {
        cout << "Invalid Queue range" ;
        return 0;
    }

    queue<int> q;
    int x; 
    int flag = 1;
    while (N--) {
        cin >> x;
        if (flag) flag = x % 2;
        q.push(x);
    }
    if (flag) {
        cout << "No even element is there";
        return 0;
    }

    while(q.size()) {
        if (q.front()%2 == 0) cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    return 0;
}