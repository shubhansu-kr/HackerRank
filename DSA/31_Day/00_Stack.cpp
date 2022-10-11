// https://www.hackerrank.com/contests/cse205-16915-day30/challenges/stack-1-16915

#include <bits/stdc++.h>
using namespace std ;

class Stack{
    queue<int> q, temp;
public: 
    void push(int x){
        temp.push(x);
        while(q.size()){
            temp.push(q.front());
            q.pop();
        }
        q.swap(temp);
    }
    void pop() {
        if (q.empty()) return;
        q.pop();
    }
    int top() {
        if (q.empty()) return -1;
        return q.front();
    }
    void display(){
        if (q.empty()) {
            cout << "-1";
            return;
        }
        stack<int> t;
        while(q.size()) {
            t.push(q.front());
            q.pop();
        }
        while(t.size()) {
            cout << t.top() << " ";
            t.pop();
        }
        cout << "\n";
    }
};

int main () {
    Stack s1;
    int x, ch;
    while(cin >> ch) {
        if (ch == 1) {
            // Push 
            cin >> x;
            s1.push(x);
        }
        else if (ch == 2) {
            // Pop
            s1.pop();
        }
        else {
            // display
            s1.display();
            break;
        }
    }
    return 0;
}