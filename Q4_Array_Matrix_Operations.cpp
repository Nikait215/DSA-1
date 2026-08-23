/*
    UCS301 - Data Structures
    Lab Assignment 1 - Week 1

    Q4. Array and Matrix Operations

    Operations:
    1. Reverse the elements of an array
    2. Matrix multiplication
    3. Matrix transpose
*/

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== ARRAY AND MATRIX OPERATIONS =====\n";
    cout << "1. Reverse an Array\n";
    cout << "2. Matrix Multiplication\n";
    cout << "3. Matrix Transpose\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // ------------------------------------------------
    // 1. REVERSE ARRAY
    // ------------------------------------------------

    if (choice == 1)
    {
        int arr[100];
        int n;

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

        int start = 0;
        int end = n - 1;

        // Reverse the array using two pointers
        while (start < end)
        {
            swap(arr[start], arr[end]);

            start++;
            end--;
        }

        cout << "\nReversed array: ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // ------------------------------------------------
    // 2. MATRIX MULTIPLICATION
    // ------------------------------------------------

    else if (choice == 2)
    {
        int A[10][10], B[10][10], result[10][10];
        int r1, c1, r2, c2;

        cout << "\nEnter rows and columns of first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns of second matrix: ";
        cin >> r2 >> c2;

        // Validate matrix dimensions
        if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
            r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
        {
            cout << "\nInvalid matrix dimensions.\n";
            cout << "Rows and columns must be between 1 and 10.\n";
            return 0;
        }

        // Matrix multiplication is possible only when
        // columns of first matrix = rows of second matrix
        if (c1 != r2)
        {
            cout << "\nMatrix multiplication is not possible.\n";
            cout << "Number of columns of first matrix must equal ";
            cout << "number of rows of second matrix.\n";
            return 0;
        }

        cout << "\nEnter elements of first matrix:\n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> A[i][j];
            }
        }

        cout << "\nEnter elements of second matrix:\n";

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> B[i][j];
            }
        }

        // Initialize result matrix with zero
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                result[i][j] = 0;
            }
        }

        // Perform matrix multiplication
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "\nResult of matrix multiplication:\n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << result[i][j] << " ";
            }

            cout << endl;
        }
    }

    // ------------------------------------------------
    // 3. MATRIX TRANSPOSE
    // ------------------------------------------------

    else if (choice == 3)
    {
        int matrix[10][10], transpose[10][10];
        int rows, columns;

        cout << "\nEnter number of rows: ";
        cin >> rows;

        cout << "Enter number of columns: ";
        cin >> columns;

        if (rows < 1 || rows > 10 || columns < 1 || columns > 10)
        {
            cout << "\nInvalid matrix dimensions.\n";
            cout << "Rows and columns must be between 1 and 10.\n";
            return 0;
        }

        cout << "Enter matrix elements:\n";

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cin >> matrix[i][j];
            }
        }

        // Find transpose
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                transpose[j][i] = matrix[i][j];
            }
        }

        cout << "\nTranspose of matrix:\n";

        for (int i = 0; i < columns; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << transpose[i][j] << " ";
            }

            cout << endl;
        }
    }

    else
    {
        cout << "\nInvalid choice. Please choose 1, 2, or 3.\n";
    }

    return 0;
}
