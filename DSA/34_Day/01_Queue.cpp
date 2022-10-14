// https://www.hackerrank.com/contests/cse205-16915-day34/challenges/queue-2-21482

#include <bits/stdc++.h>
using namespace std ;

void traverse(queue<int> q){
    while (q.size()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return;
}

int main () {
    int items, operations;
    cin >> items >> operations;
    if (items <= 0 || items >= 50 || operations <= 0 || operations >= 10) {
        cout << "Invalid Input\n";
        return 0;
    }
    int element, choice;
    queue<int> que;
    while(items--){
        cin >> element;
        que.push(element);
    }
    while(operations--){
        cin >> choice;
        if (choice == 1){
            que.push(que.front()); 
            que.pop();
        } 
        else {
            que.pop();
        }
    }
    
    traverse(que);
    return 0;
}