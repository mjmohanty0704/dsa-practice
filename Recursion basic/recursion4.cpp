/*
1.Reverse array
2.Check palindrome
*/

#include <bits/stdc++.h>
using namespace std;
// 2 pointer approach
// void reverseArray(int arr[], int l, int r)
// {
//     if (l >= r)
//         return;
//     swap(arr[l], arr[r]);
//     reverseArray(arr, l + 1, r - 1);
// }

// single pointer approach
// void reverseArray1(int i, int arr[], int n)
// {
//     if (i >= n / 2)
//         return;
//     swap(arr[i], arr[n - i - 1]);
//     reverseArray1(i + 1, arr, n);
// }

// 2.
bool palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return palindrome(i + 1, s);
}

int main()
{
    string s = "12521";
    bool res = palindrome(0, s);
    if (res == 1)
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not a palindrome" << endl;
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> arr[i];
    // }

    // reverseArray1(0, arr, n);

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << arr[i] << "->";
    // }
    return 0;
}
