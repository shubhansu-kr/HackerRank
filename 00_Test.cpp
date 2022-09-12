// 

#include <bits/stdc++.h>
using namespace std ;

void searchingChallenge(char* str) {
    int sum = 0, num = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if(str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i]-'0');
        }
        else {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    cout << sum << endl;
}

int main () {
    searchingChallenge("55 423 sfhi 90");
    return 0;
}

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
// //     int val;
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
// //         temp->val = x;
// //         temp->next = head;
// //         head = temp;
// //     }

// //     node *p = head;
// //     int count = 0;
// //     while (p)
// //     {
// //         if (isPrime(p->val))
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
