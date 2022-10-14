// https://www.hackerrank.com/contests/cse205-16915-day34/challenges/stack-1-27947

#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    stack<char> chStack;
    for (auto &it : s)
    {
        chStack.push(it);
    }
    for (auto &it : s)
    {
        if (it != chStack.top())
        {
            return false;
        }
        chStack.pop();
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    if (N < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    string s;
    while (N--)
    {
        cin >> s;
        if (check(s)) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}