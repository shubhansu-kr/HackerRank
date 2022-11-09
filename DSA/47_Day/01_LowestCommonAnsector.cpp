// https://www.hackerrank.com/contests/cse205-16915-day47/challenges/binary-search-tree-lowest-common-ancestor

#include <bits/stdc++.h>
using namespace std;

Node *lca(Node *root, int v1, int v2)
{
    if (root == NULL) return NULL;
    int val = root->data;
    if (v1 < val && v2 < val)
        return lca(root->left, v1, v2);
    if (v1 > val && v2 > val)
        return lca(root->right, v1, v2);
    return root;
}

int main()
{

    return 0;
}