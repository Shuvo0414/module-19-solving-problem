#include <stdio.h>
#include <string.h>

/*
                  Palindrome.

Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input:
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output:
Print "YES" if the string is palindrome, otherwise print "NO".

Examples--->
Input:
abba
Output:
YES

Input:
icpcassiut
Output:
NO

Input:
mam
Output:
YES
*/

int main()
{
    char S[1001];

    // Take string input.
    scanf("%s", S);

    // Find the length of the string.
    int len = strlen(S);

    // Assume the string is palindrome.
    int flag = 1;

    // Two pointers:
    // i starts from the first character.
    // j starts from the last character.
    int i = 0;
    int j = len - 1;

    // Compare characters from both ends.
    // Continue until both pointers meet.
    while (i < j)
    {
        // If characters are different,
        // then the string is not palindrome.
        if (S[i] != S[j])
        {
            flag = 0;
            break;
        }

        // Move pointers towards the middle.
        i++;
        j--;
    }

    // Print result based on flag value.
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}