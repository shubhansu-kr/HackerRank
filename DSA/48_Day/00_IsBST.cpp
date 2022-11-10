// https://www.hackerrank.com/contests/cse205-16915-day48/challenges/is-binary-search-tree

#include <bits/stdc++.h>
using namespace std ;


struct Node {
	int data;
	Node* left;
	Node* right;
};

bool checkBST(Node* root) {
	if (!root) return true;

    int l = INT_MIN, r = INT_MAX, n = root->data;
    if (root->right) r = root->right->data;
    if (root->left) l = root->left->data;

    if (n <= l || n >= r) return false;

    return checkBST(root->left) && checkBST(root->right);
}

int main () {
    
    return 0;
}