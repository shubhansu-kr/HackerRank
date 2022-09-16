// https://www.hackerrank.com/contests/cse205-16915-day20/challenges/doubly-insertion-1-26699

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    string val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(string val):val(val), next(nullptr){}
    ListNode(string val, ListNode *next):val(val), next(next){}
};

ListNode *createList () {
    string x;
    int n = 5;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

void traverse (ListNode *head){
    if (!head) return;
    traverse(head->next);
    cout << head->val << " ";
}

int main () {

    ListNode *head = createList();
    string x ;
    cin >> x; 
    ListNode * q = new ListNode(x);
    q->next = head;
    head = q;

    traverse(head);

    return 0;
}