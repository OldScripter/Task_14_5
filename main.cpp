#include <iostream>

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

bool transformToDiagonal(int matrix[][4])
{
    std::cout << "Transforming to diagonal matrix:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
                matrix[i][j] = 0;
        }
    }
}

int main() {

    int matrix[4][4];
    enterMatrix(matrix, "for transformation");
    readMatrix(matrix);

    //copy this line into terminal for fast check:
    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

    transformToDiagonal(matrix);
    readMatrix(matrix);

    return 0;
}
