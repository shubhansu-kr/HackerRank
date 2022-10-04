// https://www.hackerrank.com/contests/cse205-16915-day27/challenges/queue-1-26108

#include <bits/stdc++.h>
using namespace std ;

int main () {
    int N ;
    cin >> N ;
    queue<string> race, temp;
    string x;
    while(N--){
        cin >> x ;
        race.push(x);
    }

    N = 3;
    while(N--){
        x = race.front();
        race.pop();
        race.push(x);

        while(race.size()){
            cout << race.front() << " ";
            temp.push(race.front());
            race.pop();
        }
        cout << "\n";
        race.swap(temp);
    }
    cout << race.front();
    return 0;
}