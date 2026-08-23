/*
    UCS301 - Data Structures
    Lab Assignment 1 - Week 1

    Q1. Menu-Driven Program to Demonstrate Array Operations

    Operations:
    1. Create
    2. Display
    3. Insert
    4. Delete
    5. Linear Search
    6. Exit
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n===== ARRAY MENU =====\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // CREATE
            cout << "\nEnter number of elements (1 to 100): ";
            cin >> n;

            if (n < 1 || n > 100)
            {
                cout << "Invalid size. Please enter a value between 1 and 100.\n";
                n = 0;
                break;
            }

            cout << "Enter " << n << " elements:\n";

            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            cout << "Array created successfully.\n";
            break;

        case 2:
            // DISPLAY
            if (n == 0)
            {
                cout << "Array is empty.\n";
            }
            else
            {
                cout << "Array elements are: ";

                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }

                cout << endl;
            }
            break;

        case 3:
        {
            // INSERT
            int value, position;

            if (n == 100)
            {
                cout << "Array is full. Cannot insert.\n";
                break;
            }

            cout << "\nEnter value to insert: ";
            cin >> value;

            cout << "Enter position (1 to " << n + 1 << "): ";
            cin >> position;

            if (position < 1 || position > n + 1)
            {
                cout << "Invalid position.\n";
            }
            else
            {
                // Shift elements one position to the right
                for (int i = n; i >= position; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[position - 1] = value;
                n++;

                cout << "Element inserted successfully.\n";
            }

            break;
        }

        case 4:
        {
            // DELETE
            int position;

            if (n == 0)
            {
                cout << "Array is empty. Nothing to delete.\n";
                break;
            }

            cout << "\nEnter position to delete (1 to " << n << "): ";
            cin >> position;

            if (position < 1 || position > n)
            {
                cout << "Invalid position.\n";
            }
            else
            {
                // Shift elements one position to the left
                for (int i = position - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                cout << "Element deleted successfully.\n";
            }

            break;
        }

        case 5:
        {
            // LINEAR SEARCH
            int value;
            bool found = false;

            if (n == 0)
            {
                cout << "Array is empty. Nothing to search.\n";
                break;
            }

            cout << "\nEnter element to search: ";
            cin >> value;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    cout << "Element found at position " << i + 1 << ".\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Element not found.\n";
            }

            break;
        }

        case 6:
            cout << "\nExiting program...\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
