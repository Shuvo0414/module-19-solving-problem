#include <stdio.h>

/*
             Factorial.

Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input:
Only one line containing a number N (1 ≤ N ≤ 20).

Output:
Print factorial of the number N.

Example-->

Input:
5

Output:
120

*/

long long int Factorial(long long int n)
{
    // Base case:
    // Factorial of 0 is 1.
    // This stops the recursive calls.
    if (n == 0)
        return 1;

    // Recursive call:
    // Calculate factorial of the smaller number first.
    long long int ans = Factorial(n - 1);

    // After recursion returns,
    // multiply the returned value with current n.
    return ans * n;
}

int main()
{
    int N;

    // Take input number.
    scanf("%d", &N);

    // Call recursive function.
    long long int ans = Factorial(N);

    // Print factorial result.
    printf("%lld", ans);

    return 0;
}