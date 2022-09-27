// https://www.hackerrank.com/contests/cse205-16915-day21/challenges/twoway-list-1-16856

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next, *prev;
    ListNode():val(0), next(nullptr), prev(nullptr){}
    ListNode(int val):val(val), next(nullptr), prev(nullptr){}
    ListNode(int val, ListNode *next, ListNode *prev):val(val), next(next), prev(prev){}
};

ListNode *createList () {
    int n, x;
    cin >> n;
    ListNode * head = nullptr, *back = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {back->next = p, p->prev = back, back = p;}
        else {head = p,back = head;}
    }
    return head;
}

ListNode *insertItem(ListNode *head, int item) {
    ListNode *q = new ListNode(item);
    
    if (!head) return q;
    ListNode *p = head;
    if (item < p->val) {
        q->next = p;
        p->prev = q;
        return q;
    }
    if (p->next == nullptr) {
        p->next = q;
        q->prev = p;
        return p;
    }
    while(p->next && p->val < item) {
        p = p->next;
    }

    if (p->val < item) {
        p->next = q;
        q->prev = p;
    }
    else {
        q->next = p;
        q->prev = p->prev;
        p->prev->next = q;
        p->prev = q;
    }

    return head;
}

void traverse(ListNode *head) {
    ListNode *p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << "\n";
    return;
}

int main () {
    int t; 
    cin >> t ;
    while(t--) {
        ListNode *head = createList();
        int item;
        cin >> item;
        head = insertItem(head, item);
        traverse(head);
    }
    return 0;
}