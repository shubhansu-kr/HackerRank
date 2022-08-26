// https://www.hackerrank.com/contests/cse205-16915-day4/challenges/array-insertion-2-26121

#include <bits/stdc++.h>
using namespace std;

int digitSum(int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void traversal(int *Arr, int &N)
{
    for (int i = 0; i < N; i++)
    {
        cout << Arr[i];
        if (i == N-1) continue;
        int spaceCount = 8 - to_string(Arr[i]).length();
        for (int k = 0; k < spaceCount; k++)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int size, N, element;
    cin >> size;
    cin >> N;
    int Arr[size+1];
    for (int i = 0; i < size; ++i)
    {
        if (i < N)
            cin >> Arr[i];
        else
            Arr[i] = 0;
    }
    cin >> element;

    if (N == size)
    {
        cout << "Insertion is not possible becouse Array Overflow.. !!" << endl;
        traversal(Arr, N);
        return 0;
    }

    // find location
    int ind = digitSum(element);
    while (ind > size)
    {
        ind = digitSum(ind);
    }
    --ind;

    if (ind >= N)
    {
        Arr[ind] = element;
        traversal(Arr, size);
        return 0;
    }

    // insert element
    for (int i = N; i > ind && i > 0; --i)
    {
        Arr[i] = Arr[i - 1];
    }
    Arr[ind] = element;
    ++N;
    traversal(Arr, size);

    return 0;
}