#include <iostream>
#include <cassert>

void enterMatrix(int matrix[][4], std::string tag)
{
    std::cout << "Please enter the matrix " << tag << " (row by row): \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void readMatrix(int matrix[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

bool checkIfEqual(int matrix_1[][4], int matrix_2[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix_1[i][j] != matrix_2[i][j])
                return false;
        }
    }
    return true;
}



int main() {

    int matrix_1[4][4];
    enterMatrix(matrix_1, "1");
    readMatrix(matrix_1);

    int matrix_2[4][4];
    enterMatrix(matrix_2, "2");
    readMatrix(matrix_2);

    //copy this line into terminal for fast check:
    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

    std::cout << (checkIfEqual(matrix_1, matrix_2) ? "Matrices are equal\n" : "Matrices are not equal\n");

    return 0;
}
