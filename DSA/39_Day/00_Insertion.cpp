// https://www.hackerrank.com/contests/cse205-16915-day39/challenges/linked-list-insertion-1-16920

#include <bits/stdc++.h>
using namespace std ;

bool isvowel(char v) {
    return (0x208222>>(v&0x1f))&1;
}

struct node {
    char val;
    node * next;
    node():val(0), next(nullptr){}
    node(char val):val(val), next(nullptr){}
};

node * insertNode (node *head, char item){
    if (!head) return nullptr;
    node *e = head, *prev = nullptr;
    node *r = new node(item);
    if (isvowel(item)) {
        while (e)   
        {
            if (prev){
                if (!isvowel(prev->val) && !isvowel(e->val))
                {
                    prev->next = r;
                    r->next = e;
                    return head;
                }
            }
            else {
                if (!isvowel(e->val)){
                    r->next = head;
                    return r;
                }
            }
            prev = e;
            e = e->next;
        }
        if (!isvowel(prev->val)){
            prev->next = r;
            r->next = e;
            return head;        
        }
    }
    else {
        if (!e || !e->next || !e->next->next){
            r->next = head;
            return r;
        }
        // length is greater than two now. 
        int k = 2;
        while(e && k--) {
            if (isvowel(e->val)){
                r->next = head;
                return r;
            }
            prev = e;
            e = e->next;
        }
        int flag1 = 0, flag2 = 0;
        node *a = nullptr;
        k = 2;
        while(e) {
            k++;
            if (isvowel(e->val)){
                if (flag1){
                    flag2 = k;
                    if (flag2 - flag1 < 3){
                        node *temp = a->next;
                        a->next = r;
                        r->next = a;
                        return head;
                    }
                    else {
                        flag1 = k;
                        flag2 = 0;
                        a = e;
                    }
                }
                else {
                    a = e;
                    flag1 = k;
                }
            }
            prev = e;
            e = e->next;
        }
        if (k - flag1 < 2) {
            r->next = a->next;
            a->next = r;
            return head;
        }
    }
    return nullptr;
}

int main () {
    int n; 
    char element;
    cin >> n;
    node * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> element ;
        node *e = new node(element);
        if (head != nullptr) {prev->next = e,prev = e;}
        else {head = e,prev = head;}
    }

    char item;
    cin >> item;

    head = insertNode(head, item);
    if (!head) {
        cout << "Can't be inserted";
        return 0; 
    }
    else {
        node *e = head;
        while(e) {
            cout << e->val << " ";
            e = e->next;
        }
        cout << "\n";
    }
    return 0;
}