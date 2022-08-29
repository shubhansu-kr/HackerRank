// https://www.hackerrank.com/contests/cse205-16915-day6/challenges/array-traversal-2-26699

#include <bits/stdc++.h>
using namespace std;

struct Result
{
    string * output1;
};

struct Result bleakNumbers (int input1, int input2[]) {

    Result obj;
    string ans[input1];
    for (int i = 0; i < input1; ++i)
    {
        if (checkBleak(input2[i])) {
            ans[i] = "BLEAK";
        }
        else {
            ans[i] = "SUPPORTED";
        }
    }
    obj.output1 = ans;
    return obj;
}

bool checkBleak (int n) {
    int x = log(n) / log(2);
    cout << x;
    for (int i = 1; i <= x; ++i)
    {
        int temp = n - i;
        int count = 0;
        while(temp) {
            if (temp % 2) {
                ++count;
            }
            temp /= 2;
        }
        if (count == i) return false; 
    }
    return true;
}


int perfectSum (int input1, int input2[], int input3) {
    vector<vector<int>> dp(input1, vector<int> (input3+1, -1));
    for (int i = 0; i < input1; ++i)
    {
        if (input2[i] == input3) {
            input2[i] = 0;
        }
    }
    
    int ans = solve(input1, input2, dp, input3) ;
    if (ans == 0) return 999;
    return ans;
}

int solve (int N, int input2[], vector<vector<int>> &dp, int k,int i = 0) {
    if (k == 0) return 1;
    if (i == N || k < 0) return 0;
    if(dp[i][k] != -1) return dp[i][k];
    int pick = solve(N, input2, dp, k - input2[i],  i+1);
    int noPick = solve (N, input2, dp, k, i+1);
    
    return dp[i][k] = pick + noPick;
}

int main()
{

    float x, sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        cin >> x;
        if (x > 100)
        {
            sum = sum + ((x * 8) / 10);
        }
        else
        {
            sum += x;
        }
    }
    cout << fixed << setprecision(2) << sum << endl; 
    return 0;
}