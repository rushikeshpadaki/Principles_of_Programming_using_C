/**
 * Title: GCD and LCM using Recursion
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to compute the GCD and LCM of two numbers using recursive functions.
 * - GCD is calculated using the subtraction-based recursive method.
 * - LCM is computed using recursion with a static variable to find the first common multiple.
 *
 * Algorithm:
 * 1. Read two integers from the user.
 * 2. Call 'find_gcd(n1, n2)':
 *    - If n1 == n2, return n1
 *    - Else recursively subtract the smaller from the larger
 * 3. Call 'find_lcm(n1, n2)':
 *    - Use a static variable to incrementally check for the smallest number divisible by both n1 and n2.
 *
 * Time Complexity:
 * - GCD: O(log(min(n1, n2))) in best case, O(n) in worst (subtraction method)
 * - LCM: Potentially O(lcm) due to brute-force checking
 *
 * Space Complexity:
 * - O(1) — aside from call stack usage
 *
 * Sample Execution:
 *
 * Case 1:
 * Input:
 * Enter two numbers: 18 24
 * Output:
 * GCD of 18 and 24 is: 6
 * LCM of 18 and 24 is: 72
 *
 * Case 2:
 * Input:
 * Enter two numbers: 7 5
 * Output:
 * GCD of 7 and 5 is: 1
 * LCM of 7 and 5 is: 35
 */

#include <stdio.h>

int find_gcd(int, int);
int find_lcm(int, int);

int main()
{
    int num1, num2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = find_gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    if (num1 > num2)
        lcm = find_lcm(num1, num2);
    else
        lcm = find_lcm(num2, num1);

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

// Recursive function to find GCD using subtraction
int find_gcd(int n1, int n2)
{
    if (n1 == n2)
        return n1;

    if (n1 > n2)
        return find_gcd(n1 - n2, n2);
    else
        return find_gcd(n1, n2 - n1);
}

// Recursive function to find LCM
int find_lcm(int n1, int n2)
{
    int temp = 1;

    if (temp % n1 == 0 && temp % n2 == 0)
        return temp;

    temp++;
    return find_lcm(n1, n2);
}
