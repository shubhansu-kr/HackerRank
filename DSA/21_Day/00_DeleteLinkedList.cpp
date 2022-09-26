// https://www.hackerrank.com/contests/cse205-16915-day21/challenges/delete-node-linked-list-2-26199

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

ListNode *createList (int n) {
    int x;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        if (x < 0 || x > 1000) return nullptr;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    prev->next = head;
    return head;
}

ListNode *deleteHead(ListNode *head) {
    if (!head) return head;
    ListNode *p = head;
    while (p->next != head) {
        p = p->next;
    }
    if (p == head) {
        return nullptr;
    }
    p->next = head->next;
    delete(head);
    return p->next;
}

void traverseCLL (ListNode *head) {
    if (!head) {
        cout << "CLL is Empty" << endl;
        return;
    }
    ListNode* p = head;
    do
    {
        cout << p->val << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
    return;
}

int main () {
    int n; 
    cin >> n; 
    if (n < 0 || n > 1000) {
        cout << "Invalid Number" << endl;
        return 0;
    }
    if (n <= 0) {
        cout << "Underflow" << endl; 
        return 0;
    }

    ListNode *head = createList(n);
    if (!head) {
        cout << "Invalid Number" << endl; 
        return 0;
    }
    head = deleteHead(head);
    
    traverseCLL(head);
    return 0;
}