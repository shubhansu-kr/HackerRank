// https://www.hackerrank.com/contests/cse205-16915-day40/challenges

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

ListNode *createList () {
    int n, x;
    n = 5;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

int main () {
    ListNode *head = createList();
    int item, pos;
    cin >> pos >> item;

    ListNode *p = head, *prev = nullptr; 
    while(p){
        if (!(--pos)) {break;}
        prev = p;
        p = p->next;
    }
    ListNode *q = new ListNode (item);
    if (prev) {
        prev->next = q;
        q->next = p;
    }
    else {
        q->next = head; 
        head = q;
    }

    p = head; 
    while(p){
        cout << p->val << " ";
        p = p->next;
    }

    return 0;
}