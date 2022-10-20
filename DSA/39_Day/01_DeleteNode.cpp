// https://www.hackerrank.com/contests/cse205-16915-day39/challenges/delete-node-linked-list-26199

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

ListNode *deleteNode (ListNode *head, int pos) {
    ListNode *p = head, *prev = nullptr;
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
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
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
    ListNode *p = head;
    while(p) {
        cout << p->val<< " ";
        p = p->next;
    }
    return 0;
}