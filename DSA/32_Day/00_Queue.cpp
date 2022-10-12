// https://www.hackerrank.com/contests/cse205-16915-day32/challenges/queue-2-26699

#include <bits/stdc++.h>
using namespace std ;

int main () {
    string s;
    getline(cin, s);
    if (s.length() >= 25) {
        cout << "Invalid Input\n";
        return 0; 
    }
    queue<char> name;
    int flag = 1;
    for(auto &x: s) {
        name.push(x);
        if (x == ','){
            name.pop();    
            flag = 0;
        }
        if (flag) name.pop();
    }
    while(name.size()){
        cout << name.front() ;
        name.pop();
    }

    return 0;
}