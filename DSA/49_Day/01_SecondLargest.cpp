#include <iostream>
using namespace std;
class TreeNode
{
public:
    TreeNode *l;
    TreeNode *r;
    int d;
};

TreeNode *insertNode(TreeNode *root, int item)
{
    if (root == NULL)
    {
        root = new TreeNode;
        root->d = item;
        root->l = NULL;
        root->r = NULL;
        return root;
    }
    else if (item < root->d)
    {
        root->l = insertNode(root->l, item);
    }
    else
    {
        root->r = insertNode(root->r, item);
    }
    return root;
}

void findMaxNode(TreeNode *root, int &c)
{
    if (root == NULL || c >= 2)
    {
        return;
    }
    findMaxNode(root->r, c);
    c++;
    if (c == 3)
    {
        cout << "Right of " << root->d;
        return;
    }
    findMaxNode(root->l, c);
}

void findMax(TreeNode *root)
{
    int c = 0;
    findMaxNode(root, c);
}

int main()
{
    TreeNode *root = NULL;
    int item;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> item;
        root = insertNode(root, item);
    }
    findMax(root);
}