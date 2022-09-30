// https://www.hackerrank.com/contests/cse205-16915-day25/challenges/queueimplementation1-16921/problem

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N, x;
    cin >> N; 

    if (N < 3 || N > 10) {
        cout << "Invalid size\n";
        return 0; 
    }
    queue<int> q;
    q.push(INT_MIN);
    while (q.size() != N+1)
    {
        cin >> x;
        if (x >= q.back()) {q.push(x);}
    }
    q.pop();
    while(q.size()) {
        cout << q.front() << "\n";
        q.pop();
    }

    return 0;
}