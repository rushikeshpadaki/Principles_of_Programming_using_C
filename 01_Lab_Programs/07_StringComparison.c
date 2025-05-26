/**
 * Title: Compare Two Strings Without Using strcmp()
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to compare two strings without using the built-in strcmp() function.
 * - Takes two strings from the user.
 * - Compares them character by character using pointers.
 * - Declares the strings as equal only if all characters match and both strings terminate at the same time.
 *
 * Algorithm:
 * 1. Read two strings using fgets() and remove trailing newline using strcspn().
 * 2. Define a function 'compare_string()' that takes two character pointers:
 *    a. Traverse both strings simultaneously.
 *    b. If characters at current index are not equal, return -1 (not equal).
 *    c. If both reach '\0' simultaneously, return 0 (equal).
 * 3. Use the return value to print whether the strings are equal or not.
 *
 * Time Complexity:
 * - O(n) — where n is the length of the strings (up to the first mismatch or termination).
 *
 * Space Complexity:
 * - O(1) — Constant space for comparison logic.
 *
 * Sample Execution:
 *
 * Case 1: Strings are equal
 * Input:
 * Enter first string: hello
 * Enter second string: hello
 * Output:
 * Both strings are same.
 *
 * Case 2: Strings are not equal
 * Input:
 * Enter first string: Hello
 * Enter second string: hello
 * Output:
 * Entered strings are not equal.
 */

#include <stdio.h>
#include <string.h>

int compare_string(char *, char *);

int main()
{
    char first[100], second[100];
    int result;

    printf("Enter first string: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0'; // Remove trailing newline

    printf("Enter second string: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0'; // Remove trailing newline

    result = compare_string(first, second);

    if (result == 0)
        printf("Both strings are same.\n");
    else
        printf("Entered strings are not equal.\n");

    return 0;
}

int compare_string(char *first, char *second)
{
    while (*first == *second)
    {
        if (*first == '\0' || *second == '\0')
            break;
        first++;
        second++;
    }

    if (*first == '\0' && *second == '\0')
        return 0;
    else
        return -1;
}
