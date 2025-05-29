/**
 * Title: Demonstration of Syntax Error - Missing Semicolon
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program is intended to print the value of the comma expression '(x, y)',
 * which evaluates to the last operand 'y' (i.e., 15). However, it has a missing semicolon.
 *
 * Erroneous Code:
 * #include<stdio.h>
 * void main()
 * {
 *     int x = 10;
 *     int y = 15;
 *     printf("%d", (x, y)) // semicolon missed
 * }
 *
 * Identified Error:
 * - Missing semicolon at the end of the 'printf' statement.
 *
 * Error Type:
 * - Syntax Error
 *
 * Compiler Error Message:
 * - error: expected ‘;’ before ‘}’ token
 *
 * Correction Explanation:
 * - A semicolon must terminate every statement. Added ';' after 'printf(...)'.
 */

// Corrected Code
#include <stdio.h>

int main()
{
    int x = 10;
    int y = 15;
    printf("%d", (x, y)); // Output will be 15
    return 0;
}
