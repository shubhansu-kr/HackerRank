// https://www.hackerrank.com/contests/cse205-16915-day38/challenges/spiral-traversal-of-matrix-2

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int M, N;
    cin >> M >> N;

    if (M < 1 || M > 99 || N < 1 || N > 99){
        cout << "Invalid Input" << endl;
        return 0;
    } 
    int mat[M][N], x;

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> x;
            mat[i][j] = x;
        }
    }
    
    int i = 0, j = 0;
    int flagi = 1, flagj = 1, sw = 0;
    int k = M * N;
    while(k--){
        cout << mat[i][j] << " ";
        mat[i][j] = -1;
        if (sw){
            i += flagi;
            if (i == M || i == -1 || mat[i][j] == -1){
                sw = 0;
                i -= flagi;
                j += flagj;
                flagi == 1? flagi = -1: flagi = 1;
            }
        }   
        else {
            j += flagj;
            if (j == N || j == -1 || mat[i][j] == -1){
                j -= flagj;
                i += flagi;
                flagj == 1? flagj = -1: flagj = 1;
                sw = 1;
            }
        }
    }

    return 0;
}