// https://www.hackerrank.com/contests/cse205-16915-day1/challenges/array-insertion-1-28066

#include <bits/stdc++.h>
using namespace std ;

void traverse (int *cards, int n) {
    for (int i = 0; i < n; ++i)
    {
        cout << cards[i] << " ";
    }
    cout << endl;
}

void insertCard (int *cards, int &n, int &element) {
    int i = n;
    while (cards[i-1] > element && i > 0) {
        cards[i] = cards[i-1];
        --i; 
    }
    cards[i] = element;
    ++n;
}

int main () {
    int cards[13], n, element;
    cin >> n ;
    for (int i = 0; i < n; ++i)
    {
        cin >> cards[i];
    }
    cin >> element;
    
    insertCard(cards, n, element);
    traverse(cards, n);
    return 0;
}

