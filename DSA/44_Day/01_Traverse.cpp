// https://www.hackerrank.com/contests/cse205-16915-day42/challenges/binary-tree-traversalsearching-2-16915

#include <bits/stdc++.h>
using namespace std ;

int preIndex = 0;
void printPost(vector<char> inOrder, vector<char> preOrder, int inStart, int inEnd, map<int, int> mp);
void postOrderTraversal(vector<char> inOrder, vector<char> preOrder, int n);

int main () {
    vector<char> input;
    char x;
    while(cin >> x){input.emplace_back(x);}
    int n = input.size();
    if (n < 6 || n > 20) {
        cout << "Invalid input\n";
        return 0;
    }

    vector<char> inOrder, preOrder;
    for (int i = 0; i < n; ++i)
    {
        if (i < n/2){preOrder.emplace_back(input[i]);}
        else {inOrder.emplace_back(input[i]);}
    }
    
    postOrderTraversal(inOrder, preOrder, n/2);
    return 0;
}

void postOrderTraversal(vector<char> inOrder, vector<char> preOrder, int n)
{
	map<int,int> mp ;
	for (int i = 0; i < n; i++)
	mp[inOrder[i]] = i;
	printPost(inOrder, preOrder, 0, n - 1, mp);
}

void printPost(vector<char> inOrder, vector<char> preOrder, int inStart, int inEnd, map<int, int> mp)
{
	if (inStart > inEnd) return;		
	int inIndex = mp[preOrder[preIndex++]];

	printPost(inOrder, preOrder, inStart, inIndex - 1, mp);
	printPost(inOrder, preOrder, inIndex + 1, inEnd, mp);
	cout << inOrder[inIndex] << " ";
}