// https://www.hackerrank.com/contests/cse205-16915-day39/challenges/linked-list-insertion-1-16920

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

ListNode * insertNode (ListNode *head, char item){
    if (!head) return nullptr;
    ListNode *p = head, *prev = nullptr;
    ListNode *q = new ListNode(item);
    if (isvowel(item)) {
        while (p)   
        {
            if (prev){
                if (!isvowel(prev->val) && !isvowel(p->val))
                {
                    prev->next = q;
                    q->next = p;
                    return head;
                }
            }
            else {
                if (!isvowel(p->val)){
                    q->next = head;
                    return q;
                }
            }
            prev = p;
            p = p->next;
        }
        if (!isvowel(prev->val)){
            prev->next = q;
            q->next = p;
            return head;        
        }
    }
    else {
        if (!p || !p->next || !p->next->next){
            q->next = head;
            return q;
        }
        // length is greater than two now. 
        int k = 2;
        while(p && k--) {
            if (isvowel(p->val)){
                q->next = head;
                return q;
            }
            prev = p;
            p = p->next;
        }
        int flag1 = 0, flag2 = 0;
        ListNode *a = nullptr;
        k = 2;
        while(p) {
            k++;
            if (isvowel(p->val)){
                if (flag1){
                    flag2 = k;
                    if (flag2 - flag1 < 3){
                        ListNode *temp = a->next;
                        a->next = q;
                        q->next = a;
                        return head;
                    }
                    else {
                        flag1 = k;
                        flag2 = 0;
                        a = p;
                    }
                }
                else {
                    a = p;
                    flag1 = k;
                }
            }
            prev = p;
            p = p->next;
        }
        if (k - flag1 < 2) {
            q->next = a->next;
            a->next = q;
            return head;
        }
    }
    return nullptr;
}

int main () {
    ListNode *head = createList();
    char item;
    cin >> item;

    head = insertNode(head, item);
    if (!head) {
        cout << "Can't be inserted";
        return 0; 
    }
    else {
        ListNode *p = head;
        while(p) {
            cout << p->val << " ";
            p = p->next;
        }
        cout << "\n";
    }
    return 0;
}