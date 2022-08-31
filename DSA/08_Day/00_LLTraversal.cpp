// https://www.hackerrank.com/contests/cse205-16915-day8/challenges/linked-list-traversing-2-16915

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
    int x = 0 ;
    ListNode * head = nullptr, *prev = nullptr; 
    while (true) {
        cin >> x ;
        if (x == -1) break;
        ListNode *p = new ListNode(x); 
        if (head != nullptr) {
            prev->next = p;
            prev = p;
        }
        else {
            head = p;
            prev = head;
        }
    }
    return head;
}

int traverseList (ListNode * head) {
    int count = 0 ;
    ListNode * p = head;
    while (p) {
        if (p->val % 2 == 0) ++count;
        p = p->next;
    }
    return count; 
}

int main () {
    
    ListNode * head = createList();
    int evenNode = traverseList(head);
    if (evenNode) {
        cout << evenNode << endl;
    }
    else {
        cout << "No even number present" << endl;
    }
    return 0;
}