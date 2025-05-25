/**
 * Title: Selection Sort Implementation
 * Author: Rushikesh Padaki
 * Date: 25 May 2025
 *
 * Description:
 * A C program that implements the selection sort algorithm to sort an array of integers in ascending order.
 * - The selection sort algorithm selects the smallest element from the unsorted part and swaps it with the first unsorted element.
 * - In-place sorting, stable for small datasets.
 *
 * Algorithm:
 * 1. Read number of elements 'n' and initialize array.
 * 2. For each position 'i' from 0 to n-2:
 *    a. Set 'min' = i
 *    b. For each position 'j' from i+1 to n-1:
 *       - If arr[j] < arr[min], set min = j
 *    c. If min ≠ i, swap arr[i] and arr[min]
 * 3. Print the sorted array.
 *
 * Time Complexity:
 * - Best Case: O(n²)
 * - Average Case: O(n²)
 * - Worst Case: O(n²)
 *
 * Space Complexity:
 * - O(1) — Sorting is done in-place.
 *
 * Sample Execution:
 *
 * Case 1:
 * Input:
 * Enter the number of elements: 5
 * Enter element 1: 34
 * Enter element 2: 12
 * Enter element 3: 24
 * Enter element 4: 9
 * Enter element 5: 50
 * Output:
 * Sorted list is: 9 12 24 34 50
 *
 * Case 2:
 * Input:
 * Enter the number of elements: 4
 * Enter element 1: 1
 * Enter element 2: 3
 * Enter element 3: 2
 * Enter element 4: 4
 * Output:
 * Sorted list is: 1 2 3 4
 */

#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX], i, j, n, temp, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[min] > arr[j])
                min = j;
        }

        if(i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    // Output the sorted array
    printf("Sorted list is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
