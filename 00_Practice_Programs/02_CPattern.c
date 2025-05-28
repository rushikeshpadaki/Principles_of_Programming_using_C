/**
 * Title: Pattern Printing using printf() in C
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program prints a fixed pattern using asterisks (*) to the console.
 * - The shape resembles a combination of a rectangle and vertical line.
 * - Demonstrates how to control output using newline characters and spacing.
 *
 * Algorithm:
 * 1. Use a series of printf() statements to manually print each line of the pattern.
 * 2. Each line is crafted using spaces and '*' characters to match the required output.
 *
 * Time Complexity:
 * - O(1) since it uses fixed number of printf() statements
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 *
 *  *****
 *  *   *
 *  *   *
 *  *
 *  *
 *  *
 *  *
 *  *   *
 *  *   *
 *  *****
 */

#include <stdio.h>

int main()
{
    // Print the pattern line-by-line using printf
    printf(" *****\n");    // Top line of 5 stars
    printf(" *   *\n");    // Second line: star, spaces, star
    printf(" *   *\n");    // Third line: same as second
    printf(" *\n");        // Vertical line
    printf(" *\n");
    printf(" *\n");
    printf(" *\n");
    printf(" *   *\n");    // Bottom corner lines
    printf(" *   *\n");
    printf(" *****\n");    // Bottom full line

    return 0;
}
