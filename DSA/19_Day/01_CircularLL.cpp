// https://www.hackerrank.com/contests/cse205-16915-day19/challenges/circularlinkedlist-2-26108/problem

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
    prev->next = head;
    return head;
}

void print(ListNode *head, ListNode *tail) {
    ListNode *p = head;
    while(true) {
        if (p->val % 2 == 0) {
            cout << p->val << " ";
        }
        if (p == tail) break;
        p = p->next;
    }
    cout << endl;
}

void traverse(ListNode *head) {
    ListNode *p = head;
    do
    {
        if (p->val % 2 == 0) {
            print(head, p);
        }
        p = p->next;
    } while (p != head);
    return;
}

int main () {
    ListNode *head = createList();
    traverse(head);
    return 0;
}