/**
 * Title: Dynamic Memory Allocation using calloc
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program that demonstrates dynamic memory allocation using 'calloc'.
 * - Allocates memory for 'n' integers using 'calloc' which initializes all elements to zero.
 * - Takes user input for array elements and computes their sum.
 * - Deallocates memory using 'free'.
 *
 * Algorithm:
 * 1. Read number of elements 'n' from the user.
 * 2. Allocate memory using 'calloc' which initializes all bytes to 0.
 * 3. Verify successful memory allocation.
 * 4. Read 'n' integers into the array and simultaneously calculate their sum.
 * 5. Print the sum.
 * 6. Free the allocated memory.
 *
 * Time Complexity:
 * - O(n) — To read and sum all elements.
 *
 * Space Complexity:
 * - O(n) — For dynamic memory allocation.
 *
 * Sample Execution:
 *
 * Case 1:
 * Input:
 * Enter number of elements: 4
 * Enter elements: 1 2 3 4
 * Output:
 * Sum = 10
 *
 * Case 2:
 * Input:
 * Enter number of elements: 3
 * Enter elements: 5 10 15
 * Output:
 * Sum = 30
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc and initialize to 0
    ptr = (int*) calloc(n, sizeof(int));

    // Check allocation
    if (ptr == NULL)
    {
        printf("Error! Memory not allocated.\n");
        exit(0);
    }

    // Input elements
    printf("Enter elements: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    // Output sum
    printf("Sum = %d\n", sum);

    // Free memory
    free(ptr);

    return 0;
}
