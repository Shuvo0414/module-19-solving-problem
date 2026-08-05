#include <stdio.h>

/*

                  Max Number.

Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input:
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output:
Print the maximum value in this array.

Example--->
Input:
5
1 -3 5 4 -6
Output:
5

*/

int Max(int n, int a[], int i)
{
    // Base case:
    // When we reach the last element,
    // return that element because no more comparison is needed.
    if (i == n - 1)
        return a[i];

    // Recursive call:
    // Find maximum value from the remaining part of the array.
    int result = Max(n, a, i + 1);

    // Compare current element with the maximum value
    // returned from the recursive call.
    if (a[i] > result)
    {
        return a[i];
    }
    else
    {
        return result;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    // Input array elements.
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Start recursion from index 0.
    int maxNumber = Max(N, A, 0);

    // Print maximum value.
    printf("%d", maxNumber);

    return 0;
}