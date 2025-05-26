/**
 * Title: Binary Search in a Sorted Array
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to search for an element in a sorted array using the Binary Search algorithm.
 * - Binary Search works only on sorted arrays.
 * - It repeatedly divides the search interval in half.
 * - If the value of the search key is less than the middle item, it continues in the lower half;
 *   otherwise, it continues in the upper half.
 *
 * Algorithm:
 * 1. Input the size of the array 'n' and the array elements in ascending order.
 * 2. Input the element to search for 'search'.
 * 3. Initialize 'low = 0', 'high = n - 1'.
 * 4. While 'low <= high':
 *    a. Compute 'middle = (low + high) / 2'.
 *    b. If 'array[middle] == search', return found.
 *    c. If 'array[middle] < search', search the right half ('low = middle + 1').
 *    d. Else search the left half ('high = middle - 1').
 * 5. If not found, print that the element is not in the list.
 *
 * Time Complexity:
 * - Best Case: O(1)
 * - Average/Worst Case: O(log n)
 *
 * Space Complexity:
 * - O(1) — Constant space usage.
 *
 * Sample Execution:
 *
 * Case 1: Element found
 * Input:
 * Enter number of elements: 5
 * Enter 5 integers (sorted in ascending order): 2 4 6 8 10
 * Enter value to find: 8
 * Output:
 * 8 is found at location 4.
 *
 * Case 2: Element not found
 * Input:
 * Enter number of elements: 4
 * Enter 4 integers (sorted in ascending order): 5 10 15 20
 * Enter value to find: 12
 * Output:
 * Not found! 12 isn't present in the list.
 */

#include <stdio.h>

int main()
{
    int array[100], n, c, search;
    int low, high, middle;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers (sorted in ascending order): ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter value to find: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;
    middle = (low + high) / 2;

    while (low <= high)
    {
        if (array[middle] < search)
            low = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d is found at location %d.\n", search, middle + 1);
            return 0;
        }
        else
            high = middle - 1;

        middle = (low + high) / 2;
    }

    printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
