// https://www.hackerrank.com/contests/cse205-16915-day23/challenges/linkedlist-deletion-1-28066

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

ListNode *deleteNode(ListNode *head) {
    if (!head || !head->next) return head;
    ListNode *target, *last, *prev = nullptr, *p = head;
    int mini = -1;
    while(p) {
        if (p->val > mini) {
            mini = p->val;
            target = p;
            last = prev;
        }
        prev = p;
        p = p->next;
    }
    if(last) {last->next = target->next;}
    else {head = head->next;} 
    delete(target);
    return head;
}

void traverse(ListNode *head) {
    ListNode *p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << "\n";
}

int main () {
    ListNode *head = createList();
    head = deleteNode(head);
    traverse(head);
    return 0;
}