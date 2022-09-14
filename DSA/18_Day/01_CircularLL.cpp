// https://www.hackerrank.com/contests/cse205-16915-day18/challenges/circular-linklist-1-21482

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
    prev->next = head;
    return head;
}

ListNode * insertElement(ListNode *head, int &N, int &Z) {
    if (!head) return head;

    ListNode *p = head, *prev = nullptr;
    ListNode *node = new ListNode(Z);
    while(N--) {prev = p;p = p->next;}
    prev->next = node;
    node->next = p;
    return head;
}

int main () {
    int N, Z;
    cin >> N >> Z;

    ListNode *head = createList();
    head = insertElement(head, N, Z);

    ListNode *p = head;
    do
    {
        if(!p) break;
        cout << p->val << " ";
        p = p->next;
    } while (p!= head);
    

    return 0;
}