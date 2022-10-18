// https://www.hackerrank.com/contests/cse205-16915-day37/challenges/detect-whether-a-linked-list-contains-a-cycle

#include <bits/stdc++.h>
using namespace std ;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

bool has_cycle(SinglyLinkedListNode* head) {
    unordered_set<SinglyLinkedListNode*> freq;
    SinglyLinkedListNode *p = head;
    
    while(p) {
        if (freq.count(p)) return true;
        freq.insert(p);
        p = p->next;
    }   
    return false;

}

int main () {
    
    return 0;
}