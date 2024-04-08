/*
1. Print name 5 times
2. Print linearly 1 to n
3. Print from n to 1
4. Print 1 to n using backtracking
5. Print n to 1 using backtracking
*/

#include <bits/stdc++.h>
using namespace std;

// 1.
void printName(int i, int n)
{
    if (i >= n)
        return;

    cout << "Manoj" << " ";
    printName(i + 1, n);
}

// 2.
void print1ton(int i, int n)
{
    if (i >= n)
        return;

    cout << i + 1 << " ";
    print1ton(i + 1, n);
}

// 3.
void printnto1(int i, int n)
{
    if (i < 1)
        return;

    cout << i << " ";
    printnto1(i - 1, n);
}

// 4.
void print1ton_1(int i, int n)
{
    if (i < 1)
        return;

    print1ton_1(i - 1, n);
    cout << i << " ";
}

// 5.
void printnto1_1(int i, int n)
{
    if (i > n)
        return;

    printnto1_1(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printName(0, n);
    cout << "\n";
    print1ton(0, n);
    cout << "\n";
    printnto1(n, n);
    cout << "\n";
    print1ton_1(n, n);
    cout << "\n";
    printnto1_1(1, n);
    cout << "\n";
    return 0;
}