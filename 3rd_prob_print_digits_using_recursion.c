#include <stdio.h>

/*
Print Digits using Recursion.

Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input:
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 10^9).

Output:
For each test case print a single line contains the digits of the number separated by space.

Example-->
Input:
3
121
39
123456

Output:
1 2 1
3 9
1 2 3 4 5 6

*/

void PrintDigits(int n)
{
    // Base case:
    // When n becomes 0, there are no more digits left.
    // Stop the recursive calls.
    if (n == 0)
        return;

    // Take the last digit of the number.
    // Example: 121 % 10 = 1
    int x = n % 10;

    // Recursive call:
    // Remove the last digit and continue with the remaining number.
    // Example:
    // PrintDigits(121) -> PrintDigits(12) -> PrintDigits(1)
    PrintDigits(n / 10);

    // This line executes while returning from recursion.
    // Because recursion goes to the end first,
    // digits are printed from left to right.
    printf("%d ", x);
}

int main()
{
    int T;

    // Take number of test cases.
    scanf("%d", &T);

    // Run the recursion for each test case.
    for (int i = 0; i < T; i++)
    {
        int N;

        // Take the number input.
        scanf("%d", &N);

        // Call recursive function to print digits.
        PrintDigits(N);

        // Special case:
        // If input number is 0, recursion will stop immediately,
        // so we manually print 0.
        if (N == 0)
        {
            printf("0");
        }

        // Move to the next test case output line.
        printf("\n");
    }

    return 0;
}