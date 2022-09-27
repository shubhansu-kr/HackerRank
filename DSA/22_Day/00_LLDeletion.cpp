// https://www.hackerrank.com/contests/cse205-16915-day22/challenges/linked-list-deletion-1-16915

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
    int x;
    cin >> x;
    ListNode * head = nullptr, *prev = nullptr;
    while (x != -1) {
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
        cin >> x ;
    }
    return head;
}

ListNode *deleteOdd (ListNode *head) {
    if (!head) return head;
    ListNode *p, *prev;
    int flag = 1;
    while(flag) {
        flag = 0;
        p = head, prev = nullptr;
        while(p){
            if (p->val % 2) {
                flag = 1;
                break;
            }
            prev = p;
            p = p->next;
        }
        if (!flag) continue;
        if (prev) {prev->next = p->next;}
        else {head = head->next;}
        delete(p);
        p = nullptr;
    }
    return head;
}

void traverse(ListNode *head) {
    if (!head) return;
    ListNode *p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << "\n";
    return;
}

int main () {
    
    ListNode *head = createList();
    int flag = 1;
    ListNode *p = head;
    while(p) {
        if (p->val % 2){
            flag = 0;
            break;
        }
        p = p->next;
    }
    if (flag) {
        cout << "No odd number present" << endl;
        return 0;
    }

    head = deleteOdd(head);
    traverse(head);
    return 0;
}