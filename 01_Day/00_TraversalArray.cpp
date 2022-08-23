// https://www.hackerrank.com/contests/cse205-16915-day1/challenges/coin-game-problem/problem

// Akash got a new coin game. In the coin game, Akash will only win the game if the total count is 56. Each coin will have value inscribed. Write a programming solution, to help Akash in counting total value of coins at the end of the game. Coin Game is played N times.

// Note: Player will have exactly K coins at the end of the game.

#include <bits/stdc++.h>
using namespace std;

bool isWinner(int Arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += Arr[i];
    }
    return sum == 56;
}

int main()
{
    int Arr[7], N;

    cin >> N;

    while (N--)
    {
        for (int i = 0; i < 7; ++i)
        {
            cin >> Arr[i];
        }
        cout << isWinner(Arr, 7) << endl;
    }

    return 0;
}