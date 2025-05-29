/**
 * Title: Demonstration of Logical Error - Misplaced Semicolon in for Loop
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program intends to print the word "loop" three times using a 'for' loop.
 * However, the placement of a semicolon immediately after the 'for' statement creates
 * an empty loop body. The following block executes only once, not as part of the loop.
 *
 * Erroneous Code:
 * int main()
 * {
 *     int i = 0;
 *     // logical error: a semicolon after loop
 *     for(i = 0; i < 3; i++);
 *     {
 *         printf("loop ");
 *         continue;
 *     }
 *     getchar();
 *     return 0;
 * }
 *
 * Identified Error:
 * - Semicolon after 'for(...)' ends the loop prematurely.
 * - 'continue' outside a valid loop body has no effect and may cause warning or error.
 *
 * Error Type:
 * - Logical Error (also may raise Warning or Undefined Behavior)
 *
 * Compiler Error Message (optional):
 * - warning: ‘continue’ statement not within a loop
 *
 * Correction Explanation:
 * - Removed the semicolon after the 'for' statement so the loop body is correctly associated.
 * - Removed 'continue' as it's unnecessary in this context.
 */

// Corrected Code
#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("loop ");
    }

    getchar(); // wait for input to keep the output visible
    return 0;
}
