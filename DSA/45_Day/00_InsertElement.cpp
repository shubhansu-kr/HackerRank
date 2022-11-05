// https://www.hackerrank.com/contests/cse205-16915-day45/challenges/binary-search-tree-insertion

#include <bits/stdc++.h>
using namespace std ;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

Node * insert(Node * root, int data) {
    Node *q = new Node(data);
    if (!root) return q;
    Node *p = root, *prev = nullptr;
    while(p){
        prev = p;
        if (p->data > data) {
            p = p->left;
        }
        else {
            p = p->right;
        }
    }
    if (prev->data > data) {prev->left = q;}   
    else {prev->right = q;}
    return root;
}

int main () {
    
    return 0;
}