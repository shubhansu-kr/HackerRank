// https://www.hackerrank.com/contests/cse205-16915-day39/challenges/delete-node-linked-list-26199

#include <bits/stdc++.h>
using namespace std ;

struct node {
    int val;
    node * next;
    node():val(0), next(nullptr){}
    node(int val):val(val), next(nullptr){}
};

node *deleteNode (node *head, int pos) {
    node *p = head, *prev = nullptr;
    while(pos--){
        prev = p;
        p = p->next;
    } 
    if (prev){
        prev->next = p->next;
    }
    else {
        head = head->next;
    }
    delete(p);
    return head;
}

int main () {
    int n, x;
    cin >> n;
    int size = n;
    node * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        node *p = new node(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }

    int pos;
    cin >> pos;
    if (pos < 0 || pos >= size){
        cout << "Invalid Position" << endl;
        return 0;
    }
    if (size == 1){
        cout << "SLL is Empty" << endl;
        return 0;
    }

    head = deleteNode(head, pos);
    node *p = head;
    while(p) {
        cout << p->val<< " ";
        p = p->next;
    }
    return 0;
}