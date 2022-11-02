// https://www.hackerrank.com/contests/cse205-16915-day42/challenges/traversal2-24906

#include<bits/stdc++.h>
using namespace std;

void leafNode(vector<int> &input, int n)
{
	stack<int> st;
	for (int i = 0, j = 1; j < n; ++i, ++j)
	{
		bool flag = false;
		if (input[i] > input[j]) st.push(input[i]);
		else
		{
			while (!st.empty())
			{
				if (input[j] > st.top())
				{
					st.pop();
					flag = true;
				}
				else break;
			}
		}
		if (flag) cout << input[i] << " ";
	}
	cout << input[n - 1];
}

int main()
{
    vector<int> input;
    int n, x;
    cin >> n;
	
    while(n--){
        cin >> x;
        input.emplace_back(x);
    }

	leafNode(input, input.size());
	return 0;
}
