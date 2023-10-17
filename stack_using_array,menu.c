#include <stdio.h>
#include <stdlib.h> //to use exit(0) function at line 41;

#define Max_size_of_stack 10

int stack[Max_size_of_stack];
int top = -1;
/*
    top = -1 top+1=  -1+1=0
    by doing top= -1 i am using 1st index i.e 0;
*/
void push(int value);
void pop();
void display();

int main()
{
    int choice, value;

    while (1)
    {
        printf("\nStack Operations Menu:\n");
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
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
// INSERTION
void push(int value)
{
    if (top == Max_size_of_stack - 1)
    {
        printf("Stack is full. Cannot push.\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed to the stack.\n", value);
    }
}
// DELETION
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty. Cannot pop.\n");
    }
    else
    {
        printf("%d popped from the stack.\n", stack[top--]);
        // top=top-1 ; print stack[top]; is avoided using stack[top--]
    }
    // item=stack[top] is not written because I need not keep that element and waste a byte, If i delete the element directly its better so top-- OR top-1
}
// DISPLAY
void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
// Happy coding