/**
 * Title: Demonstration of Multiple Errors - Syntax, Semantic, and Logical
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * The original code attempts to define macros and perform arithmetic operations,
 * but contains numerous issues, including:
 * - Invalid macro definitions with trailing semicolons
 * - Invalid variable names (e.g., '2yb', 'a-b', 'xy@c')
 * - Misuse of types ('int Float,char;')
 * - Use of undeclared and undefined variables
 * - Assigning values to expressions ('a + b = 1;')
 *
 * Erroneous Code:
 * #include <stdio.h>
 * #define CUBE(Y) (Y)*(Y)*(Y) ;
 * #define SQUARE(Y) (Y)*(Y);
 * int main()
 * {
 *     double Int,y,_y1,2yb,a-b,y3z;
 *     int Float,char,a,b,c,d,xy@c,qa.b;
 *     check it in the question variable names char int,u,_2v,w=t;
 *     a=2,b=3;
 *     a+b;
 *     c=a+b;
 *     a+b=1;
 *     b-a==c;
 *     d=w;
 *     a=CUBE(d);
 *     b=SQUARE(d)
 *     u=d+62;
 *     c=u-1;
 *     u=’y’;
 *     _2v=z;
 *     y3z=CUBE(c);
 *     y=SQUARE(c);
 *     _y1=SQUARE(c)*2;
 *     c=y+u;
 *     return 0;
 * }
 *
 * Identified Errors:
 * - Syntax Errors: invalid variable names ('2yb', 'a-b', 'qa.b', 'xy@c')
 * - Syntax Error: semicolons in macro definitions (leads to incorrect expansion)
 * - Semantic Error: using undeclared variable 'z', 't', 'w'
 * - Logical Error: assignment to expression 'a + b = 1'
 * - Misuse of types: 'int Float,char;' and multiple definitions
 *
 * Error Types:
 * - Syntax, Semantic, Logical, Linker Errors
 *
 * Compiler Error Messages (selected):
 * - error: expected identifier or ‘(’ before numeric constant
 * - error: ‘a’ undeclared
 * - error: lvalue required as left operand of assignment
 * - warning: ‘Float’ redeclared as different kind of symbol
 *
 * Correction Explanation:
 * - Removed invalid variable names
 * - Corrected macro definitions
 * - Used meaningful variable names and defined missing variables
 * - Fixed macro usage
 * - Ensured logical correctness
 */

// Corrected Code
#include <stdio.h>

#define CUBE(Y) ((Y) * (Y) * (Y))
#define SQUARE(Y) ((Y) * (Y))

int main()
{
    int a, b, c, d, u, w;
    double y, _y1, y3z;

    a = 2;
    b = 3;
    c = a + b;          // Valid assignment
    w = 4;              // Defined w to avoid use of undefined variable
    d = w;              // Valid assignment

    a = CUBE(d);        // a = d^3
    b = SQUARE(d);      // b = d^2
    u = d + 62;
    c = u - 1;
    u = 'y';            // ASCII value of character 'y' assigned to u

    y3z = CUBE(c);
    y = SQUARE(c);
    _y1 = SQUARE(c) * 2;

    c = y + u;          // y is double, u is int → implicit cast

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("y = %.2f, _y1 = %.2f, y3z = %.2f\n", y, _y1, y3z);

    return 0;
}
