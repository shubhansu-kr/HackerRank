// https://www.hackerrank.com/contests/cse205-16915-day40/challenges/linked-list-deletion-1-26121

#include <bits/stdc++.h>
using namespace std ;

bool isvowel(char v) {
    return (0x208222>>(v&0x1f))&1;
}

struct ListNode {
    char val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(char val):val(val), next(nullptr){}
    ListNode(char val, ListNode *next):val(val), next(next){}
};

ListNode *createList () {
    char x;
    int flag = 1;
    ListNode * head = nullptr, *prev = nullptr;
    while (cin >> x) {
        if (isvowel(x)) flag = 0;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    if (flag) return nullptr;
    return head;
}

ListNode *deleteNode(ListNode *head){
    if (!head) return head;
    ListNode *p = head, *prev = nullptr;
    while(p){
        if (isvowel(p->val)){
            if (prev){prev->next = p->next;}
            else {head = head->next;}
            p = p->next;
            continue;
        }
        prev = p;
        p = p->next;
    }
    return head;
}

int main () {
    ListNode *head = createList();
    if (!head){
        cout << "No vowel in linked list" << endl;
    }

    head = deleteNode(head);
    ListNode *p = head;
    while(p){
        if (!p->next) cout << p->val << "\n";
        else cout << p->val << "-->";
        p = p->next;
    }

    return 0;
}