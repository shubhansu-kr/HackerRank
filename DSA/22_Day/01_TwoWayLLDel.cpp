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
    ListNode *p = head, *target = nullptr, *target1 = nullptr;
    while(p) {
        if (p->val == x) {
            target = target1;
            target1 = p;
        }        
        p = p->next;
    } 
    p = target->prev, target1 = target->next;
    if (p) {
        p->next = target1;
        target1->prev = p;
    }
    else {
        head = head->next;
    }
    delete(target);
    target = nullptr;
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