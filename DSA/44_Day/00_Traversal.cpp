#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int num)
    {
        left = NULL;
        val = num;
        right = NULL;
    }
};
int searchElement(TreeNode *root, int k, int dis);
TreeNode *solve(TreeNode *root, int num1, int num2);
TreeNode *createBST(TreeNode *root, int x);
int findDistance(TreeNode *root, int num1, int num2);

int main()
{
    TreeNode *root = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        root = createBST(root, x);
    }
    int num1, num2;
    cin >> num1 >> num2;
    cout << findDistance(root, num1, num2);
    return 0;
}

TreeNode *solve(TreeNode *root, int num1, int num2)
{
    if (root == NULL){return NULL;}
    if (root->val == num1 || root->val == num2){return root;}
    TreeNode *left = solve(root->left, num1, num2);
    TreeNode *right = solve(root->right, num1, num2);
    if (left != NULL && right != NULL){return root;}
    if (left == NULL && right == NULL){return NULL;}
    if (left != NULL){return solve(root->left, num1, num2);}
    return solve(root->right, num1, num2);
}
int searchElement(TreeNode *root, int k, int dis)
{
    if (root == NULL){return -1;}
    if (root->val == k){return dis;}
    int left = searchElement(root->left, k, dis + 1);
    if (left != -1){return left;}
    return searchElement(root->right, k, dis + 1);
}

int findDistance(TreeNode *root, int num1, int num2)
{
    TreeNode *lca = solve(root, num1, num2);
    int d1 = searchElement(lca, num1, 0);
    int d2 = searchElement(lca, num2, 0);
    return d1 + d2;
}

TreeNode *createBST(TreeNode *root, int x)
{
    if (root == NULL)
    {
        root = new TreeNode(x);
        return root;
    }
    if (x > root->val){root->right = createBST(root->right, x);}
    if (x < root->val){root->left = createBST(root->left, x);}
    return root;
}
