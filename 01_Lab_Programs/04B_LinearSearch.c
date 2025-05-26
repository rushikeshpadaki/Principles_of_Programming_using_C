/**
 * Title: Linear Search in an Array
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to search for an element in an array using the Linear Search algorithm.
 * - Linear Search scans each element sequentially from start to end.
 * - It compares each element with the target value.
 * - Stops when the element is found or the end of array is reached.
 *
 * Algorithm:
 * 1. Read the array size 'n' and 'n' integer elements from the user.
 * 2. Read the element to search ('search').
 * 3. Loop through the array:
 *    a. If 'array[c] == search', print location and break.
 * 4. If loop completes without a match, print "not present".
 *
 * Time Complexity:
 * - Best Case: O(1)
 * - Worst Case: O(n)
 *
 * Space Complexity:
 * - O(1) — Constant space usage.
 *
 * Sample Execution:
 *
 * Case 1: Element is found
 * Input:
 * Enter number of elements in array: 5
 * Enter 5 integer(s): 10 20 30 40 50
 * Enter a number to search: 30
 * Output:
 * 30 is present at location 3.
 *
 * Case 2: Element is not found
 * Input:
 * Enter number of elements in array: 4
 * Enter 4 integer(s): 5 15 25 35
 * Enter a number to search: 10
 * Output:
 * 10 isn't present in the array.
 */

#include <stdio.h>

int main()
{
    int array[100], search, c, n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d integer(s): ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter a number to search: ");
    scanf("%d", &search);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("%d is present at location %d.\n", search, c + 1);
            break;
        }
    }

    if (c == n)
        printf("%d isn't present in the array.\n", search);

    return 0;
}
