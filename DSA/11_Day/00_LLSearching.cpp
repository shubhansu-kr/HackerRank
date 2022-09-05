// https://www.hackerrank.com/contests/cse205-16915-day11/challenges/linked-list-linear-search-2-27947

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    string val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(string val):val(val), next(nullptr){}
    ListNode(string val, ListNode *next):val(val), next(next){}
};

ListNode *createList () {
    int n;
    string x; 
    cin >> n;
    if(n < 5 || n > 29){ cout << "Invalid Input" << endl; return nullptr;}
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        for(auto &c: x) c = tolower(c);
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

int countViV(ListNode *head) {
    ListNode*p = head;
    int count = 0 ;
    while(p) {
        if (p->val == "vivek") ++count;
        p = p->next;
    }
    return count;
}

int main () {
    ListNode * head = createList();
    if(!head) return 0;
    int vivCount = countViV(head);
    cout << vivCount << endl;
    return 0;
}