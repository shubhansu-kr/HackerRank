// https://www.hackerrank.com/contests/cse205-16915-day15/challenges/linked-list-traversing-1-28066

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

int main () {
    ListNode * head = createList();

    ListNode * p = head;
    int sum = 0;
    while (p) {
        if (p->val % 2 == 1) sum += p->val;
        p = p->next;
    }
    if (sum) {
        cout << sum; 
    }
    else {
        cout << "No Even numbers Present";
    }
    return 0;
}