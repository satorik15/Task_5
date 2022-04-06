#include "Task.h"
int** Create(size_t rows, size_t columns) {
    int** M = new int* [rows];
    for (size_t i = 0; i < rows; ++i) {
        M[i] = new int[columns];
    }
    return M;
}

void FillRandomNumbers(int** M, const size_t rows, const size_t columns)
{
    srand((unsigned int)time(0)); // инициализируем ПГСЧ

    for (size_t row = 0; row < rows; row++)
        for (size_t column = 0; column < columns; column++)
            M[row][column] = rand() % 40 + 10; // присваиваем СЧ
}
void Print(int** M, size_t rows, size_t columns) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < columns; ++j) {
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
void Free(int** M, size_t rows) {
    for (size_t i = 0; i < rows; ++i) {
        delete[] M[i];
    }
    delete[] M;
}
