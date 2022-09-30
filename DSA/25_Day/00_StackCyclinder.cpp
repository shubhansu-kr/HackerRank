// https://www.hackerrank.com/contests/cse205-16915-day25/challenges/stack2-28066

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int n1, n2, n3, s1 = 0, s2 = 0, s3 = 0;
    cin >> n1 >> n2 >> n3;
    int p1 = n1, p2 = n2, p3 = n3;
    vector<int> h1, h2, h3;
    int x;
    while(n1--) {cin >> x; h1.emplace_back(x); s1 += x;}
    while(n2--) {cin >> x; h2.emplace_back(x); s2 += x;}
    while(n3--) {cin >> x; h3.emplace_back(x); s3 += x;}

    // 3, 2, 1, 1, 1
    // 4, 3, 2
    // 1, 1, 4, 1

    int i = 0, j = 0, k = 0;
    int ans = 0;
 
    while(i < p1 && j < p2 && k < p3){
        if(s1 == s2 && s2 == s3){
            ans = s1;
            break;
        }
        if (s1 >= s2 && s1 >= s3) {
            s1 -= h1[i++];
        }
        else if (s2 >= s1 && s2 >= s3) {
            s2 -= h2[j++];
        }
        else if (s3 >= s2 && s3 >= s1) {
            s3 -= h3[k++];
        }
    }
    cout << ans << "\n";

    return 0;
}