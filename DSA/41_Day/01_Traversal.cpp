// https://www.hackerrank.com/contests/cse205-16915-day41/challenges/traversal1-24906

#include <bits/stdc++.h>
using namespace std;

int pi = 0;
class TreeNode
{
public:
    TreeNode *left, *right;
    int val;
    TreeNode(){};
    TreeNode(int num)
    {
        left = NULL;
        val = num;
        right = NULL;
    }
};

void pre(int *in, int *post, int ini, int ine, stack<int> &st, map<int, int> mp);
void genPre(int *in, int *post, int *preorder, int n);
int isData(int *arr, int a, int b, int num);

TreeNode *genTree(int *in, int *preorder, int a, int b)
{
    static int pri = 0;
    if (a > b) return NULL;
    TreeNode *new_node;
    new_node = new TreeNode(preorder[pri++]);
    if (a == b)
        return new_node;
    int mid = isData(in, a, b, new_node->val);
    new_node->left = genTree(in, preorder, a, mid - 1);
    new_node->right = genTree(in, preorder, mid + 1, b);
    return new_node;
}

void traverse(struct TreeNode *root)
{
    if (root != NULL)
    {
        traverse(root->left);
        if (root->left == NULL and root->right == NULL)
            cout << root->val << " ";
        traverse(root->right);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int post[n], in[n];
    for (int i = 0; i < n; i++)
    {
        cin >> post[i];
        in[i] = post[i];
    }
    sort(in, in + n);
    int preorder[n];
    genPre(in, post, preorder, n);
    struct TreeNode *root = genTree(in, preorder, 0, n - 1);
    traverse(root);
    return 0;
}

int isData(int *arr, int a, int b, int num)
{
    for (int i = a; i <= b; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

void genPre(int *in, int *post, int *preorder, int n)
{
    int k = n;
    pi = k - 1;
    map<int, int> mp;
    stack<int> st;
    for (int i = 0; i < n; i++) mp[in[i]] = i;
    pre(in, post, 0, k - 1, st, mp);
    int i = 0;
    while (!st.empty())
    {
        preorder[i] = st.top();
        i++;
        st.pop();
    }
}

void pre(int *in, int *post, int ini, int ine, stack<int> &st, map<int, int> mp)
{
    if (ini > ine) return;
    int num = post[pi];
    int inind = mp[num];
    pi--;
    pre(in, post, inind + 1, ine, st, mp);
    pre(in, post, ini, inind - 1, st, mp);
    st.push(num);
}