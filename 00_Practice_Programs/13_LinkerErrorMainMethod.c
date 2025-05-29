/**
 * Title: Demonstration of Linker Error - Incorrect Main Function Declaration
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program is meant to print the value of an integer variable.
 * However, the function is incorrectly declared as 'Main()' instead of the valid entry point 'main()'.
 * C is case-sensitive, and the linker expects the entry function to be named 'main'.
 *
 * Erroneous Code:
 * // C program to illustrate
 * // linker error
 * #include<stdio.h>
 * void Main() // Here Main() should be main()
 * {
 *     int a = 10;
 *     printf("%d", a);
 * }
 *
 * Identified Error:
 * - Function name 'Main()' does not match required 'main()' (case-sensitive).
 *
 * Error Type:
 * - Linker Error
 *
 * Compiler Error Message:
 * - undefined reference to 'main'
 *
 * Correction Explanation:
 * - Renamed 'Main()' to lowercase 'main()', which is the correct entry point for C programs.
 */

// Corrected Code
#include <stdio.h>

int main()
{
    int a = 10;
    printf("%d", a);
    return 0;
}
