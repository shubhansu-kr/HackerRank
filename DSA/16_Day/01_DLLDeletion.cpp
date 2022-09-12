// https://www.hackerrank.com/contests/cse205-16915-day16/challenges/doublylinkedlist-deletion-1-22176

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next, * prev;
    ListNode():val(0), next(nullptr), prev(nullptr){}
    ListNode(int val):val(val), next(nullptr), prev(nullptr){}
    ListNode(int val, ListNode *next, ListNode* prev):val(val), next(next), prev(prev){}
};

ListNode *createList (int N) {
    int x;
    ListNode * head = nullptr, *prev = nullptr;
    while (N--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p, p->prev=prev, prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

ListNode * deleteLastNode (ListNode * head) {
    if (!head || !head->next) return nullptr;
    ListNode * p = head;
    while(p->next->next) {
        p = p->next;
    }
    ListNode * q = p->next;
    p->next = nullptr;
    q->prev = nullptr;
    delete(q);
    return head;
}

int main () {
    int N;
    cin >> N; 
    if (N < 5 || N > 14) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    ListNode * head = createList(N);
    head = deleteLastNode(head);

    ListNode *p = head, *prev = nullptr;
    int flag = 1;
    while(p) {
        cout << p->val << " ";
        if (flag) prev = p, p = p->next;
        else p = p->prev;

        if (!p && flag) {
            cout << endl;
            flag = 0;
            p = prev;
        }
    }

    return 0;
}