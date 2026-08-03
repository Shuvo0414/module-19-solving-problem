#include <stdio.h>

/*
Sum of a Matrix

Given two matrices A and B of size R * C. Print the summation of A and B.

Note: Solve this problem using recursion.

Input
First line contains two numbers R and C (1 ≤ R,C ≤ 100). number of rows and number of columns respectively.

Next R lines will contain C numbers ( - 100 ≤ Ai, j ≤ 100) matrix A numbers.

Next R lines will contain C numbers ( - 100 ≤ Bi, j ≤ 100) matrix B numbers.

Output:
Print the summation result.

Example
Input:
2 3
1 2 3
4 5 6

1 3 5
7 9 11
Output:
2 5 8
11 14 17

*/

void Summation(int r, int c, int A[r][c], int B[r][c], int Result[r][c], int i)
{
    /*
    Base case:

    Total elements in matrix = rows * columns

    When i reaches the total number of elements,
    recursion stops because there is nothing left to calculate.
    */
    if (i == r * c)
        return;

    /*
    Convert one-dimensional index into 2D matrix position.

    Example:

    Matrix size:
    2 rows, 3 columns

    Index:
    0 1 2 3 4 5

    Position:

    row = index / columns
    col = index % columns

    This allows recursion to work like nested loops.
    */

    int row = i / c;
    int col = i % c;

    // Add corresponding elements of A and B matrices
    Result[row][col] = A[row][col] + B[row][col];

    // Print the current result element
    printf("%d ", Result[row][col]);

    /*
    After printing the last column of a row,
    move to the next line.

    Example:

    2 5 8
    11 14 17
    */
    if (col == c - 1)
    {
        printf("\n");
    }

    /*
    Recursive call:

    Move to the next element.

    Similar to:

    for(i = 0; i < r*c; i++)

    but recursion is controlling the movement.
    */
    Summation(r, c, A, B, Result, i + 1);
}

int main()
{
    int R, C;

    // Take number of rows and columns
    scanf("%d %d", &R, &C);

    // Declare three matrices:
    // A -> first matrix
    // B -> second matrix
    // Result -> stores addition result

    int A[R][C], B[R][C], Result[R][C];

    // Input A matrix
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input B matrix
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    /*
    Start recursion from index 0.

    Index 0 means:

    A[0][0] + B[0][0]

    Then recursion moves:

    index 1 → A[0][1]
    index 2 → A[0][2]
    index 3 → A[1][0]

    and continues until all elements are processed.
    */

    Summation(R, C, A, B, Result, 0);

    return 0;
}