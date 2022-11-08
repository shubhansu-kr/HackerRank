#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
} *root = NULL, *last = NULL;

void printGivenLevel(node *root, int level, int ltr);
int height(node *node);
node *newNode(int data);

void printSpiral(node *root)
{
  if (root == NULL)
        return; // NULL check
 
    // Create two stacks to store alternate levels
    stack<struct node*>
        s1; // For levels to be printed from right to left
    stack<struct node*>
        s2; // For levels to be printed from left to right
 
    // Push first level to first stack 's1'
    s1.push(root);
 
    // Keep printing while any of the stacks has some nodes
    while (!s1.empty() || !s2.empty()) {
        // Print nodes of current level from s1 and push
        // nodes of next level to s2
        while (!s1.empty()) {
            struct node* temp = s1.top();
            s1.pop();
            cout << temp->data << " ";
 
            // Note that is right is pushed before left
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }
        while (!s2.empty()) {
            struct node* temp = s2.top();
            s2.pop();
            cout << temp->data << " ";
 
            // Note that is left is pushed before right
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
}

void printGivenLevel(node *root, int level, int ltr)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
else if (level > 1)
    {
        if (ltr)
        {
            printGivenLevel(root->left, level - 1, ltr);
            printGivenLevel(root->right, level - 1, ltr);
        }
        else
        {
            printGivenLevel(root->right, level - 1, ltr);
            printGivenLevel(root->left, level - 1, ltr);
        }
    }
}

int height(node *node)
{
    if (node == NULL)
        return 0;
    else
    {

        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
node *newNode(int data)
{
    node *newnode = new node(data);
    return (newnode);
}
void insert(int key)
{
    node *p = root, *last = NULL;
    node *t = new node(key);
    t->left = t->right = NULL;
    if (root == NULL)
    {
        root = t;
        return;
    }
    else
    {
        while (p)
        {
            last = p;

            if (key == p->data)
            {

                return;
            }
            else if (key > p->data)
            {

                p = p->right;
            }
            else
            {

                p = p->left;
            }
        }
        if (last->data > key)
        {
            last->left = t;
        }
        else if (last->data < key)
        {
            last->right = t;
        }
    }
}
int main()
{
    int e;
    cin >> e;
    int t;
    if(e>0){
    while (e--)
    {
        cin >> t;
        insert(t);
    }
    printSpiral(root);}
    else cout<<"Tree root is empty";
    return 0;
}