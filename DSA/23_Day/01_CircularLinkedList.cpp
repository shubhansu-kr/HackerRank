// https://www.hackerrank.com/contests/cse205-16915-day23/challenges/circularlinkedlist-2-26108

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

void printEven(ListNode *head) {
    if (!head) return;
    ListNode *p = head;
    while(p) {
        while(p) {
            if (p->val % 2 == 0){
                break;
            }
            p = p->next;
        }
        if (!p) break;
        ListNode *q = head;
        while(q && q != p->next) {
            if (q->val % 2 == 0) cout << q->val << " ";
            q = q->next;
        }
        cout << "\n";
        p = p->next;
    } 
}

int main () {
    ListNode *head = createList();
    printEven(head);
    return 0;
}