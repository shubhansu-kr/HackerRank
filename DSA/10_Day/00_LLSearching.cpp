// https://www.hackerrank.com/contests/cse205-16915-day10/challenges/linked-list-searching-2-16920

#include <bits/stdc++.h>
using namespace std ;

struct node
{
    char grade;
    int roll_number;
    node *next;
};

node *start = NULL, *last = NULL;

void add_node()
{
    int roll;
    char grade;
    cin >> roll >> grade;
    node *p = new node;
    p->roll_number = roll;
    p->grade = grade;

    if (start) {
        last->next = p;
        last = p;
    }
    else {
        start = last = p ;
    }
}

void search(int roll)
{
    node * p = start; 
    while (p) {
        if (p->roll_number == roll) {
            cout << "You have secured "<< p->grade <<" grade" << endl;
            return;
        }
        p = p->next;
    }
    cout << "You have not appeared for the Contest-1" << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     
    int n ;
    cin >> n;

    while(n--) {
        add_node();
    }
    
    int roll;
    cin >> roll ;

    search(roll);
    return 0;
}