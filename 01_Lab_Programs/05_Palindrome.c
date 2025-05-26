/**
 * Title: Recursive Palindrome Checker
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to check whether a given word is a palindrome using recursion.
 * - A palindrome is a word that reads the same forward and backward.
 * - This program compares characters recursively from both ends of the string.
 *
 * Algorithm:
 * 1. Read the input word from the user.
 * 2. Call 'check(word, 0)' recursively.
 * 3. In 'check()':
 *    a. Compare character at current index from start and end.
 *    b. If matched and index has not crossed, call recursively with index + 1.
 *    c. If mismatch found, print "not a palindrome".
 *    d. If all characters matched till middle, print "palindrome".
 *
 * Time Complexity:
 * - O(n) — where n is the length of the string.
 *
 * Space Complexity:
 * - O(n) — due to recursive call stack.
 *
 * Sample Execution:
 *
 * Case 1: Palindrome
 * Input:
 * Enter a string to check if it is a palindrome: madam
 * Output:
 * The entered word is a palindrome
 *
 * Case 2: Not a Palindrome
 * Input:
 * Enter a string to check if it is a palindrome: hello
 * Output:
 * The entered word is not a palindrome
 */

#include <stdio.h>
#include <string.h>

void check(char word[], int index);

int main()
{
    char word[100];
    printf("Enter a string to check if it is a palindrome: ");
    scanf("%s", word);

    check(word, 0);

    return 0;
}

void check(char word[], int index)
{
    int len = strlen(word) - (index + 1);

    if (word[index] == word[len])
    {
        if (index + 1 >= len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        check(word, index + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}
