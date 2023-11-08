#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a node at the end of the linked list
void insertNode(struct Node **head, int value)
{
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Otherwise, traverse the list to the last node
    struct Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Insert the new node at the end
    current->next = newNode;
}

// Function to delete a node with a specific value from the linked list
void deleteNode(struct Node **head, int value)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;

    // If the head node itself holds the value to be deleted
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the node to be deleted, keeping track of the previous node
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found in the list
    if (temp == NULL)
    {
        printf("Node with value %d not found in the list.\n", value);
        return;
    }

    // Unlink the node from the list and free the memory
    prev->next = temp->next;
    free(temp);
}

// Function to display the linked list
void displayList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);

    printf("Linked List: ");
    displayList(head);

    deleteNode(&head, 2);

    printf("Linked List after deleting 2: ");
    displayList(head);

    return 0;
}
