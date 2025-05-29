/**
 * Title: Demonstration of Semantic and Syntax Errors - Improper Declarations and Type Mismatch
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program intends to declare three variables, assign values, take input, and print them.
 * However, there are multiple issues:
 * - Incorrect declaration syntax ('inta' instead of 'int a')
 * - Assigning a float ('5.54') to an integer without a cast
 * - Mixing types in scanf/printf formatting
 *
 * Erroneous Code:
 * int main( )
 * {
 *     inta,b ,c;
 *     a= 5.54;
 *     b =a+2;
 *     scanf( "%d", &c);
 *     printf( "%d %d %d\n",a, b,c);
 *     return 0;
 * }
 *
 * Identified Errors:
 * - Syntax Error: 'inta' is not a valid keyword or declaration
 * - Semantic Error: assigning a float to an int ('a = 5.54')
 * - Potential Input/Output format mismatches
 *
 * Error Type:
 * - Syntax + Semantic Errors
 *
 * Compiler Error Messages:
 * - error: unknown type name ‘inta’
 * - warning: implicit conversion from 'double' to 'int'
 *
 * Correction Explanation:
 * - Changed 'inta' to 'int a, b, c;'
 * - Explicitly casted or truncated float to int
 * - Ensured consistent format specifiers for 'printf' and 'scanf'
 */

// Corrected Code
#include <stdio.h>

int main()
{
    int a, b, c;

    a = (int)5.54;  // or use: a = 5;  // truncates float to int
    b = a + 2;

    printf("Enter an integer value for c: ");
    scanf("%d", &c);

    printf("%d %d %d\n", a, b, c);
    return 0;
}
