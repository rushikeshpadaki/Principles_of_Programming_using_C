/**
 * Title: Demonstration of Semantic Error - Assignment to an Expression
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program aims to store the sum of 'a' and 'b' in 'c'. However, it mistakenly
 * attempts to assign a value to the result of an expression ('a + b'), which is not allowed.
 *
 * Erroneous Code:
 * void main()
 * {
 *     int a, b, c;
 *     a + b = c; // semantic error
 * }
 *
 * Identified Error:
 * - Assignment is attempted to an expression ('a + b'), which is not an lvalue.
 *
 * Error Type:
 * - Semantic Error
 *
 * Compiler Error Message:
 * - error: lvalue required as left operand of assignment
 *
 * Correction Explanation:
 * - The correct approach is to assign the result of the expression to a variable:
 *   'c = a + b;'
 */

// Corrected Code
#include <stdio.h>

int main()
{
    int a = 5, b = 3, c;

    c = a + b; // Assign the result of the expression to c
    printf("Sum = %d\n", c);

    return 0;
}
