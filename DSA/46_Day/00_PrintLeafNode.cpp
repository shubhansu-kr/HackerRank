#include <iostream>
using namespace std;

struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node *Newnode(int itemn)
{
    struct node *temp;
    temp = new node;
    temp->key = itemn;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node *insert(struct node *node, int itemn)
{
    if (node == NULL)
        return Newnode(itemn);
    if (node->key < itemn)
        node->right = insert(node->right, itemn);
    else
        node->left = insert(node->left, itemn);

    return node;
}
void findLeafNode(struct node *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        cout << root->key << " ";
        return;
    }
    if (root->right)
        findLeafNode(root->right);
    if (root->left)
        findLeafNode(root->left);
}

int main(int argc, char const *argv[])
{

    struct node *root = NULL;
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        
        cin >> num;
        root = insert(root, num);
    }
    findLeafNode(root);

    return 0;
}