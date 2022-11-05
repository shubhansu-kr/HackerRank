// https://www.hackerrank.com/contests/cse205-16915-day45/challenges/two-trees-are-identical-or-not

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int M, N;
    vector<int> tree1, tree2;
    int x, tempN, tempM;
    cin >> N;
    tempN = N;
    while(tempN--){
        cin >> x;
        tree1.emplace_back(x);
    }
    cin >> M;
    tempM = M;
    while(tempM--)
    {
        cin >> x; 
        tree2.emplace_back(x);
    }

    if (M != N){
        cout << "Both trees are not identical";
        return 0;
    }    

    for (int i = 0; i < tree1.size(); ++i)
    {
        if (tree1[i] != tree2[i]){
            cout << "Both trees are not identical" ;
            return 0;
        }
    }
    
    cout << "Both trees are identical" ;
    return 0;
}