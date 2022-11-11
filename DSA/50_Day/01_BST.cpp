#include <bits/stdc++.h>
using namespace std ;

struct node {
    int data;
    node *left;
    node *right;
    node() : data(0), left(nullptr), right(nullptr) {}
    node(int x) : data(x), left(nullptr), right(nullptr) {}
};

node *root = nullptr;

void buildTree(int &item)
{
    node *q = new node (item);
    if (!root) {
        root = q; 
        return;
    }

    node *prev = nullptr, *p = root;
    while(p) {
        prev = p;
        if (p->data > item) p = p->left;
        else p = p->right;
    } 

    if (prev->data > item) prev->left = q;
    else prev->right = q;

}

void createVector(node *root, vector<int> &pre) {
    if (!root) return;
    createVector(root->left, pre);
    pre.emplace_back(root->data);
    createVector(root->right, pre);
}

int main () {
    int n, x, k;
    cin >> n; 

    while(n--) {
        cin >> x; 
        buildTree(x);
    }
    
    cin >> k;
    vector<int> pre;

    createVector(root, pre);

    int counter = 0, sum = 0;
    while(true){
        if (counter == k) break;
        sum += pre[counter];
        counter++;
    }

    cout << sum << endl;
    return 0;
}