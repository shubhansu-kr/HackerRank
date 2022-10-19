// https://www.hackerrank.com/contests/cse205-16915-day38/challenges/middle-element-of-a-linked-list

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    char val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(char val):val(val), next(nullptr){}
    ListNode(char val, ListNode *next):val(val), next(next){}
};

ListNode *createList () {
    int n;
    char x;
    cin >> n;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}
int main () {
    ListNode *head = createList();

    ListNode *slow = head, *fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->val << endl;
    return 0;
}