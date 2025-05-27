/**
 * Title: C Source Code Line Analyzer
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program that reads a C source file ('program_name.c') and analyzes its contents by counting:
 * - Total number of lines
 * - Number of blank lines
 * - Number of comment lines (single-line comments only)
 * - Number of lines ending with a semicolon
 * - Number of non-blank lines
 *
 * Algorithm:
 * 1. Open the file 'program_name.c' in read mode.
 * 2. For each line in the file:
 *    a. Increment 'total_lines'.
 *    b. Skip leading spaces using 'isspace()' and identify if it's blank ('\n' or '\0').
 *    c. If it starts with '//', increment 'comment_lines'.
 *    d. If it ends with a semicolon before newline, increment 'semicolon_end_lines'.
 * 3. Display the final counts.
 *
 * Time Complexity:
 * - O(n) — where n is the number of lines in the file.
 *
 * Space Complexity:
 * - O(1) — uses constant extra space.
 *
 * Sample Execution:
 * (Assuming program.c contains 10 lines with 2 blanks, 3 comments, 5 ending with ;)
 * Output:
 * Total number of lines: 10
 * Total number of comment lines: 3
 * Total number of blank lines: 2
 * Total number of non-blank lines: 8
 * Total number of lines ending with semicolon: 5
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fp = fopen("10_SinglyLinkedList.c", "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    char line[200];
    int total_lines = 0;
    int blank_lines = 0;
    int comment_lines = 0;
    int semicolon_end_lines = 0;

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        total_lines++;

        // Remove leading whitespace
        char *ptr = line;
        while (isspace(*ptr)) ptr++;

        // Check for blank line
        if (*ptr == '\0' || *ptr == '\n')
        {
            blank_lines++;
            continue;
        }

        // Check for comment line
        if (strncmp(ptr, "//", 2) == 0)
        {
            comment_lines++;
        }

        // Check if line ends with semicolon
        size_t len = strlen(line);
        if (len > 1 && line[len - 2] == ';')
        {
            semicolon_end_lines++;
        }
    }

    fclose(fp);

    printf("Total number of lines: %d\n", total_lines);
    printf("Total number of comment lines: %d\n", comment_lines);
    printf("Total number of blank lines: %d\n", blank_lines);
    printf("Total number of non-blank lines: %d\n", total_lines - blank_lines);
    printf("Total number of lines ending with semicolon: %d\n", semicolon_end_lines);

    return 0;
}
