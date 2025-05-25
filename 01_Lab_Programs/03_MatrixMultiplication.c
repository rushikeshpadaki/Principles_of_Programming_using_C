/**
 * Title: Matrix Multiplication
 * Author: Rushikesh Padaki
 * Date: 25 May 2025
 *
 * Description:
 * A C program to multiply two matrices after validating their dimensions.
 * - Matrix multiplication is only valid when number of columns of first matrix equals number of rows of second matrix.
 * - Multiplies matrix A (r1 x c1) with matrix B (r2 x c2) to produce result matrix (r1 x c2).
 *
 * Algorithm:
 * 1. Input dimensions for both matrices and validate (c1 == r2).
 * 2. Read matrix A of size r1 x c1 and matrix B of size r2 x c2.
 * 3. Initialize result matrix to 0.
 * 4. For each cell in result[i][j]:
 *    - Compute result[i][j] += A[i][k] * B[k][j] for k in 0 to c1-1.
 * 5. Output the result matrix of size r1 x c2.
 *
 * Time Complexity:
 * - O(r1 * c2 * c1) — For matrix multiplication.
 *
 * Space Complexity:
 * - O(r1 * c2) — Space for result matrix.
 *
 * Sample Execution:
 *
 * Case 1: Valid matrix multiplication
 * Input:
 * Enter rows and columns for first matrix: 2 3
 * Enter rows and columns for second matrix: 3 2
 * Enter elements of matrix 1:
 * 1 2 3
 * 4 5 6
 * Enter elements of matrix 2:
 * 7 8
 * 9 10
 * 11 12
 * Output:
 * Output Matrix:
 * 58 64
 * 139 154
 *
 * Case 2: Invalid matrix multiplication (c1 ≠ r2)
 * Input:
 * Enter rows and columns for first matrix: 2 2
 * Enter rows and columns for second matrix: 3 2
 * Output:
 * Error! Number of columns of first matrix must equal number of rows of second.
 * (Prompts user again for valid dimensions)
 */

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input matrix dimensions
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Validate matrix multiplication condition
    while (c1 != r2)
    {
        printf("Error! Number of columns of first matrix must equal number of rows of second.\n\n");
        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }

    // Input elements of first matrix
    printf("\nEnter elements of matrix 1:\n");
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c1; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("\nEnter elements of matrix 2:\n");
    for(i = 0; i < r2; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix with 0
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            for(k = 0; k < c1; ++k)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result matrix
    printf("\nOutput Matrix:\n");
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}