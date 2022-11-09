#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *insertNode(TreeNode *root, int num)
{
    if (root == NULL)
    {
        return new TreeNode(num);
    }
    if (num > root->val)
        root->right = insertNode(root->right, num);
    else if (num < root->val)
        root->left = insertNode(root->left, num);
    return root;
}

vector<int> ans;

void printInternalNode(TreeNode *root)
{
    if (root != NULL)
    {
        if (root->left != NULL or root->right != NULL)
            ans.push_back(root->val);
        printInternalNode(root->left);
        printInternalNode(root->right);
    }
}

int main()
{
    int n;
    cin >> n;

    if (n < 1)
    {
        cout << "Invalid Input";
        return 0;
    }

    int arr[n];
    TreeNode obj, *root = NULL;
    cin >> arr[0];
    root = insertNode(root, arr[0]);
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        insertNode(root, arr[i]);
    }
    printInternalNode(root);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}