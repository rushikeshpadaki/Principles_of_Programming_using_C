/**
 * Title: Bubble Sort Implementation
 * Author: Rushikesh Padaki
 * Date: 25 May 2025
 *
 * Description:
 * A C program that sorts an array of integers using the Bubble Sort algorithm.
 * - Repeatedly steps through the array, compares adjacent elements, and swaps them if they are in the wrong order.
 * - After each pass, the largest unsorted element bubbles to its correct position.
 *
 * Algorithm:
 * 1. Read array size 'n' and the array elements from the user.
 * 2. Perform (n - 1) passes over the array.
 * 3. For each pass 'i' from 1 to n - 1:
 *    a. Compare adjacent elements 'a[j]' and 'a[j+1]'.
 *    b. Swap if 'a[j] > a[j+1]'.
 * 4. After all passes, the array is sorted in ascending order.
 * 5. Print the sorted array.
 *
 * Time Complexity:
 * - Best Case: O(n)    (when array is already sorted, can be optimized)
 * - Average Case: O(n²)
 * - Worst Case: O(n²)
 *
 * Space Complexity:
 * - O(1) — In-place sorting with constant auxiliary space.
 *
 * Sample Execution:
 *
 * Case 1:
 * Input:
 * Enter the size of n: 5
 * Enter the array elements: 12 5 7 3 9
 * Output:
 * The sorted array is: 3 5 7 9 12
 *
 * Case 2:
 * Input:
 * Enter the size of n: 4
 * Enter the array elements: 20 10 30 5
 * Output:
 * The sorted array is: 5 10 20 30
 */

#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX], n, i, j, temp;

    printf("Enter the size of n: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Bubble Sort Algorithm
    for(i = 1; i < n; i++)  // n-1 passes
    {
        for(j = 0; j < n - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("The sorted array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
