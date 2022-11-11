// https://www.hackerrank.com/contests/cse205-16915-day49/challenges/binary-search-tree-height-22176-1

#include <bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class BST {
    TreeNode *root;
public: 
    int height = 0;
    BST(){root = nullptr;}
    void insertNode (int &item) {
        TreeNode * q = new TreeNode(item);
        if (!root) {
            root = q;
            return;
        }
        addNode(q, root, root);        
    }
    void addNode (TreeNode *p, TreeNode *prev, TreeNode *root, int i = 0){
        if (!root) {
            height = max(i, height);
            if (prev->val > p->val) prev->right = p;
            else prev->left = p;
            return ;
        }

        if (p->val < root->val) {addNode(p, root, root->left, i+1);}
        else {addNode(p, root, root->right, i+1);}
    }
};

int main () {
    BST b1;
    
    int n, x;
    cin >> n;

    if (n < 3 || n > 10) {
        cout << "NOT IN RANGE";
        return 0;
    }
    
    while(n--){
        cin >> x;
        b1.insertNode(x);
    }

    cout << b1.height << endl;
    return 0;
}