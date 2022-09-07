// https://www.hackerrank.com/contests/cse205-16915-day13/challenges/linkedlist-traversing-2-26199/problem

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
    if (n < 1) {
        cout << "Invalid Number" << endl;
        return nullptr;
    }
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= x/2; ++i)
    {
        if (x % i == 0) return false;
    }
    return true; 
}

int countPrime (ListNode * head) {
    ListNode * p = head; 
    int count = 0;
    while(p) {
        if (isPrime(p->val)) ++count;
        p = p->next;
    }   
    return count; 
}

int main () {
    ListNode * head = createList();
    if (!head) return 0;
    cout << countPrime(head);

    return 0;
}