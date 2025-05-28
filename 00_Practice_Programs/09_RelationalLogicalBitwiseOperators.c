/**
 * Title: Demonstration of Relational, Logical, and Bitwise Operators in C
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program demonstrates the working of:
 * - Relational Operators
 * - Logical Operators
 * - Bitwise Operators
 * It evaluates specific expressions involving arithmetic, logical, and bitwise combinations,
 * and prints the results for analysis.
 *
 * Algorithm:
 * 1. Initialize required variables.
 * 2. Evaluate and print each expression from a) to i).
 * 3. Observe the value updates and operator precedence.
 *
 * Time Complexity:
 * - O(1)
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 * Outputs values of each expression a) to i) with variable updates.
 */

#include <stdio.h>

int main()
{
    int a = 5, b = 3, c = 2, d = 4, e = 1;

    // a) a = a + b + c
    a = a + b + c;
    printf("a) a = a + b + c => %d\n", a);  // 5+3+2 = 10

    // Reset a for fresh evaluation
    a = 5;

    // b) d = a + b + c
    d = a + b + c;
    printf("b) d = a + b + c => %d\n", d);  // 5+3+2 = 10

    // c) a = (b + c) * d
    a = (b + c) * d;
    printf("c) a = (b + c) * d => %d\n", a); // (3+2)*10 = 50

    // d) a = a && b || c
    // Here: a=50 (non-zero), b=3 (true), c=2 (true)
    a = a && b || c;
    printf("d) a = a && b || c => %d\n", a); // true && true => true || true => true => 1

    // e) a = !a && b || c! || d && e
    // Syntax error in 'c!' — should be !c
    // Let's rewrite correctly:
    a = (!a && b) || (!c) || (d && e);
    printf("e) a = !a && b || !c || d && e => %d\n", a); // (!1=false && true=false) || (!2=false) || (10 && 1=true) => 1

    // f) a = (b && c)!d — Invalid syntax, needs clarification.
    // Assuming intended as: a = (b && c) != d
    a = (b && c) != d;
    printf("f) a = (b && c) != d => %d\n", a); // b=3, c=2 => (true) != 10 => 1 != 10 => true => 1

    // g) a = a++ + a++
    a = 5;
    a = a++ + a++; // First a=5, a++ = 5; then a=6, a++ = 6 => 5 + 6 = 11, a becomes 7
    printf("g) a = a++ + a++ => %d\n", a);

    // h) b = a++ + a++
    a = 5;
    b = a++ + a++; // a=5 then a=6; so b=5+6=11, a becomes 7
    printf("h) b = a++ + a++ => b=%d, a=%d\n", b, a);

    // i) a = ++a + a++
    a = 5;
    a = ++a + a++; // ++a makes a=6, a++ gives 6, then a=7 => 6+6=12
    printf("i) a = ++a + a++ => %d\n", a);

    return 0;
}
