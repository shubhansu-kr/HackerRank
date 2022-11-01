// https://www.hackerrank.com/contests/cse205-16915-day41/challenges

#include <bits/stdc++.h>
using namespace std;
int pi = 0;

void preorder_init(int *inorder, int *postorder, int ini, int ine, stack<int> &st, map<int, int> hashMap);
void print_preorder(int *inorder, int *postorder, int n);

int main()
{
    string inOrder, postOrder;
    getline(cin, inOrder);
    getline(cin, postOrder);
    string ino[inOrder.length()], posto[inOrder.length()];
    int ini = 0;
    string soln = "";
    for (int i = 0; i < inOrder.length(); i++)
    {
        char ch = inOrder[i];
        if (ch != ' ') soln += ch;
        else
        {
            ino[ini++] = soln;
            soln = "";
        }
    }
    ino[ini++] = soln;
    soln = "";
    int posti = 0;
    for (int i = 0; i < postOrder.length(); i++)
    {
        char ch = postOrder[i];
        if (ch != ' ')
            soln += ch;
        else
        {
            posto[posti++] = soln;
            soln = "";
        }
    }
    posto[posti++] = soln;
    if (ini >= 3 and ini <= 10)
    {
        int inorder[ini], postorder[posti];
        for (int i = 0; i < ini; i++)
        {
            string num = ino[i];
            int n = 0;
            for (int j = 0; j < num.length(); j++)
            {
                n = n * 10 + (num[j] - 48);
            }
            inorder[i] = n;
        }
        for (int i = 0; i < posti; i++)
        {
            string num = posto[i];
            int n = 0;
            for (int j = 0; j < num.length(); j++)
            {
                n = n * 10 + (num[j] - 48);
            }
            postorder[i] = n;
        }
        print_preorder(inorder, postorder, ini);
    }
    else
        cout << "Invalid input";
    return 0;
}

void print_preorder(int *inorder, int *postorder, int n)
{
    int k = n;
    pi = k - 1;
    map<int, int> hashMap;
    stack<int> st;
    for (int i = 0; i < n; i++)
        hashMap[inorder[i]] = i;
    preorder_init(inorder, postorder, 0, k - 1, st, hashMap);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void preorder_init(int *inorder, int *postorder, int ini, int ine, stack<int> &st, map<int, int> hashMap)
{
    if (ini > ine) return;
    int num = postorder[pi];
    int inind = hashMap[num];
    pi--;
    preorder_init(inorder, postorder, inind + 1, ine, st, hashMap);
    preorder_init(inorder, postorder, ini, inind - 1, st, hashMap);
    st.push(num);
}