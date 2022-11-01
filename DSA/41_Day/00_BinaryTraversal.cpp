// https://www.hackerrank.com/contests/cse205-16915-day41/challenges

#include <bits/stdc++.h>

using namespace std;

int pi = 0;

void preorder_init(int *inorder, int *postorder, int ini, int ine, stack<int> &st, map<int, int> mp)
{
    if (ini > ine)
        return;
    int num = postorder[pi];
    int inind = mp[num];
    pi--;
    preorder_init(inorder, postorder, inind + 1, ine, st, mp);
    preorder_init(inorder, postorder, ini, inind - 1, st, mp);
    st.push(num);
}

void print_preorder(int *inorder, int *postorder, int n)
{
    int k = n;
    pi = k - 1;
    map<int, int> mp;
    stack<int> st;
    for (int i = 0; i < n; i++)
        mp[inorder[i]] = i;
    preorder_init(inorder, postorder, 0, k - 1, st, mp);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    string in, post;
    getline(cin, in);
    getline(cin, post);
    string ino[in.length()], posto[in.length()];
    int ini = 0;
    string word = "";
    for (int i = 0; i < in.length(); i++)
    {
        char ch = in[i];
        if (ch != ' ')
            word += ch;
        else
        {
            ino[ini++] = word;
            word = "";
        }
    }
    ino[ini++] = word;
    word = "";
    int posti = 0;
    for (int i = 0; i < post.length(); i++)
    {
        char ch = post[i];
        if (ch != ' ')
            word += ch;
        else
        {
            posto[posti++] = word;
            word = "";
        }
    }
    posto[posti++] = word;
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