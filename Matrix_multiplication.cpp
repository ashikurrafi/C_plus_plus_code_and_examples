#include <iostream>
using namespace std;

int main()
{
    int matrix_1_row, matrix_1_column;
    cout << "Enter row of 1st matrix: ";
    cin >> matrix_1_row;
    cout << "Enter column of 1st matrix: ";
    cin >> matrix_1_column;

    int **array_1 = new int *[matrix_1_row];
    for (int i = 0; i < matrix_1_row; i++)
    {
        array_1[i] = new int[matrix_1_column];
    }

    for (int i = 0; i < matrix_1_row; i++)
    {
        for (int j = 0; j < matrix_1_column; j++)
        {
            cout << "Enter element " << i + 1 << j + 1 << " : ";
            cin >> array_1[i][j];
        }
    }

    for (int i = 0; i < matrix_1_row; i++)
    {
        for (int j = 0; j < matrix_1_column; j++)
        {
            std::cout << array_1[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int matrix_2_row, matrix_2_column;
    cout << "Enter row of 2nd matrix: ";
    cin >> matrix_2_row;
    cout << "Enter column of 2nd matrix: ";
    cin >> matrix_2_column;

    // Check if matrices are multipliable
    if (matrix_1_column != matrix_2_row)
    {
        cout << "Matrices are not multipliable." << endl;
        return 0;
    }

    int **array_2 = new int *[matrix_2_row];
    for (int i = 0; i < matrix_2_row; i++)
    {
        array_2[i] = new int[matrix_2_column];
    }

    for (int i = 0; i < matrix_2_row; i++)
    {
        for (int j = 0; j < matrix_2_column; j++)
        {
            cout << "Enter element " << i + 1 << j + 1 << " : ";
            cin >> array_2[i][j];
        }
    }

    for (int i = 0; i < matrix_2_row; i++)
    {
        for (int j = 0; j < matrix_2_column; j++)
        {
            std::cout << array_2[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int result_row = matrix_1_row;
    int result_column = matrix_2_column;
    int **array_3 = new int *[result_row];
    for (int i = 0; i < result_row; i++)
    {
        array_3[i] = new int[result_column];
    }

    for (int i = 0; i < matrix_1_row; i++)
    {
        for (int j = 0; j < matrix_2_column; j++)
        {
            array_3[i][j] = 0;
            for (int k = 0; k < matrix_1_column; k++)
            {
                array_3[i][j] += array_1[i][k] * array_2[k][j];
            }
        }
    }

    cout << "Result : " << endl;
    for (int i = 0; i < result_row; i++)
    {
        for (int j = 0; j < result_column; j++)
        {
            std::cout << array_3[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < matrix_1_row; i++)
    {
        delete[] array_1[i];
    }
    delete[] array_1;
    for (int i = 0; i < matrix_2_row; i++)
    {
        delete[] array_2[i];
    }
    delete[] array_2;
    for (int i = 0; i < result_row; i++)
    {
        delete[] array_3[i];
    }
    delete[] array_3;

    return 0;
}
