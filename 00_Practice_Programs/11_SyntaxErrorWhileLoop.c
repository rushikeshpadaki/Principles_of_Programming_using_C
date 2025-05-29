/**
 * Title: Demonstration of Syntax Error - Invalid Condition in while()
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program attempts to demonstrate a syntax error caused by using an invalid
 * expression '.' as the condition in a while loop. In C, the condition of 'while()'
 * must be a valid expression that can evaluate to true (non-zero) or false (zero).
 *
 * Erroneous Code:
 * #include<stdio.h>
 * int main(void)
 * {
 *     // while() cannot contain "." as an argument. while(.)
 *     while(.)
 *     {
 *         printf("hello");
 *     }
 *     return 0;
 * }
 *
 * Identified Error:
 * - '.' is not a valid condition expression for 'while'.
 *
 * Error Type:
 * - Syntax Error
 *
 * Compiler Error Message:
 * - error: expected expression before ‘.’ token
 *
 * Correction Explanation:
 * - Replaced the invalid condition '.' with a valid constant (e.g., '1') to create
 *   an infinite loop or used a proper boolean expression as required.
 */

// Corrected Code
#include <stdio.h>

int main(void)
{
    // Infinite loop that will continuously print "hello"
    while (1)
    {
        printf("hello\n");
        break; // To prevent infinite loop in demonstration
    }

    return 0;
}
