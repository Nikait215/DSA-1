/*
    UCS301 - Data Structures
    Lab Assignment 1 - Week 1

    Q2. Remove Duplicate Elements from an Array

    This program removes duplicate elements from an array
    so that only unique elements remain.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "===== REMOVE DUPLICATE ELEMENTS =====\n";

    cout << "\nEnter number of elements (1 to 100): ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid size. Please enter a value between 1 and 100.\n";
        return 0;
    }

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Check each element for duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                // Shift elements to the left
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    cout << "\nArray after removing duplicate elements:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
