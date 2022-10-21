// 

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

ListNode *insertNode (ListNode *head, char item){
    // code goes here 
}


int main () {
    ListNode *head = createList();


    return 0;
}