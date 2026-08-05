#include <stdio.h>

/*
                Count Vowels.

Given a string S. Print number of vowels in the string.

Note:
-> Vowel letters: ['a', 'e', 'i', 'o', 'u'].
-> Vowel letters could be capital or small.
-> Solve this problem using recursion.

Input:
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output:
Print number of vowels in string S.

Example-->
Input:
Data Structure Lab

Output:
6

*/

int Counter(char s[], int i)
{
    // Base case:
    // When we reach the end of the string,
    // return 0 because there are no more characters to check.
    if (s[i] == '\0')
        return 0;

    // Recursive call:
    // First count vowels from the next character.
    int ans = Counter(s, i + 1);

    // Convert uppercase letter to lowercase.
    // ASCII difference between uppercase and lowercase
    // English letters is 32.
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }

    // Check whether current character is a vowel.
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        // Current character is a vowel,
        // so add 1 with the previous recursive answer.
        return ans + 1;
    }
    else
    {
        // Current character is not a vowel,
        // return previous answer without increasing.
        return ans;
    }
}

int main()
{
    char S[201];

    // Take full line input including spaces.
    fgets(S, 201, stdin);

    // Start recursion from index 0.
    int count = Counter(S, 0);

    // Print total number of vowels.
    printf("%d", count);

    return 0;
}