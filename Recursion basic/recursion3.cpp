/*
1. Sum of first n numbers -functional and parameterised ways
2. factorial of n
*/

#include <bits/stdc++.h>
using namespace std;
// 1. Parameterised
void sumofn(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }
    sumofn(n - 1, sum + n);
}

// 2. Functional
int sumofn_1(int n)
{
    if (n == 0)
        return 0;

    return n + sumofn_1(n - 1);
}

// 3. Factorial of n
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

// 4. factorial of n in parameterised way

void fact_1(int n, int& result)
{
    if (n == 0 || n == 1)
        result = 1;
    else
    {
        fact_1(n - 1, result);
        result *= n;
    }
}

int main()
{
    int n;
    int factorial;
    cout << "Enter the number: ";
    cout << "\n";
    cin >> n;

    // int sum = sumofn_1(n);
    // cout << "Sum of " << n << " numbers is: " << sum;
    // sumofn(n, 0);

    // int factorial_n = fact(n);
    // cout << "The factorial of " << n << " is: " << factorial_n;

    cout << "The factorial of "
         << n << "is: ";
    fact_1(n, factorial);

    cout << "\n";

    return 0;
}