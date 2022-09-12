// https://www.hackerrank.com/contests/cse205-16915-day16/challenges/linked-list-deletion-2-16915

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
    while (x > 0) {
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
        cin >> x ;
    }
    return head;
}

ListNode * deleteElement(ListNode * head, int &n) {
    if (n == 0) return head->next;
    ListNode *p = head;
    while(--n) {
        p = p->next;
    }
    ListNode *q = p->next;
    p->next = q->next;
    delete(q);
    return head;
}

ListNode* deleteEven(ListNode * head) {
    int flag = 1;
    while(flag) {
        flag = 0;
        ListNode * p = head;
        int i = 0;
        while(p) {
            if (p->val % 2 == 0) {
                flag = 1;
                break;
            }
            ++i;
            p = p->next;
        }
        if (flag) head = deleteElement(head, i);
    }
    return head;
}


int main () {
    ListNode * head = createList();
    ListNode *p = head;
    int flag = 1;
    while (p) {
        if (p->val % 2 == 0) {
            flag = 0;
            break;
        }
        p = p->next;
    }
    if (flag) {
        cout << "No even number present" << endl;
        return 0;
    }
    head = deleteEven(head);

    p = head;
    while (p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}