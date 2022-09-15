// https://www.hackerrank.com/contests/cse205-16915-day19/challenges

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
    if (n < 6 || n > 9) return nullptr;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

// Let's consider all the cased 
ListNode *operate(ListNode *head) {
    if (!head || !head->next) return head;
    ListNode *p1 = head->next, *p2 = head, *prev = nullptr;

    while(p1) {
        if (p1->val == p2->val) {
            if(prev) {
                int x = prev->val;
                if (p1->next) x += p1->next->val;
                ListNode *q = new ListNode(x);
                p2->next = q;
                p2->next = p1;
            }
            else {
                ListNode *q = new ListNode(p1->next->val);
                p2->next = q;
                q->next = p1;
            }
        }
        prev = p2;
        p2 = p1;
        p1 = p1->next;
    }
    return head;
}


int main () {
    
    ListNode *head = createList();
    if (!head){
        cout << "Invalid Input" << endl;
        return 0;
    }

    ListNode *q = head;
    while(q) {
        cout << q->val << " ";
        q = q->next;
    }
    head = operate(head);
    ListNode *p = head;
    cout << endl; 
    while(p){
        cout << p->val << " ";
        p = p->next;
    }
    return 0;
}

// print the unmodified val
// ListNode *operate(ListNode *head) {
//     if (!head || !head->next) return head;
//     ListNode *front = head->next, *mid = head, *rear = nullptr;
//     while(front) {
//         rear = mid;
//         mid = front;
//         front = front->next;
//         if (!front) break;
//         if (front->val == mid->val) {
//             if (!front->next) break;
//             int x = rear->val+front->next->val;
//             ListNode *q = new ListNode(x);
//             mid->next = q;
//             q->next = front;
//         }
//     }
//     return head;
// }

// Print : the updated val 
// ListNode *operate(ListNode *head) {
//     if (!head || !head->next) return head;
//     ListNode *front = head->next, *mid = head, *rear = nullptr;
//     int flag = 1;
//     while(front) {
//         if (flag) rear = mid;
//         mid = front;
//         front = front->next;
//         flag = 1;
//         if (!front) break;
//         if (front->val == mid->val) {
//             if (!front->next) break;
//             int x = rear->val+front->next->val;
//             ListNode *q = new ListNode(x);
//             mid->next = q;
//             q->next = front;
//             flag = 0;
//             rear = q;
//         }
//     }
//     return head;
// }