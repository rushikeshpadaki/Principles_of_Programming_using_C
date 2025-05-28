/**
 * Title: Integer Formatting and Output Width Demonstration
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program demonstrates different ways of formatting integer output using 'printf()':
 * - Field width
 * - Precision
 * - Zero-padding
 * - Left/right alignment
 * - Forced sign display
 *
 * Algorithm:
 * 1. Define integer values.
 * 2. Use various 'printf()' format specifiers to observe output behavior.
 * 3. Use fixed and variable width and precision to understand formatting.
 *
 * Time Complexity:
 * - O(1)
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution (actual terminal output should be verified manually):
 * Each line prints 'c', 'a', or 'b' using different formatting rules.
 *  54321
 *      54321
 * 54321
 * 234
 *     234
 * 0000234
 * +0234
 *     +0234
 * +000234
 *   +0234
 * +0234
 * -234
 * -234
 * -0234
 */

#include <stdio.h>

int main()
{
    int a = 234, b = -234, c = 54321;

    printf("%2d\n", c);            // Prints 'c' with minimum width 2 (no effect here)
    printf("%10.2d\n", c);         // Prints 'c' right-aligned in width 10; min 2 digits
    printf("%-10.2d\n", c);        // Prints 'c' left-aligned in width 10

    printf("%-7d\n", a);           // Prints 'a' left-aligned in width 7
    printf("%07.2d\n", a);         // Min 2 digits but padded with 0s to width 7
    printf("%07d\n", a);           // Padded with zeros to width 7

    printf("%+0-9.4d\n", a);       // Left-aligned with sign, precision 4, width 9
    printf("%+09.4d\n", a);        // Zero-padded, sign, width 9, precision 4
    printf("%+07d\n", a);          // Sign, zero-padded to width 7
    printf("%+07.4d\n", a);        // Sign, precision 4 digits, total width 7
    printf("%+-07.4d\n", a);       // Left-aligned, sign, precision 4, width 7

    printf("%-08d\n", b);          // Left-aligned, width 8, negative number
    printf("%-08.2d\n", b);        // Left-aligned, width 8, min 2 digits
    printf("%-8.4d\n", b);         // Left-aligned, width 8, 4-digit precision

    return 0;
}
