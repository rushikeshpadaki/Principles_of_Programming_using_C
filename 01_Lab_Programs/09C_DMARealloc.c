/**
 * Title: Dynamic Memory Reallocation using realloc
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to demonstrate dynamic memory reallocation using 'realloc'.
 * - Allocates memory using 'malloc' for 'n1' elements.
 * - Prints the addresses of initially allocated memory.
 * - Reallocates memory to 'n2' elements using 'realloc'.
 * - Prints the addresses after reallocation.
 * - If 'realloc' fails, frees the original memory to avoid memory leak.
 *
 * Algorithm:
 * 1. Input initial size 'n1' and allocate memory using 'malloc'.
 * 2. If allocation fails, exit with an error.
 * 3. Print addresses of allocated memory.
 * 4. Input new size 'n2' and call 'realloc' to resize memory.
 * 5. If reallocation fails, free old memory and exit.
 * 6. If successful, update pointer and print new memory addresses.
 * 7. Free memory at the end.
 *
 * Time Complexity:
 * - O(n2) — In the worst case, elements from the original block may be copied to a new memory location of size 'n2'.
 *
 * Space Complexity:
 * - O(n2) — The total memory allocated after 'realloc' corresponds to 'n2' elements.
 *
 * Sample Execution:
 *
 * Case 1: Reallocation to a larger size
 * Input:
 * Enter size: 3
 * Enter the new size: 6
 * Output:
 * Addresses of previously allocated memory:
 * 0x5612a01c1b30
 * ...
 * Addresses of newly allocated memory:
 * 0x5612a01c1d40
 * ...
 *
 * Case 2: Reallocation to a smaller size
 * Input:
 * Enter size: 5
 * Enter the new size: 2
 * Output:
 * Memory block shrinks; updated pointer addresses printed
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;

    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int *) malloc(n1 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Addresses of previously allocated memory:\n");
    for (i = 0; i < n1; ++i)
        printf("%p\n", (void *)(ptr + i));  // Cast to void* for standard pointer printing

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // Reallocating the memory
    int *new_ptr = (int *) realloc(ptr, n2 * sizeof(int));
    if (new_ptr == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(ptr); // free old memory if realloc fails
        return 1;
    }

    ptr = new_ptr;

    printf("Addresses of newly allocated memory:\n");
    for (i = 0; i < n2; ++i)
        printf("%p\n", (void *)(ptr + i));

    free(ptr);
    return 0;
}
