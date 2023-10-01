#include <stdio.h>
#include <stdlib.h>

#define N 10

int stack[N];
int top = -1; // Initialize top of the stack to -1

// Function to push an element into the stack
void push(int value)
{
    if (top == N - 1)
    {
        printf("Stack Overflow: Cannot insert more elements.\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow: Cannot remove from an empty stack.\n");
    }
    else
    {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}

// Function to display the current stack contents
void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack contents: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
