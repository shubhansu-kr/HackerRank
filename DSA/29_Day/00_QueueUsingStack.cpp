// https://www.hackerrank.com/contests/cse205-16915-day29/challenges/k1-using-two-stacks

#include <bits/stdc++.h>
using namespace std ;

int main () {

    stack<int> k1, k2;
    int swit = 1; 
    int q, ch, x;
    cin >> q;
    while(q--){
        cin >> ch;
        if (ch == 1) {
            cin >> x;
            if(swit) {
                swit = 0; 
                k2.push(x);
                while(k1.size()){
                    int x1 = k1.top();
                    k1.push(x1);
                    k1.pop();
                }
            }
            else {
                swit = 1;
                k1.push(x);
                while(k2.size()){
                    int x1 = k2.top();
                    k1.push(x1);
                    k2.pop();
                }
            }            
        }
        else if (ch == 2){
            if(swit) k1.pop();
            else k2.pop();
        }
        else if (ch == 3) {
            if (swit) cout << k1.top() << "\n";
            else cout << k2.top() << "\n";
        }
    }
    return 0;
}