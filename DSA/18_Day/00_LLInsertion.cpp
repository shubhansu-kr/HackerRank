// https://www.hackerrank.com/contests/cse205-16915-day18/challenges/linked-list-insertion-2-16920

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
    ListNode(int val, ListNode *next) : val(val), next(next) {}
};

ListNode *createList()
{
    int n, x;
    cin >> n;
    ListNode *head = nullptr, *prev = nullptr;
    while (n--)
    {
        cin >> x;
        ListNode *p = new ListNode(x);
        if (head != nullptr){prev->next = p, prev = p;}
        else{head = p, prev = head;}
    }
    return head;
}

ListNode *insertElement(ListNode *head, int &x)
{
    if (!head)
        return head;
    int isOdd = x % 2;

    ListNode *p = head, *prev = nullptr;
    ListNode *node = new ListNode(x);
    if (isOdd){while (p && p->val % 2 && p->val < x){prev = p;p = p->next;}}
    else{
        while (p && p->val % 2){prev = p;p = p->next;}
        while (p && p->val > x){prev = p;p = p->next;}
    }
    if (prev){prev->next = node,node->next = p;}
    else{node->next = head,head = node;}
    return head;
}

int main()
{
    ListNode *head = createList();

    int x;
    cin >> x;

    ListNode *p = head;
    while (p)
    {
        if (p->val == x){cout << "Duplicates are not allowed" << endl;return 0;}
        p = p->next;
    }
    head = insertElement(head, x);

    p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    
    return 0;
}