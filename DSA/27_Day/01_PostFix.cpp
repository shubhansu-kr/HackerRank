// https://www.hackerrank.com/contests/cse205-16915-day27/challenges/stack-2-27947/problem

#include <bits/stdc++.h>
using namespace std ;

int main () {
    string exp = "", sub;
    while(true) {
        if (!getline(cin, sub) || sub.empty()){break;}
        exp += sub;
    }

    int operandCount = 0, operatorCount = 0;
    for(auto &it: exp){
        if (it >= '0' && it <= '9'){
            operandCount++;
        }
        else {
            operatorCount++;
        }
    }

    if (operandCount-operatorCount != 1) {
        cout << "Invalid Input\n";
        return 0;
    }

    stack<int> q;
    int flag = 0;
    for(auto &it: exp){
        if (it >= '0' && it <= '9') {
            int x = it - '0';
            q.push(x);
        }
        else {
            if (q.size() < 2){
                flag = 1;
                break;
            }
            int b = q.top();
            q.pop();
            int a = q.top();
            q.pop();

            if (it == '+'){
                q.push(a + b);
            }
            else if (it == '-'){
                q.push(a - b);
            }
            else if (it == '*'){
                q.push(a * b);
            }
            else {
                q.push(a / b);
            }
        }
    }
    if (flag){
        cout << "Invalid Input\n";
        return 0;
    }
    cout << q.top() << "\n";

    return 0;
}