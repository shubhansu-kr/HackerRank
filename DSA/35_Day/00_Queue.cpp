// https://www.hackerrank.com/contests/cse205-16915-day35/challenges/queue-2-26108

#include <bits/stdc++.h>
using namespace std ;

int main () {
    deque<int> deck;
    int N, K, x;
    cin >> N;
    while(N--){
        cin >> x; 
        deck.push_back(x);
    }
    cin >> K;
    queue<int> st;
    while(K--){
        st.push(deck.front());
        deck.pop_front();
    }
    while (st.size())
    {
        deck.push_front(st.front());
        st.pop();
    }
    
    while(deck.size()){
        cout << deck.front() << " ";
        deck.pop_front();
    }

    return 0;
}