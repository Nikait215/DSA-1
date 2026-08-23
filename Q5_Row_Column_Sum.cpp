#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int rows, columns;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter matrix elements:\n";

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

    // Row sums
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

    // Column sums
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