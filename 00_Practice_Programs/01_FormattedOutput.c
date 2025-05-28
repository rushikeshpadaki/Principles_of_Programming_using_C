/**
 * Title: Escape Sequences and Formatted Output in C
 * Author: Rushikesh Padaki
 * Date: 27 May 2025
 *
 * Description:
 * This program demonstrates various escape sequences using the printf() function in C.
 * It prints different types of formatted outputs like newline, tabs, quotes, alert sound,
 * percent symbols, backslashes, and vertical tabs, showcasing how these escape sequences behave.
 *
 * Algorithm:
 * 1. Each printf() call is used to print a specific formatted string.
 * 2. Escape sequences like \n, \t, \", \\, \a, \v, and %% are used accordingly.
 * 3. Inline comments explain the intent of each line.
 *
 * Time Complexity:
 * - O(1) for each printf() call
 *
 * Space Complexity:
 * - O(1)
 *
 * Sample Execution:
 *
 * Have a Good day!
 *
 * Have /\a /\Good /\day!
 *
 * Laughter is the best "Medicine" .Share the "Knowledge"
 *
 * Hello
 *  world!
 *
 * Hello
 *        world!
 *
 * How are you?
 * I am Fine.
 *
 * How    are    you?
 * I       am     Fine.
 *
 * How    are    you?
 * I       am     Fine
 * Thank   You
 *
 * Something has gone crazy
 *
 * Bank interest is 9% in the year 2018.
 */

#include <stdio.h>

int main()
{
    // a) Basic greeting message followed by a newline
    printf("Have a Good day!\n\n");

    // b) Prints forward slashes and backslashes before each word.
    // Double backslashes are used to print a single backslash.
    printf("Have /\\a /\\Good /\\day!\n\n");

    // c) Prints a sentence with quoted words using \" to include double quotes in output.
    printf("Laughter is the best \"Medicine\" .Share the \"Knowledge\"\n\n");

    // d) Prints two words on separate lines using newline character (\n)
    printf("Hello\n world!\n\n");

    // e) Uses vertical tab (\v), which may vertically space depending on terminal support
    printf("Hello\vworld!\n\n");

    // f) Prints a two-line conversation using two printf() statements
    printf("How are you?\n");
    printf("I am Fine.\n\n");

    // g) Prints tabbed output using \t between words in each line
    printf("How\tare\tyou?\n");
    printf("I\tam\tFine.\n\n");

    // h) Prints a multi-line conversation in one printf()
    printf("How\tare\tyou?\nI\tam\tFine\nThank\tYou\n\n");

    // i) Produces a beep sound (alert) and a message.
    printf("Something has gone crazy\a\n\n");

    // j) Prints a sentence including a percent sign (%), escaped using %%
    printf("Bank interest is 9%% in the year 2018.\n");

    return 0;
}
