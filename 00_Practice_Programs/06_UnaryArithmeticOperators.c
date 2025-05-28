/**
 * Title: Demonstration of Unary Arithmetic Operators in C
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program demonstrates the working of unary arithmetic operators:
 * - Post-increment (a++)
 * - Post-decrement (a--)
 * - Pre-increment (++a)
 * - Pre-decrement (--a)
 *
 * It shows the difference between assigning a variable before and after applying the increment or decrement.
 *
 * Algorithm:
 * 1. Initialize variables a and b.
 * 2. Perform post-increment and assign result.
 * 3. Perform post-decrement and assign result.
 * 4. Perform pre-increment and assign result.
 * 5. Perform pre-decrement and assign result.
 * 6. Print the values after each operation to observe behavior.
 *
 * Time Complexity:
 * - O(1)
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 *
 * a is 11 and res is 10
 * a is 10 and res is 11
 * a is 11 and res is 11
 * a is 10 and res is 10
 */

#include <stdio.h>

int main()
{
    int a = 10, b = 4, res;

    // Post-increment example:
    // res is assigned 10 first, then a becomes 11
    res = a++;
    printf("Post-Increment:\na is %d and res is %d\n\n", a, res);

    // Post-decrement example:
    // res is assigned 11 first, then a becomes 10
    res = a--;
    printf("Post-Decrement:\na is %d and res is %d\n\n", a, res);

    // Pre-increment example:
    // a becomes 11 first, then res is assigned 11
    res = ++a;
    printf("Pre-Increment:\na is %d and res is %d\n\n", a, res);

    // Pre-decrement example:
    // a becomes 10 first, then res is assigned 10
    res = --a;
    printf("Pre-Decrement:\na is %d and res is %d\n", a, res);

    return 0;
}