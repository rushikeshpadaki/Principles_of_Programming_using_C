/**
 * Title: Demonstration of Run-Time Error - Division by Zero
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program attempts to divide an integer 'n' by zero, which causes a run-time error.
 * Division by zero is undefined behavior in C and will result in abnormal termination
 * or a floating point exception.
 *
 * Erroneous Code:
 * #include<stdio.h>
 * void main()
 * {
 *     int n = 9, div = 0;
 *     // wrong logic
 *     // number is divided by 0,
 *     // so this program abnormally terminates
 *     div = n / 0;
 *     printf("resut = %d", div);
 * }
 *
 * Identified Error:
 * - Division by zero ('n / 0') causes the program to crash at run-time.
 *
 * Error Type:
 * - Run-Time Error
 *
 * Compiler Error Message (optional warning):
 * - warning: division by zero [-Wdiv-by-zero]
 * - Floating point exception (core dumped) during execution
 *
 * Correction Explanation:
 * - Added a check to ensure that division only occurs when the denominator is not zero.
 */

// Corrected Code
#include <stdio.h>

int main()
{
    int n = 9, div = 0;

    if (div != 0)
    {
        int result = n / div;
        printf("result = %d", result);
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
