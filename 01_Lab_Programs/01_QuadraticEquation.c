/**
 * Title: Quadratic Equation Solver
 * Author: Rushikesh Padaki
 * Date: 25 May 2025
 *
 * Description:
 * A C program to find the roots of a quadratic or linear equation based on coefficients a, b, and c.
 * - Handles linear cases (a = 0) and special edge cases (no solution, infinite solutions).
 * - Uses discriminant (b² - 4ac) to classify the roots of a quadratic equation.
 * - Supports real and distinct roots, real and equal roots, and complex/imaginary roots.
 *
 * Algorithm:
 * 1. Read coefficients a, b, and c.
 * 2. If a == 0:
 *    a. If b == 0:
 *       i. If c == 0, print "Infinite solutions".
 *       ii. Else, print "No solution".
 *    b. Else, solve as linear equation: root = -c / b.
 * 3. Else (quadratic equation):
 *    a. Compute discriminant: disc = b² - 4ac.
 *    b. If disc > 0 → Two real and distinct roots.
 *    c. If disc == 0 → Two real and equal roots.
 *    d. If disc < 0 → Two complex conjugate roots.
 *
 * Time Complexity:
 * - O(1) — Constant time calculation.
 *
 * Space Complexity:
 * - O(1) — Constant space usage.
 *
 * Sample Execution:
 *
 * Case 1: Real and distinct roots
 * Input:
 * Enter the coefficients (a, b, c): 1 5 6
 * Output:
 * Roots are real and distinct:
 * -2.000000
 * -3.000000
 *
 * Case 2: Real and equal roots
 * Input:
 * Enter the coefficients (a, b, c): 1 4 4
 * Output:
 * Roots are real and equal:
 * -2.000000
 * -2.000000
 *
 * Case 3: Complex/imaginary roots
 * Input:
 * Enter the coefficients (a, b, c): 1 2 5
 * Output:
 * Roots are complex and imaginary:
 * First root: -1.000000 + i2.000000
 * Second root: -1.000000 - i2.000000
 *
 * Case 4: Linear root (a = 0)
 * Input:
 * Enter the coefficients (a, b, c): 0 5 -10
 * Output:
 * Linear root = 2.000000
 *
 * Case 5: No solution (a = 0, b = 0, c ≠ 0)
 * Input:
 * Enter the coefficients (a, b, c): 0 0 7
 * Output:
 * No solution (Contradiction: 7.000000 = 0)
 *
 * Case 6: Infinite solutions (a = 0, b = 0, c = 0)
 * Input:
 * Enter the coefficients (a, b, c): 0 0 0
 * Output:
 * Infinite solutions (0 = 0)
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a, b, c, root, disc, root1, root2;
    printf("\nEnter the coefficients (a, b, c): ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Infinite solutions (0 = 0)\n");
            }
            else
            {
                printf("No solution (Contradiction: %f = 0)\n", c);
            }
        }
        else
        {
            root = -c / b;
            printf("Linear root = %f\n", root);
        }
    }
    else
    {
        disc = b * b - 4 * a * c;

        if (disc > 0)
        {
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);
            printf("\nRoots are real and distinct:\n%f\n%f\n", root1, root2);
        }
        else if (disc == 0)
        {
            root1 = root2 = -b / (2 * a);
            printf("\nRoots are real and equal:\n%f\n%f\n", root1, root2);
        }
        else
        {
            root1 = -b / (2 * a);
            root2 = sqrt(fabs(disc)) / (2 * a);
            printf("\nRoots are complex and imaginary:\n");
            printf("First root: %f + i%f\n", root1, root2);
            printf("Second root: %f - i%f\n", root1, root2);
        }
    }

    return 0;
}