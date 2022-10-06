// https://www.hackerrank.com/contests/cse205-16915-day23/challenges/linkedlist-deletion-1-28066

// Stack

#include <bits/stdc++.h>
using namespace std ;

int main () {
    stack<string> st, t;
    int ch, x;
    while(cin >> ch) {
        if (ch == 1) {
            cin >> x;
            string k;
            while(x--){
                cin >> k;
                st.push(k);
            }
        }
        else {
            cout << st.top() << endl;
            st.pop();
        }
    }
    while(st.size()) {
        t.push(st.top());
        st.pop();
    }
    while(t.size()){
        cout << t.top() << endl;
        t.pop();
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std ;

// struct node {
//     int data;
//     node * next;
//     node():data(0), next(nullptr){}
//     node(int data):data(data), next(nullptr){}
// };

// int main () {
//     int n, x;
//     cin >> n;
//     node * head = nullptr, *prev = nullptr;
//     while (n--) {
//         cin >> x ;
//         node *p = new node(x);
//         if (head != nullptr) {prev->next = p,prev = p;}
//         else {head = p,prev = head;}
//     }
//     node *target, *last, *p = head;
//     prev = nullptr;
//     int mini = -1;
//     while(p) {
//         if (p->data > mini) {
//             mini = p->data;
//             target = p;
//             last = prev;
//         }
//         prev = p;
//         p = p->next;
//     }
//     if(last) {last->next = target->next;}
//     else {head = head->next;} 
//     delete(target);
 
//     p = head;
//     while(p) {
//         cout << p->data << " ";
//         p = p->next;
//     }
//     cout << "\n";

//     return 0;
// }

// https://www.hackerrank.com/contests/cse205-16915-day23/challenges/circularlinkedlist-2-26108

// #include <bits/stdc++.h>
// using namespace std ;

// struct node {
//     int data;
//     node * next;
//     node():data(0), next(nullptr){}
//     node(int data):data(data), next(nullptr){}
// };

// int main () {
//     int n, x;
//     cin >> n;
//     node * head = nullptr, *prev = nullptr;
//     while (n--) {
//         cin >> x ;
//         node *p = new node(x);
//         if (head != nullptr) {prev->next = p,prev = p;}
//         else {head = p,prev = head;}
//     }

//     node *a = nullptr, *b = nullptr;
//     node *p = head;
//     while(p) {
//         if (p->data % 2 == 0) {
//             node *q = new node(p->data);
//             if (a != nullptr) {b->next = q,b = q;}
//             else {a = q,b = a;}
//         }
//         p = p->next;
//     }

//     p = a;
//     while(p) {
//         p = p->next;
//         b = a;
//         while(b && b != p) {
//             cout << b->data << " ";
//             b = b->next;
//         }
//         cout << "\n";
//     }

//     return 0;
// }


// https://www.hackerrank.com/contests/cse205-16915-day17/challenges/twowaylinkedlistdeletion1

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next, *prev;
//     Node() : data(0), next(nullptr), prev(nullptr) {}
//     Node(int data) : data(data), next(nullptr), prev(nullptr) {}
//     Node(int data, Node *next, Node *prev) : data(data), next(next), prev(prev) {}
// };

// int main()
// {
//     int N;
//     cin >> N;
//     if (N < 3 || N > 20)
//     {
//         cout << "Invalid list size" << endl;
//         return 0;
//     };
//     int x;
//     Node *head = nullptr, *prev = nullptr;
//     while (N--)
//     {
//         cin >> x;
//         Node *p = new Node(x);
//         if (head != nullptr)
//         {
//             prev->next = p, p->prev = prev, prev = p;
//         }
//         else
//         {
//             head = p, prev = head;
//         }
//     }

//     cin >> x;

//     int count = 0;
//     Node *run = head;
//     while (run)
//     {
//         if (run->data == x)
//             ++count;
//         run = run->next;
//     }
//     if (count < 2)
//     {
//         cout << "Deletion not possible" << endl;
//         return 0;
//     }

//     Node *p = head, *target = nullptr, *target1 = nullptr;
//     while (p)
//     {
//         if (p->data == x)
//         {
//             target = target1;
//             target1 = p;
//         }
//         p = p->next;
//     }
//     p = target->prev, target1 = target->next;
//     if (p)
//     {
//         p->next = target1;
//         target1->prev = p;
//     }
//     else
//     {
//         head = head->next;
//     }
//     delete (target);
//     target = nullptr;

//     p = head;
//     while (p->next)
//     {
//         p = p->next;
//     }
//     while (p)
//     {
//         cout << p->data << endl;
//         p = p->prev;
//     }

//     return 0;
// }

// https://www.hackerrank.com/contests/cse205-16915-day22/challenges/linked-list-deletion-1-16915

// #include <bits/stdc++.h>
// using namespace std ;

// struct Node {
//     int data;
//     Node * next;
//     Node():data(0), next(nullptr){}
//     Node(int data):data(data), next(nullptr){}
//     Node(int data, Node *next):data(data), next(next){}
// };

// int main () {
//     int x;
//     cin >> x;
//     Node * head = nullptr, *prev = nullptr;
//     while (x != -1) {
//         Node *p = new Node(x);
//         if (head != nullptr) {prev->next = p,prev = p;}
//         else {head = p,prev = head;}
//         cin >> x ;
//     }
//     int flag = 1;
//     Node *p = head;
//     while(p) {
//         if (p->data % 2){
//             flag = 0;
//             break;
//         }
//         p = p->next;
//     }
//     if (flag) {
//         cout << "No odd number present" << endl;
//         return 0;
//     }

//     flag = 1;
//     while(flag) {
//         flag = 0;
//         p = head, prev = nullptr;
//         while(p){
//             if (p->data % 2) {
//                 flag = 1;
//                 break;
//             }
//             prev = p;
//             p = p->next;
//         }
//         if (!flag) continue;
//         if (prev) {prev->next = p->next;}
//         else {head = head->next;}
//         delete(p);
//         p = nullptr;
//     }
//     p = head;
//     while(p) {
//         cout << p->data << " ";
//         p = p->next;
//     }
//     cout << "\n";
//     return 0;
// }

// https://www.hackerrank.com/contests/cse205-16915-day19/challenges

// #include <bits/stdc++.h>
// using namespace std ;

// struct Node {
//     int data;
//     Node * next;
//     Node():data(0), next(nullptr){}
//     Node(int data):data(data), next(nullptr){}
//     Node(int data, Node *next):data(data), next(next){}
// };

// Node *createList () {
//     int n, x;
//     cin >> n;
//     if (n < 6 || n > 9) return nullptr;
//     Node * head = nullptr, *prev = nullptr;
//     while (n--) {
//         cin >> x ;
//         Node *p = new Node(x);
//         if (head != nullptr) {prev->next = p,prev = p;}
//         else {head = p,prev = head;}
//     }
//     return head;
// }

// // Let's consider all the cased
// Node *operate(Node *head) {
//     if (!head || !head->next) return head;
//     Node *p1 = head->next, *p2 = head, *prev = nullptr;

//     while(p1) {
//         if (p1->data == p2->data) {
//             if(prev) {
//                 int x = prev->data;
//                 if (p1->next) x += p1->next->data;
//                 Node *q = new Node(x);
//                 p2->next = q;
//                 q->next = p1;
//             }
//             else {
//                 Node *q = new Node(p1->next->data);
//                 p2->next = q;
//                 q->next = p1;
//             }
//         }
//         prev = p2;
//         p2 = p1;
//         p1 = p1->next;
//     }
//     return head;
// }

// int main () {
//     int n;
//     cin >> n;

//     if (n < 6 || n > 9){
//         cout << "Invalid Input" << endl;
//         return 0;
//     }
//     int x;
//     Node * head = nullptr, *prev = nullptr;
//     while (n--) {
//         cin >> x ;
//         Node *p = new Node(x);
//         if (head != nullptr) {prev->next = p,prev = p;}
//         else {head = p,prev = head;}
//     }

//     Node *q = head;
//     while(q) {
//         cout << q->data << " ";
//         q = q->next;
//     }
//     head = operate(head);
//     Node *p = head;
//     cout << endl;
//     while(p){
//         cout << p->data << " ";
//         p = p->next;
//     }
//     return 0;
// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
//     node(int d)
//     {
//         data = d;
//         next = NULL;
//     }
// };
// void addn(node *&tail, int x)
// {
//     node *temp = new node(x);
//     tail->next = temp;
//     tail = temp;
// }
// void check(node *curr)
// {
//     node *c1 = curr;
//     curr = curr->next;
//     if (c1->next->data == curr->next->data)
//     {
//         int a = c1->data + curr->next->next->data;
//         node *temp = new node(a);
//         temp->next = curr->next;
//         curr->next = temp;
//     }
// }
// void insert(node *&head)
// {
//     node *curr = head;
//     node *prev = head;
//     curr = curr->next;
//     //         if (prev->data==curr->data){
//     //             int a=curr->next->data;
//     //             node* temp=new node(a);
//     //             temp->next=curr;
//     //             prev->next=temp;

//     //         }
//     while (curr->next != NULL)
//     {
//         if (prev->next->data == curr->next->data)
//         {
//             int a = prev->data + curr->next->next->data;
//             check(curr);
//             node *temp = new node(a);
//             temp->next = curr->next;
//             curr->next = temp;
//             a = 0;
//         }
//         prev = curr;
//         curr = curr->next;
//     }
// }
// void print(node *&head)
// {
//     node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->data << " ";
//         curr = curr->next;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (false)
//     {
//         cout << "Invalid Input";
//     }
//     else
//     {
//         int x;
//         cin >> x;
//         node *head = new node(x);
//         node *tail = head;
//         n = n - 1;
//         while (n--)
//         {
//             cout << n << ": ";
//             cin >> x;
//             addn(tail, x);
//         }
//         int z;
//         cin >> z;
//         print(head);
//         cout << endl;
//         insert(head);
//         print(head);
//     }
//     return 0;
// }

// https://www.hackerrank.com/contests/cse205-16915-day18/challenges/linked-list-insertion-2-16920

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
// };

// Node *insertElement(Node *head, int &x)
// {
//     if (!head)
//         return head;
//     int isOdd = x % 2;

//     Node *p = head, *last = nullptr;
//     Node *node = new Node();
//     node->data = x;
//     if (isOdd){while (p && p->data % 2 && p->data < x){last = p;p = p->next;}}
//     else{
//         while (p && p->data % 2){last = p;p = p->next;}
//         while (p && p->data > x){last = p;p = p->next;}
//     }
//     if (last){last->next = node,node->next = p;}
//     else{node->next = head,head = node;}
//     return head;
// }

// int main()
// {
//     int len, data;
//     cin >>  len;
//     Node *head = nullptr, *last = nullptr;
//     while ( len != 0)
//     {
//         cin >> data;
//         Node *p = new Node();
//         p->data = data;
//         if (head != nullptr){last->next = p, last = p;}
//         else{head = p, last = head;}
//         len = len - 1;
//     }

//     int x;
//     cin >> x;

//     Node *p = head;
//     while (p != nullptr)
//     {
//         if (p->data == x){cout << "Duplicates are not allowed" << endl;return 0;}
//         p = p->next;
//     }
//     head = insertElement(head, x);

//     p = head;
//     while(p) {
//         cout << p->data << " ";
//         p = p->next;
//     }

//     return 0;
// }

// //

// #include <bits/stdc++.h>
// using namespace std ;

// void searchingChallenge(char* str) {
//     int sum = 0, num = 0;
//     for (int i = 0; str[i] != '\0'; ++i)
//     {
//         if(str[i] >= '0' && str[i] <= '9') {
//             num = num * 10 + (str[i]-'0');
//         }
//         else {
//             sum += num;
//             num = 0;
//         }
//     }
//     sum += num;
//     cout << sum << endl;
// }

// int main () {
//     searchingChallenge("55 423 sfhi 90");
//     return 0;
// }

// // Test Section

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// int processArray(int array[], int len)
// {
//   /*
//    * Do not make any changes outside this function.
//    *
//    * Modify this function to process `array` as indicated
//    * in the question. At the end, return the length of the
//    * array.
//    *
//    * Do not print anything in this function
//    * Do not write anything to the standard output
//    *
//    * Submit this entire program (not just this function)
//    * as your answer
//    */
//   for (int i = 0; i < len; ++i)
//   {
//     int isS = (array[i] % 10 == 2);
//     int isU = (array[i] > 42);

//     if (isS && isU)
//     {
//       array[i] = -6;
//     }
//     else if (isS)
//     {
//       array[i] = -5;
//     }
//     else if (isU)
//     {
//       array[i] = -2;
//     }
//   }
//   return len;
// }

// int main()
// {
//   int *array;
//   int len = 0, maxsize = 1024, i, input, new_len;
//   int result;
//   array = (int *)malloc(maxsize * sizeof(int));
//   while (scanf("%d", &input) == 1)
//   {
//     if (input < 0)
//       break; /* Stop when a negative number is entered */
//     array[len++] = input;
//     if (len == maxsize)
//     { /* array is full. increase size */
//       maxsize *= 2;
//       array = (int *)realloc(array, maxsize * sizeof(int));
//     }
//   }
//   new_len = processArray(array, len);
//   for (i = 0; i < new_len; i++)
//     printf("%d\n", array[i]);
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std ;

// int main () {
//     vector<int> Arr;
//     int x;
//     cin >> x;
//     while (x >= 0) {
//         Arr.emplace_back(x);
//         cin >> x;
//     }
//     for (int i = 0; i < Arr.size(); ++i)
//     {
//         bool isS = (Arr[i] % 10 == 2);
//         bool isU = (Arr[i] > 42);

//         if (isS && isU) {
//             Arr[i] = -6;
//         }
//         else if (isS) {
//             Arr[i] = -5;
//         }
//         else if (isU) {
//             Arr[i] = -2;
//         }
//     }

//     for (int i = 0; i < Arr.size(); ++i)
//     {
//         cout << Arr[i] << endl;
//     }

//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // struct node
// // {
// //     int data;
// //     node *next;
// // };

// // bool isPrime(int x)
// // {
// //     if (x < 2)
// //         return false;
// //     for (int i = 2; i < x; ++i)
// //     {
// //         if (x % i == 0)
// //             return false;
// //     }
// //     return true;
// // }

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     if (n < 1)
// //     {
// //         cout << "Invalid Number" << endl;
// //         return 0;
// //     }
// //     node *head = nullptr;
// //     while (n--)
// //     {
// //         int x;
// //         cin >> x;
// //         node *temp = new node;
// //         temp->data = x;
// //         temp->next = head;
// //         head = temp;
// //     }

// //     node *p = head;
// //     int count = 0;
// //     while (p)
// //     {
// //         if (isPrime(p->data))
// //             ++count;
// //         p = p->next;
// //     }
// //     cout << count << endl;
// //     return 0;
// // }

// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // class node
// // {
// // public:
// //     int data;
// //     node *link;
// // };

// // node *first, *temp;

// // class LinkedList
// // {
// // public:
// //     node *first, *last;
// //     LinkedList();
// //     void create();
// //     int count();
// // };
// // LinkedList::LinkedList()
// // {
// //     first = NULL;
// //     last = NULL;
// // };

// // void LinkedList::create()
// // {
// //     node *temp = new node();
// //     cin >> temp->data;
// //     temp->link = NULL;
// //     if (first == NULL)
// //     {
// //         first = temp;
// //         last = first;
// //     }
// //     else
// //     {
// //         last->link = temp;
// //         last = temp;
// //     }
// // };

// // int isprime(int n)
// // {

// //     if (n == 1 || n == 0)
// //     {
// //         return 0;
// //     }
// //     if (n == 2)
// //     {
// //         return 1;
// //     }

// //     for (int j = 2; j < n - 1; j++)
// //     {
// //         if (n % j == 0)
// //             return 0;
// //     }
// //     return 1;
// // }

// // int LinkedList::count()
// // {
// //     node *temp;
// //     temp = first;

// //     int count = 0;
// //     int a;

// //     while (temp != NULL)
// //     {
// //         a = temp->data;
// //         temp = temp->link;

// //         if (isprime(a))
// //             count++;
// //     }
// //     return count;
// // }

// // int main()
// // {
// //     int n;
// //     cin >> n;

// //     if (n < 0)
// //     {
// //         cout << "Invalid Number";
// //         return 0;
// //     }

// //     int i;

// //     LinkedList l1;

// //     for (i = 0; i < n; i++)
// //     {
// //         l1.create();
// //     }

// //     cout << l1.count();

// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int f3(int a = 4, int b = 1)
// // {
// //     if (2 < a && (3 & b) > (b - 3))
// //     {
// //         b = a + 2;
// //         b = a + 3;
// //         return 1 + f3(a, b + a);
// //     }
// //     a = 2 + a + b;
// //     return a + 1;
// // }

// // int f1(int a = 2, int b = 7)
// // {
// //     if ((a - 2) < (b & 4) && b > 5)
// //     {
// //         b = 2 + b + b;
// //         a = 3 + a + a;
// //         return f1(a + b, b) - b;
// //     }
// //     return b + 1;
// // }

// // int f(int a = 8, int b = 7, int c = 0)
// // {
// //     for (int i = 2; i < 6; ++i)
// //     {
// //         a = 9 + b;
// //         if ((c & a & 8) < (6 & c))
// //         {
// //             b = c + a;
// //             a = 8 + c;
// //         }
// //     }
// //     return a + b;
// // }

// // int x(int a = 4, int b = 5, int c = 6)
// // {
// //     for (int c = 2; c < 6; c++)
// //     {
// //         a = 9 + b;
// //         if ((c & 8 & a) < (6 & c))
// //         {
// //             b = c + a;
// //             a = 8 + c;
// //         }
// //     }
// //     return a + b;
// // }

// // int main()
// // {
// //     int size;
// //     cin >> size;

// //     char *arr = new char(size * 2);
// //     for (int i = 0; i < size; ++i)
// //     {
// //         cin >> arr[i];
// //     }

// //     int index;
// //     cin >> index;
// //     char x;
// //     cin >> x;

// //     if (index < 1 || index > size + 1)
// //     {
// //         cout << "Invalid Position" << endl;
// //     }
// //     else
// //     {
// //         for (int i = size; i > index; ++i)
// //         {
// //             arr[i] = arr[i - 1];
// //         }

// //         arr[index] = x;

// //         for (int i = 0; i < size; ++i)
// //         {
// //             cout << arr[i] << "\t";
// //         }
// //         cout << arr[size];
// //     }
// //     return 0;
// // }

// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // int main()
// // {
// //     int n, m;
// //     cin >> n;
// //     int n1[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> n1[i];
// //     }
// //     cin >> m;
// //     int n2[m];
// //     for (int j = 0; j < m; j++)
// //     {
// //         cin >> n2[j];
// //     }
// //     int res[n + m];
// //     int i = 0, j = 0, k = 0;
// //     while (i < n && j < m)
// //     {
// //         if (n1[i] < n2[j])
// //         {
// //             res[k++] = n1[i++];
// //         }
// //         else
// //         {
// //             res[k++] = n2[j++];
// //         }
// //     }
// //     while (i < n)
// //     {
// //         res[k++] = n1[i++];
// //     }
// //     while (i < m)
// //     {
// //         res[k++] = n2[j++];
// //     }
// //     for (int h = 0; h < n + m; h++)
// //     {
// //         cout << res[h] << "\n";
// //     }
// //     return 0;
// // }
