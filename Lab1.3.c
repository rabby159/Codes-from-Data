#include<stdio.h>


int insertElement(int arr[], int elements, int keyToBeInserted, int size)
{

if (elements >= size)
return elements;

arr[elements] = keyToBeInserted;
return (elements + 1);
}

int main()
{
int array[20] = { 9, 5, 3, 7, 6, 1, 4, 8 };
int size = sizeof(array) / sizeof(array[0]);
int elements = 8;
int i, keyToBeInserted = 8; //sanjida,213902066
printf("Before Insertion: ");
for (i = 0; i < elements; i++)
printf("%d  ", array[i]);

elements = insertElement(array, elements, keyToBeInserted, size);
printf("\nAfter Insertion: ");
for (i = 0; i < elements; i++)
printf("%d  ",array[i]);
return 0;
}

