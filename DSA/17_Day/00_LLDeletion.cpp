// https://www.hackerrank.com/contests/cse205-16915-day17/challenges/linkedlist-deletion-2-28066

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

ListNode *deleteElementByIndex(ListNode *head, int x) {
    if (!head) return head;

    ListNode * p = head;

    if (x == 1) {
        head = head->next;
        delete(p);
        p = nullptr;
        return head;
    }
    --x;
    while(--x){
        p = p->next;
    }
    ListNode * q = p->next;
    p->next = q->next;
    delete (q);
    q = nullptr;
    return head;
}

int main () {
    ListNode * head = createList();
    int x ;
    cin >> x; 
    head = deleteElementByIndex(head, x);
    ListNode*p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    return 0;
}