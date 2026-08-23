/*
    UCS301 - Data Structures
    Lab Assignment 1 - Week 1

    Q3. Rotate a 1-D Array by K Positions

    This program performs:
    1. Left Rotation
    2. Right Rotation
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100], temp[100];
    int n, k, choice;

    cout << "===== ARRAY ROTATION =====\n";

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

    cout << "\nEnter number of positions (K): ";
    cin >> k;

    if (k < 0)
    {
        cout << "Invalid value of K. K cannot be negative.\n";
        return 0;
    }

    // Reduce K when it is greater than the array size
    k = k % n;

    cout << "\nChoose rotation type:\n";
    cout << "1. Left Rotation\n";
    cout << "2. Right Rotation\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        // Left Rotation
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[(i + k) % n];
        }

        // Copy rotated elements back to the original array
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }

        cout << "\nArray after left rotation: ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else if (choice == 2)
    {
        // Right Rotation
        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = arr[i];
        }

        // Copy rotated elements back to the original array
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }

        cout << "\nArray after right rotation: ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "\nInvalid choice. Please choose 1 or 2.";
    }

    cout << endl;

    return 0;
}
