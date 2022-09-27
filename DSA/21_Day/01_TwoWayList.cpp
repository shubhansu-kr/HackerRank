// https://www.hackerrank.com/contests/cse205-16915-day21/challenges/twoway-list-1-16856

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

Node *insertItem(Node *head, int item)
{
    Node *q = new Node(item);

    if (!head)
        return q;
    Node *p = head;
    if (item < p->data)
    {
        q->next = p;
        p->prev = q;
        return q;
    }
    if (p->next == nullptr)
    {
        p->next = q;
        q->prev = p;
        return p;
    }
    while (p->next && p->data < item)
    {
        p = p->next;
    }

    if (p->data < item)
    {
        p->next = q;
        q->prev = p;
    }
    else
    {
        q->next = p;
        q->prev = p->prev;
        p->prev->next = q;
        p->prev = q;
    }

    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        Node *head = nullptr, *back = nullptr;
        while (n != 0)
        {
            cin >> x;
            Node *p = new Node(x);
            if (head != nullptr)
            {
                back->next = p, p->prev = back, back = p;
            }
            else
            {
                head = p, back = head;
            }
            n = n - 1;
        }
        int item;
        cin >> item;
        head = insertItem(head, item);
        Node *s = head;
        while (s)
        {
            cout << s->data << " ";
            s = s->next;
        }
        cout << "\n";
    }
    return 0;
}