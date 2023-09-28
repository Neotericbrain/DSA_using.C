#include <stdio.h>
#define N 10 // Define N as 10 which is array size

// function prototype
void display(int arr[], int size);
int insertion(int arr[], int size, int element, int position);
int delete(int arr[], int size, int position);

int main()
{
    int arr[N];
    int size = 0; // initilize size as 0
    int element, position;
    while (1)
    {
        printf("\nSelect a 1, 2, 3 or 4 \n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice \n");
        int choice; // choice is int data type because 1, 2, 3, 4 are the option
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // INSERTION FUNCTION
            if (size == N)

            {
                printf("Array is full, cannot insert.\n");
            }
            else
            {
                printf("Enter the element \n");
                scanf("%d", &element);
                printf("Enter the position (0-%d):", size);
                scanf("%d", &position);

                if (position < 0 || position > size) // position is compared with 0 and size
                {
                    printf("Invalid position\n");
                }
                else
                {
                    size = insertion(arr, size, element, position);
                    printf("Insertion successfull\n");
                }
                break;
            }
        case 2:
            // DELETION
            if (size == 0)
            {
                printf("Array is empty, deletion not possible.\n");
            }
            else
            {
                printf("Enter the position to delete(0-%d)", size - 1);
                scanf("%d", &position);
                if (position < 0 || position >= size) // position is compared with 0 and size
                {
                    printf("Invalid position \n");
                }
                else
                {
                    size = delete (arr, size, position);
                    printf("Deletion successfull\n");
                }
            }
            break;
        case 3:
            // DISPLAY
            if (size == 0)
            {
                printf("Array is empty\n");
            }
            else
            {
                printf("Array elements are :");
                display(arr, size);
            }
            break;
        case 4:
            // EXIT
            return 0;
            break;
        default:
            printf("Invalid position\n");
            break;
        }
    }

    return 0;
}
// insertion into array 1st option
int insertion(int arr[], int size, int element, int position)
{
    for (int i = size; i > position; i--)
    /*  i  = size size is greater than position then do
    array of i ( size ) = array of ( i-1 )    */
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    // array of position = element
    //   ex. array[4]=69 rest refer notes
    return size + 1;
}
// deletion from array 2nd option
int delete(int arr[], int size, int position)
{
    for (int i = position; i < size - 1; i++)
    /*i = position i less than size -1 then do
     array of i = array of i+1*/
    {
        arr[i] = arr[i + 1];
    }
    // ex. array[4]=array[4+1]that is array of
    return size - 1;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
