/**
 * Title: Demonstration of Relational Operators in C
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program demonstrates the working of relational operators:
 * - Greater than (>)
 * - Greater than or equal to (>=)
 * - Less than (<)
 * - Less than or equal to (<=)
 * - Equal to (==)
 * - Not equal to (!=)
 *
 * It compares two integers and prints appropriate messages based on the result of each comparison.
 *
 * Algorithm:
 * 1. Initialize variables a and b.
 * 2. Use if-else statements to test each relational condition.
 * 3. Display appropriate message for each comparison.
 *
 * Time Complexity:
 * - O(1)
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 * a is greater than b
 * a is greater than or equal to b
 * a is greater than or equal to b
 * a is greater than b
 * a and b are not equal
 * a is not equal to b
 */

#include <stdio.h>

int main()
{
    int a = 10, b = 4;

    // Greater than example
    if (a > b)
        printf("a is greater than b\n");
    else
        printf("a is less than or equal to b\n");

    // Greater than or equal to
    if (a >= b)
        printf("a is greater than or equal to b\n");
    else
        printf("a is lesser than b\n");

    // Less than example
    if (a < b)
        printf("a is less than b\n");
    else
        printf("a is greater than or equal to b\n");

    // Less than or equal to
    if (a <= b)
        printf("a is lesser than or equal to b\n");
    else
        printf("a is greater than b\n");

    // Equal to
    if (a == b)
        printf("a is equal to b\n");
    else
        printf("a and b are not equal\n");

    // Not equal to
    if (a != b)
        printf("a is not equal to b\n");
    else
        printf("a is equal to b\n");

    return 0;
}