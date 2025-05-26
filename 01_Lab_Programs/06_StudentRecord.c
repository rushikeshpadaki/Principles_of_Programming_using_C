/**
 * Title: Student Record System Using Structures
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to manage student records using structures.
 * - Takes name, roll number, and 3 subject marks for each student.
 * - Calculates the total average of all students' marks.
 * - Allows the user to search and display details of a student by roll number.
 *
 * Algorithm:
 * 1. Define a structure 'student' with fields: name, roll, and array of 3 marks.
 * 2. Accept number of students 'n'.
 * 3. For each student:
 *    a. Input name, roll number, and 3 subject marks.
 * 4. Calculate total marks for all students and compute class average.
 * 5. Prompt user to enter a roll number and search for that student.
 * 6. If found, print name and individual marks; else print "not found".
 *
 * Time Complexity:
 * - Input and average calculation: O(n)
 * - Roll number search: O(n)
 *
 * Space Complexity:
 * - O(n) — Space used for array of student structures.
 *
 * Sample Execution:
 *
 * Input:
 * Enter the number of students: 2
 * Enter the name of student 1: Alice
 * Enter the roll number of student 1: 101
 * Enter the 3 marks of student 1: 90 85 88
 * Enter the name of student 2: Bob
 * Enter the roll number of student 2: 102
 * Enter the 3 marks of student 2: 78 82 80
 *
 * Output:
 * The Average Marks of 2 Students is: 250.500000
 *
 * Enter the roll number of the student whose details are required: 101
 * The name of the student is: Alice
 * The 3 test scores are: 90.000000 85.000000 88.000000
 */

#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks[3];
} st[60];

int main()
{
    int i, n, rollno;
    float sum = 0, avg;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", st[i].name);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &st[i].roll);

        printf("Enter the 3 marks of student %d: ", i + 1);
        scanf("%f %f %f", &st[i].marks[0], &st[i].marks[1], &st[i].marks[2]);
    }

    // Calculate total marks and average
    for(i = 0; i < n; i++)
    {
        sum += st[i].marks[0] + st[i].marks[1] + st[i].marks[2];
    }

    avg = sum / n;
    printf("\nThe Average Marks of %d Students is: %f\n", n, avg);

    // Search student by roll number
    printf("\nEnter the roll number of the student whose details are required: ");
    scanf("%d", &rollno);

    for(i = 0; i < n; i++)
    {
        if(st[i].roll == rollno)
        {
            printf("\nThe name of the student is: %s\n", st[i].name);
            printf("The 3 test scores are: %f %f %f\n", st[i].marks[0], st[i].marks[1], st[i].marks[2]);
            break;
        }
    }

    if(i == n)
    {
        printf("Roll number not found.\n");
    }

    return 0;
}
