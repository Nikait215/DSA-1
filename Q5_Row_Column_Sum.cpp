/*
    UCS301 - Data Structures
    Lab Assignment 1 - Week 1

    Q5. Row and Column Sum of a Matrix

    This program:
    1. Accepts a matrix from the user
    2. Displays the matrix
    3. Calculates the sum of each row
    4. Calculates the sum of each column
*/

#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int rows, columns;

    cout << "===== ROW AND COLUMN SUM =====\n";

    cout << "\nEnter number of rows (1 to 10): ";
    cin >> rows;

    cout << "Enter number of columns (1 to 10): ";
    cin >> columns;

    // Validate matrix dimensions
    if (rows < 1 || rows > 10 || columns < 1 || columns > 10)
    {
        cout << "\nInvalid matrix dimensions.\n";
        cout << "Rows and columns must be between 1 and 10.\n";
        return 0;
    }

    cout << "\nEnter matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Display matrix
    cout << "\nMatrix:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    // Calculate row sums
    cout << "\nRow Sums:\n";

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < columns; j++)
        {
            sum += matrix[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << sum << endl;
    }

    // Calculate column sums
    cout << "\nColumn Sums:\n";

    for (int j = 0; j < columns; j++)
    {
        int sum = 0;

        for (int i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }

        cout << "Column " << j + 1 << " Sum = " << sum << endl;
    }

    return 0;
}
