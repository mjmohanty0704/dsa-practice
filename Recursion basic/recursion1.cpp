/*
You are given an integer ‘n’.
Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.
Example:
Input: ‘n’ = 5
Output: 1 2 3 4 5
Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].*/

/*
In order to run a cpp file in the terminal
first go to the concerned folder
there type g++ file_name.cpp -o file_executable_name to compile
then after successful compilation, to run type ./fle_executable_name
*/

#include <bits/stdc++.h>
using namespace std;

int i = 1;
vector<int> printNos(int x)
{
    vector<int> result;
    if (i == x)
    {
        result.push_back(i);
        return result;
    }
    result.push_back(i++);
    vector<int> temp = printNos(x);

    result.insert(result.end(), temp.begin(), temp.end());

    return result;
}

int main()
{
    int x;
    cout << "Enter: ";
    cin >> x; 

    vector<int> ans = printNos(x);
    for (auto nums : ans)
    {
        cout << nums << "\n";
    }
    return 0;
}