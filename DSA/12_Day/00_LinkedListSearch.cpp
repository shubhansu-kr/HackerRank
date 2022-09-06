// https://www.hackerrank.com/contests/cse205-16915-day12/challenges/linkedlistsearching2-24906

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
    int n = 5, x;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

int searchList(ListNode *head) {
    int maxi = -1e9;
    ListNode *p = head;
    while(p) { 
        if (maxi < p->val) {
            maxi = p->val;
        }
        p = p->next;
    }
    return maxi;
}

int main () {
    ListNode *head = createList();
    cout << searchList(head);
    return 0;
}