// https://www.hackerrank.com/contests/cse205-16915-day33/challenges/queue-2-16856

#include <bits/stdc++.h>
using namespace std ;

class Queue{
    stack<int> s1, s2;
public: 
    void enqueue(int val){
        stack<int> temp;
        s2.push(val);
        while(s1.size()){
            temp.push(s1.top());
            s1.pop();
        }
        while(temp.size()){
            s2.push(temp.top());
            temp.pop();
        }
        s1.swap(s2);
    }

    void dequque() {
        if (s1.size()) s1.pop();
    }

    int front() {
        if (s1.size()){return s1.top();}
        return -1;
    }
};

int main () {
    Queue Q1;
    int q, ch, x;
    cin >> q;
    while(q--) {
        cin >> ch;
        if (ch == 1) {
            cin >> x;
            Q1.enqueue(x);
        }
        else if (ch == 2) {
            Q1.dequque();
        }
        else {
            cout << Q1.front() << "\n";
        }
    }
    return 0;
}