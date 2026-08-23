#include <iostream>
using namespace std;

int main()
{
    int arr[100], temp[100];
    int n, k, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter number of positions (K): ";
    cin >> k;

    // Handle K greater than n
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
        cout << "\nInvalid choice.";
    }

    cout << endl;

    return 0;
}