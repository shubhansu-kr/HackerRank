// https://www.hackerrank.com/contests/cse205-16915-day30/challenges/queueimplementation2-16921

#include <bits/stdc++.h>
using namespace std ;

class Queue {
    vector<char> q;
    int f, r, n;
public:
    Queue(int k) {
        vector<char> temp(k, 0);
        q = temp;
        f = -1, r = 0, n = k;
    }
    
    // Add element to the queue
    bool enQueue(char value) {
        if (isFull()) return false;
        if (f == -1) f = 0;
        q[r] = value;
        r = (r + 1)%n;
        return true;
    }
    
    // Remove the first element from queue 
    bool deQueue() {
        if (isEmpty()) return false;
        f = (f + 1)%n;
        if (f == r) f = -1, r = 0;
        return true;
    }
    
    // Return the first element of the queue
    char Front() {
        if (isEmpty()) return -1;
        return q[f];
    }
    
    // Return the last element of the queue
    char Rear() {
        if (isEmpty()) return -1;
        if (r == 0) return q[n-1];
        return q[r-1];
    }
    
    // Tells if queue is empty or not
    bool isEmpty() {
        return f == -1;
    }
    
    // Tells if queue is full or not 
    bool isFull() {
        return (r == f);
    }
};

int main () {
    Queue q1(7);
    int ch;
    char x;
    while(cin >> ch) {
        if(ch == 1) {
            cin >> x;
            if (!q1.enQueue(x)){
                cout << "OVERFLOW\n";
                return 0;
            }
        }
        else if(ch == 2) {
            q1.deQueue();
        }
        else {
            cout << q1.Front() << "\n";
            cout << q1.Rear();
            return 0;
        }
    }
    return 0;
}