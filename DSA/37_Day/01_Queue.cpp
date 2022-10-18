// https://www.hackerrank.com/contests/cse205-16915-day37/challenges/queue-2-22176

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int ch, n; 
    queue<string> spec;
    while(cin >> ch){
        if (ch == 1) {
            cin >> n;
            string s;
            while(n--){
                if (spec.size() == 9) {
                    cout << "No other spectator is allowed\n";
                    return 0;
                }
                cin >> s;
                spec.push(s);
            }
        }
        else {
            bool sw = 0;
            while(spec.size()){
                if (sw) {cout << spec.front() << " ";}
                sw ^= 1;
                spec.pop();
            }
            break;
        }
    }
    return 0;
}