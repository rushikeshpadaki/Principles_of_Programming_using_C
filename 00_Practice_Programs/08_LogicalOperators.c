/**
 * Title: Demonstration of Logical Operators in C
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program demonstrates the working of logical operators in C:
 * - Logical AND (&&)
 * - Logical OR (||)
 * - Logical NOT (!)
 *
 * It evaluates conditions using these operators and prints whether the
 * condition was satisfied or not.
 *
 * Algorithm:
 * 1. Declare and initialize integers a, b, c, and d.
 * 2. Use logical AND to check if both conditions are true.
 * 3. Use logical OR to check if at least one condition is true.
 * 4. Use logical NOT to check if a is zero.
 *
 * Time Complexity:
 * - O(1)
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 * AND condition not satisfied
 * a is greater than b OR c is equal to d
 * a is not zero
 */

#include <stdio.h>

int main()
{
    int a = 10, b = 4, c = 10, d = 20;

    // Logical AND (&&): true only if both conditions are true
    if (a > b && c == d)
        printf("a is greater than b AND c is equal to d\n");
    else
        printf("AND condition not satisfied\n");

    // Logical OR (||): true if at least one condition is true
    if (a > b || c == d)
        printf("a is greater than b OR c is equal to d\n");
    else
        printf("Neither a is greater than b nor c is equal to d\n");

    // Logical NOT (!): true if condition is false
    if (!a) // checks if a is zero (0 is treated as false, !0 is true)
        printf("a is zero\n");
    else
        printf("a is not zero\n");

    return 0;
}