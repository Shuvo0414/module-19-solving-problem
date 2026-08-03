#include <stdio.h>

/*

Mirror Array.

Given two numbers 𝑁, 𝑀 and a 2D array of size 𝑁 * 𝑀 Print the inverted array that appeared in the mirror.

Input:
First line contains two numbers 𝑁, 𝑀 (1≤𝑁,𝑀≤100) 𝑁 donates number of rows and 𝑀 donates number of columns.

Each of the next 𝑁 lines will contain 𝑀 numbers (1≤𝐴𝑖,𝑗≤10^9).

Output:
Print the inverted array.

Example-->
Input:
3 3
2 3 5
7 9 20
35 1 12
Output:
5 3 2
20 9 7
12 1 35

*/

int main()
{
    int N, M;

    // Take number of rows and columns from user
    scanf("%d %d", &N, &M);

    // Declare a 2D array to store matrix values
    // long long is used because values can be up to 10^9
    long long A[N][M];

    // Taking matrix input
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%lld", &A[i][j]);
        }
    }

    /*
    Printing the mirror image of the array.

    Row order remains the same.

    Only column order changes:

    Normal:
    j = 0 → M-1

    Mirror:
    j = M-1 → 0

    Example:

    Original row:
    2 3 5

    Index:
    0 1 2

    Start from index 2:
    5 3 2
    */

    for (int i = 0; i < N; i++)
    {
        // Start from the last column and move to the first column
        for (int j = M - 1; j >= 0; j--)
        {
            printf("%lld ", A[i][j]);
        }

        // After printing one row, go to the next line
        printf("\n");
    }

    return 0;
}