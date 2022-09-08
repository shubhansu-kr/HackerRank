// https://www.hackerrank.com/contests/cse205-16915-day14/challenges/linked-list-traversing-1-16915

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
    int x;
    cin >> x;
    ListNode * head = nullptr, *prev = nullptr;
    while (x != -1) {
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
        cin >> x ;
    }
    return head;
}

int main () {
    ListNode * head = createList();

    ListNode * p = head;
    int count = 0;
    while (p) {
        if (p->val % 2) ++count;
        p = p->next;
    }
    if (count) {
        cout << count; 
    }
    else {
        cout << "No odd number present";
    }
    return 0;
}