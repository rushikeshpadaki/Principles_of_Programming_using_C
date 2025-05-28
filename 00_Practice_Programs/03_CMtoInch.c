/**
 * Title: Centimeter to Inch Converter
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program converts a given distance in centimeters to inches.
 * - The user provides input in centimeters.
 * - The program uses the conversion rate: 1 inch = 2.54 cm.
 * - The result is displayed with two decimal places.
 *
 * Algorithm:
 * 1. Define the conversion constant (1 inch = 2.54 cm).
 * 2. Prompt the user to enter a value in centimeters.
 * 3. Convert the value to inches by dividing by 2.54.
 * 4. Print the converted value using printf with formatting.
 *
 * Time Complexity:
 * - O(1)
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 *
 * Case 1:
 * Input:
 * Enter the distance in cm: 10
 * Output:
 * Distance 10.00 cms is = 3.94 inches
 *
 * Case 2:
 * Input:
 * Enter the distance in cm: 25.4
 * Output:
 * Distance 25.40 cms is = 10.00 inches
 */

#include <stdio.h>

#define INCH_TO_CM 2.54

int main()
{
    double inch, cm;

    // Prompt user for input
    printf("Enter the distance in cm: ");
    scanf("%lf", &cm);

    // Convert to inches
    inch = cm / INCH_TO_CM;

    // Output the result
    printf("Distance %0.2lf cms is = %0.2lf inches\n", cm, inch);

    return 0;
}
