/**
 * Title: Area Calculator for Triangle, Square, Rectangle, and Circle
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program calculates the area of four different geometric shapes:
 * - Triangle using (1/2) * base * height
 * - Square using side * side
 * - Rectangle using length * breadth
 * - Circle using π * radius²
 *
 * Algorithm:
 * 1. Accept required inputs for each shape from the user.
 * 2. Apply the formula for each respective shape.
 * 3. Display the calculated areas with proper labels.
 *
 * Time Complexity:
 * - O(1) for each shape's calculation
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 *
 * Input:
 * Enter the base and height of triangle:
 * 5 10
 * Enter the side of square:
 * 4
 * Enter the length and breadth of rectangle:
 * 6 3
 * Enter the radius of circle:
 * 7
 *
 * Output:
 * Area of Triangle = 25.00
 * Area of Square = 16.00
 * Area of Rectangle = 18.00
 * Area of Circle = 153.86
 */

#include <stdio.h>

#define PI 3.14

int main()
{
    float base, height, side, length, breadth, radius;
    float area_triangle, area_square, area_rectangle, area_circle;

    // Input for triangle
    printf("Enter the base and height of triangle:\n");
    scanf("%f %f", &base, &height);

    // Input for square
    printf("Enter the side of square:\n");
    scanf("%f", &side);

    // Input for rectangle
    printf("Enter the length and breadth of rectangle:\n");
    scanf("%f %f", &length, &breadth);

    // Input for circle
    printf("Enter the radius of circle:\n");
    scanf("%f", &radius);

    // Area calculations
    area_triangle = 0.5 * base * height;
    area_square = side * side;
    area_rectangle = length * breadth;
    area_circle = PI * radius * radius;

    // Output results
    printf("\nArea of Triangle = %.2f\n", area_triangle);
    printf("Area of Square = %.2f\n", area_square);
    printf("Area of Rectangle = %.2f\n", area_rectangle);
    printf("Area of Circle = %.2f\n", area_circle);

    return 0;
}
