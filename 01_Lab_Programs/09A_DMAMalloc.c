/**
 * Title: Dynamic Memory Allocation and Sum Calculation
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program that demonstrates dynamic memory allocation using malloc.
 * - Allocates memory for 'n' integers using 'malloc'.
 * - Takes user input for the elements and calculates their sum.
 * - Frees the allocated memory using 'free()'.
 *
 * Algorithm:
 * 1. Read number of elements 'n' from the user.
 * 2. Allocate memory using 'malloc' and check if it was successful.
 * 3. Read 'n' integers into dynamically allocated memory.
 * 4. Sum the values using pointer arithmetic.
 * 5. Display the total sum.
 * 6. Free the allocated memory.
 *
 * Time Complexity:
 * - O(n) — for reading and summing 'n' elements.
 *
 * Space Complexity:
 * - O(n) — dynamic memory allocation for 'n' integers.
 *
 * Sample Execution:
 *
 * Case 1:
 * Input:
 * Enter number of elements: 5
 * Enter elements: 10 20 30 40 50
 * Output:
 * Sum = 150
 *
 * Case 2:
 * Input:
 * Enter number of elements: 3
 * Enter elements: 7 14 21
 * Output:
 * Sum = 42
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    ptr = (int*) malloc(n * sizeof(int));

    // Check for allocation failure
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }

    // Input elements and calculate sum
    printf("Enter elements: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    // Output result
    printf("Sum = %d\n", sum);

    // Deallocate memory
    free(ptr);

    return 0;
}
