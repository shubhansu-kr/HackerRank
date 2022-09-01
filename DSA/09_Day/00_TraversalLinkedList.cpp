// https://www.hackerrank.com/contests/cse205-16915-day9/challenges/linked-list-traversing-1-28066-1

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
    cin >> n;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

int traverse(ListNode *head) {
    int count = 0 ;
    ListNode *p = head;
    while (p) {
        if (p->val > 18) ++count; 
        p = p->next; 
    }
    return count; 
}

int main () {
    ListNode * head = createList();
    cout << traverse(head);
    return 0;
}