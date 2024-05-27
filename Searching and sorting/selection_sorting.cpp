/*SELECTION SORT*/

/*
find the minimum element and place it on the 0th position and swap the element at 0th position.
- this will go on till n-2nd term starting from 0th index
*/

/*
Get the minimum and swap
13|46|24|52|20|9
9|46|24|52|20|13
9|13|24|52|20|46
9|13|20|52|24|46
9|13|20|24|52|46
9|13|20|24|46|52
*/

#include <bits/stdc++.h>
using namespace std;

// Function to perform selection sort on an array
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Assume the minimum element is the first element
        int mini = i;

        // Find the minimum element in the unsorted portion of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted portion
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Perform selection sort on the array
    selection_sort(arr, n);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
