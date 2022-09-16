// https://www.hackerrank.com/contests/cse205-16915-day20/challenges/linkedlistinsertion-2-24906

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
    int n = 6, x;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

ListNode *insertByIndex(ListNode *head, int &ind, int &val){
    if(!head) return head;
    ListNode *q = new ListNode(val);
    --ind;
    ListNode *p = head, *prev = nullptr;
    while(ind-- && p){
        prev = p;
        p = p->next;
    }
    if (prev) {
        prev->next = q;
        q->next = p;
    }
    else {
        q->next = head;
        head = q;
    }
    return head;
} 

int main () {
    ListNode *head = createList();
    int ind, val;
    cin >> ind >> val;
    head = insertByIndex(head, ind, val); 
    ListNode*p = head;
    while(p) {
        cout << p->val << " ";
        p =  p->next;
    }

    return 0;
}