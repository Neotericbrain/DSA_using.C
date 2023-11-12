#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE_OF_Q 10

int QUEUE[MAX_SIZE_OF_Q], front = 0, rear = -1, item;
void qinsert();
void qdelete();
void qdisplay();

int main()
{
    while (1)
    {
        printf("\n\nQueue implementation using array\n");
        printf("***********************************\n");
        printf("1.Insert into queue\n");
        printf("2.Delete from queue\n");
        printf("3.Display elements of queue\n");
        printf("4.exit\n");
        printf("Enter your choise\n");
        int choise;
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            qinsert();
            qdisplay();
            break;
        case 2:
            qdelete();
            qdisplay();
            break;
        case 3:
            qdisplay();
            break;
        case 4:
            exit(0);
            break;
        }
    }

    return 0;
}
// ENQUEUE

void qinsert()
{
    if (rear == MAX_SIZE_OF_Q - 1)
    {
        printf("Queue over flow\n");
    }
    else
    {
        printf("Enter the Item to the queue\n");
        scanf("%d", &item);
        rear++;
        QUEUE[rear] = item;
    }
}

// DQUEUE
void qdelete()
{
    if (rear == front - 1)
    {
        printf("Queue under flow\n");
    }
    else if (rear == front)
    {
        printf("This is last element of queue\n");
        printf("Last element is %d\n", QUEUE[front]);
        front = 0;
        rear = -1;
    }
    else
    {
        printf("Deleted element of the queue is %d\n", QUEUE[front]);
        front++;
    }
}
// DISPLAY
void qdisplay()
{
    int i;
    if (rear == front - 1)
    {
        printf("No elements to display\n");
    }
    else
    {
        printf("Elements of the queue are\n");
        for (i = front; i <= rear; i++)
        {
            printf("%d\t\n", QUEUE[i]);
        }
        printf("%d is the Front element\n", QUEUE[front]);
        printf("%d is the rear element\n", QUEUE[rear]);
    }
}