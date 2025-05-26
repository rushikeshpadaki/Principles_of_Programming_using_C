/**
 * Title: Binary to Decimal Conversion using Recursion
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to convert a binary number (entered as an integer) into its decimal equivalent using recursion.
 * - The last digit of the binary number is extracted using modulo.
 * - It is multiplied by the power of 2 based on its positional weight (bit index).
 * - This value is added recursively to the result for the remaining digits.
 *
 * Algorithm:
 * 1. Read the binary number as an integer.
 * 2. Define a recursive function 'binary_to_decimal(binum, decnum, bit)':
 *    a. If binum > 0:
 *       - Extract last digit using '% 10'
 *       - Multiply it by '2^bit' and add to decnum
 *       - Recursively call with remaining binum ('binum / 10') and incremented bit
 *    b. Return final decimal value
 * 3. Display the decimal equivalent.
 *
 * Time Complexity:
 * - O(log₁₀(n)) — where n is the binary number (since it's processed digit-by-digit)
 *
 * Space Complexity:
 * - O(log₁₀(n)) — due to recursive call stack
 *
 * Sample Execution:
 *
 * Case 1:
 * Input:
 * Enter the binary number: 1011
 * Output:
 * Binary 1011 in decimal is 11
 *
 * Case 2:
 * Input:
 * Enter the binary number: 11101
 * Output:
 * Binary 11101 in decimal is 29
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Recursive function to convert binary to decimal
int binary_to_decimal(int binum, int decnum, int bit)
{
    int bitwt;

    if (binum > 0)
    {
        bitwt = binum % 10;
        decnum = decnum + bitwt * pow(2, bit);
        binum = binum / 10;
        bit++;
        decnum = binary_to_decimal(binum, decnum, bit); // recursion
    }

    return decnum;
}

int main()
{
    int decimalnum = 0, binarynum, bitweight = 0;

    printf("Enter the binary number: ");
    scanf("%d", &binarynum);

    decimalnum = binary_to_decimal(binarynum, decimalnum, bitweight);

    printf("Binary %d in decimal is %d\n", binarynum, decimalnum);

    return 0;
}
