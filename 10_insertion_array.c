#include <stdio.h>

void display(int arr[], int n)
// Traversal---> visiting every element once
{
  for (int i = 0; i < n; i++)
  {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

int ind_Insertion(int arr[], int size, int element, int capacity, int index)
{
  if (size >= capacity)
  {
    return -1;                               // returns -1 if the size i.e is 101 is greater than 100, returns 1 is the size is not greater than capacity
  }
  for (int i = size - 1; i >= index; i--)    //i is size -1 "if size is 5 then size -1 that 4" that is "i" is index 
  {
    arr[i + 1] = arr[i];                      // "i+1" will store the value which was at "i" so if i =1 that "i  = i+1"
  }
  arr[index] = element;                       // if above for loop is done index is updated with element
  return 1;                                   // and returns 1
}


// USING THIS "return 1, return -1 " WE CAN WRITE 'FAILD INERTION' OR 'SUCCESSFULY INSERTED'


int main()
{
  int arr[100] = {7, 8, 12, 27, 88};        // 100 is max size of this array with 5 elements in it.

  int size, element, index;
  
  printf("Max siz is 100 Enter the size : ");   // Enter the size of array, if you enter value less than 5 it will show those many elements only 
  scanf("%d", &size);
  
  printf("Enter the element : ");      //Enter the number you want to isert 
  scanf("%d", &element);

  printf("Enter the index : ");      // Mention the index
  scanf("%d", &index);

  display(arr, size);          // userdefined function to display array goo see line "3"
  
  ind_Insertion(arr, size, element, 100, index); //2nd userdefined function goo see line "13"
  size += 1;                          // updates the value of size from what you entered in line "34" to x+1
  display(arr, size);            // displays the new array after insertion
  return 0;
}                      //happy coding