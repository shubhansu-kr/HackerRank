// https://www.hackerrank.com/contests/cse205-16915-day50/challenges/binarytree-2-22176

#include <bits/stdc++.h>
using namespace std;

struct node
{
    node *left, *right;
    int data;
    node() : data(0), left(nullptr), right(nullptr) {}
    node(int x) : data(x), left(nullptr), right(nullptr) {}
};

node *root = NULL;

void counter(node *root, int &i);
void buildBST(int &charX);

int main()
{
    int n, x;
    cin >> n;

    if (n < 4 || n > 12)
    {
        cout << "Enter correct range";
        return 0;
    }

    while (cin >> x)
    {
        buildBST(x);
    }

    int x = 0;
    counter(root->left, x);
    cout << x << endl;
    return 0;
}

void buildBST(int &charX)
{
    node *q = new node(charX);

    node *prev = nullptr, *p = root;
    while (p)
    {
        prev = p;
        if (p->data < charX)
            p = p->right;
        else
            p = p->left;
    }

    if (!prev)
    {
        root = q;
        return;
    }

    if (prev->data > charX)
        prev->left = q;
    else
        prev->right = q;
}

void counter(node *root, int &i)
{
    if (!root)
        return;
    ++i;
    counter(root->left, i);
    counter(root->right, i);
}
