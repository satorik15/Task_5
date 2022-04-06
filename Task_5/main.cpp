#include "Task.h"
int main()
{
    setlocale(LC_ALL, "RUS");
    size_t rows, columns;
    std::cout << "Type counts of rows and columns separated with space: ";
    std::cin >> rows >> columns;
    int** A = Create(rows, columns);
    FillRandomNumbers(A, rows, columns);
    Print(A, rows, columns);
    Free(A, rows);
    return 0;
}

