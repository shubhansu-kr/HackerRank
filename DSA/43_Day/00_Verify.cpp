// https://www.hackerrank.com/contests/cse205-16915-day43/challenges/binary-tree-traversalsearching-1-28066

#include <bits/stdc++.h>
using namespace std ;

struct TreeNode {
	int val;
	TreeNode *left, *right;

	TreeNode(int val)
	{
		val = val;
		left = right = NULL;
	}
};

TreeNode* buildTreeFromInorderPreorder(
	int inStart, int inEnd, int& preIndex, vector<int> preorder,
	unordered_map<int, int>& inorderIndexMap,
	bool& notPossible)
{
	if (inStart > inEnd) return NULL;

	int rootData = preorder[preIndex];
	TreeNode* root = new TreeNode(rootData);
	preIndex++;

	if (inorderIndexMap.find(rootData)
		== inorderIndexMap.end()) {
		notPossible = true;
		return root;
	}

	int inorderIndex = inorderIndexMap[rootData];
	if (!(inStart <= inorderIndex
		&& inorderIndex <= inEnd)) {
		notPossible = true;
		return root;
	}

	int leftInorderStart = inStart,
		leftInorderEnd = inorderIndex - 1,
		rightInorderStart = inorderIndex + 1,
		rightInorderEnd = inEnd;

	root->left = buildTreeFromInorderPreorder(
		leftInorderStart, leftInorderEnd, preIndex,
		preorder, inorderIndexMap, notPossible);

	if (notPossible)
		return root;

	root->right = buildTreeFromInorderPreorder(
		rightInorderStart, rightInorderEnd, preIndex,
		preorder, inorderIndexMap, notPossible);

	return root;
}

bool checkPostorderCorrect(TreeNode* root, int& postIndex, vector<int> postorder)
{
	if (!root) return true;

	if (!checkPostorderCorrect(root->left, postIndex, postorder)) return false;
	if (!checkPostorderCorrect(root->right, postIndex, postorder)) return false;
	return (root->val == postorder[postIndex++]);
}

void printPostorder(TreeNode* root)
{
	if (!root) return;

	printPostorder(root->left);
	printPostorder(root->right);

	cout << root->val << ", ";
}

void printInorder(TreeNode* root)
{
	if (!root) return;

	printInorder(root->left);
	cout << root->val << ", ";
	printInorder(root->right);
}

bool checktree(vector<int> preorder, vector<int> inorder, vector<int> postorder, int N)
{
	if (N == 0) return true;

	unordered_map<int, int> inorderIndexMap;
	for (int i = 0; i < N; i++)
		inorderIndexMap[inorder[i]] = i;

	int preIndex = 0;

	bool notPossible = false;

	TreeNode* root = buildTreeFromInorderPreorder(
		0, N - 1, preIndex, preorder, inorderIndexMap,
		notPossible);

	if (notPossible) return false;

	int postIndex = 0;

	return checkPostorderCorrect(root, postIndex, postorder);
}

int main () {
    vector<int> input;
    int x; 
    while(cin >> x){
        input.emplace_back(x);
    }
    int n = input.size();
    if (n < 9 || n > 30){
        cout << "Invalid input";
        return 0;
    } 
    vector<int> preOrder, inOrder, postOrder;
    for (int i = 0; i < n; ++i)
    {
        if (i < n/3){
            preOrder.emplace_back(input[i]);
        }
        else if(i < n*2/3) {
            inOrder.emplace_back(input[i]);
        }
        else {
            postOrder.emplace_back(input[i]);
        }
    }

    if (checktree(preOrder, inOrder, postOrder, n/3))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}