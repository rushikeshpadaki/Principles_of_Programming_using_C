/**
 * Title: Singly Linked List Operations - Insert Front, Delete Front, Display
 * Author: Rushikesh Padaki
 * Date: 26 May 2025
 *
 * Description:
 * A C program to implement a singly linked list with the following operations:
 * - Insert a node at the front of the list
 * - Delete a node from the front of the list
 * - Display the contents of the list
 *
 * Algorithm:
 * 1. Create a structure for a node containing an integer and a link pointer.
 * 2. Use dynamic memory allocation for node creation using 'malloc'.
 * 3. To insert at front:
 *    - Create a new node and link it to the current head.
 *    - Update head to the new node.
 * 4. To delete from front:
 *    - If list is empty, print error.
 *    - Else delete head node and update head to the next node.
 * 5. To display:
 *    - Traverse the list and print each node's data.
 *
 * Time Complexity:
 * - Insert Front: O(1)
 * - Delete Front: O(1)
 * - Display: O(n)
 *
 * Space Complexity:
 * - O(n) — Dynamic memory for 'n' nodes
 *
 * Sample Execution:
 *
 * Linked List Operations:
 * 1. Insert Front
 * 2. Delete Front
 * 3. Display the list
 * 4. Exit
 * Enter your choice: 1
 * Enter item to be inserted: 10
 *
 * Enter your choice: 1
 * Enter item to be inserted: 20
 *
 * Enter your choice: 3
 * Contents of linked list:
 * 20    10
 *
 * Enter your choice: 2
 * Deleted node is 20
 *
 * Enter your choice: 3
 * Contents of linked list:
 * 10
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

typedef struct node* NODE;

// Function declarations
NODE getnode();
NODE insert_front(NODE, int);
NODE delete_front(NODE);
void display(NODE);

int main() {
    NODE first = NULL;
    int choice, item;

    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Insert Front\n");
        printf("2. Delete Front\n");
        printf("3. Display the list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item to be inserted: ");
                scanf("%d", &item);
                first = insert_front(first, item);
                break;

            case 2:
                first = delete_front(first);
                break;

            case 3:
                display(first);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

// Allocates a new node
NODE getnode() {
    NODE x = (NODE) malloc(sizeof(struct node));
    if (x == NULL) {
        printf("Node creation error\n");
        exit(0);
    }
    return x;
}

// Inserts a node at the front
NODE insert_front(NODE first, int item) {
    NODE temp = getnode();
    temp->info = item;
    temp->link = first;
    return temp;
}

// Deletes a node from the front
NODE delete_front(NODE first) {
    NODE temp;
    if (first == NULL) {
        printf("Cannot delete. Empty list\n");
        return first;
    }
    temp = first;
    first = first->link;
    printf("Deleted node is %d\n", temp->info);
    free(temp);
    return first;
}

// Displays the list contents
void display(NODE first) {
    NODE temp;
    if (first == NULL) {
        printf("Cannot print. Empty list\n");
        return;
    }
    printf("Contents of linked list:\n");
    temp = first;
    while (temp != NULL) {
        printf("%d\t", temp->info);
        temp = temp->link;
    }
    printf("\n");
}
