// https://www.hackerrank.com/contests/cse205-16915-day17/challenges/twowaylinkedlistdeletion1

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

ListNode * deleteNode (ListNode * head, int x) {
    if (!head || !head->next) return head;
    ListNode * p = head;
    while(p->val == x) {
        if (p->next == nullptr) return head;
        ListNode * q = p;
        head = head->next;
        head->prev = nullptr;
        delete(q);
        p = head;
    }
    p = p->next;
    while(p) {
        if (p->next == nullptr) return head;
        if (p->val == x) {
            ListNode *q = p->prev;
            q->next = p->next;
            p->next->prev = q;
            delete(p);
            p = q->next;
        }
        else p = p->next;
    }
    return head;
}

int main () {
    int N;
    cin >> N; 
    if (N < 3 || N > 20) {
        cout << "Invalid list size" << endl;
        return 0;
    }

    ListNode * head = createList(N);

    int x ;
    cin >> x;

    int count = 0;
    ListNode * run = head;
    while(run) {
        if (run->val == x) ++count;
        run = run->next;
    }
    if (count < 2) {
        cout << "Deletion not possible" << endl;
        return 0;
    }

    head = deleteNode(head, x);

    ListNode * p = head;
    while(p->next) {
        p = p->next;
    }
    while(p) {
        cout << p->val << endl;
        p = p->prev;
    }

    return 0;
}