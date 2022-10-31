// https://www.hackerrank.com/contests/cse205-16915-day41/challenges

#include <bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void createTree(TreeNode *root, vector<int> &data);

int main () {
    vector<int> data;
    int x;
    while(cin >> x) {data.emplace_back(x);}
    if (data.size() < 6 || data.size() > 20) {
        cout << "Invalid input\n";
        return 0; 
    }
    TreeNode *root;
    createTree(root, data);
    return 0;
}