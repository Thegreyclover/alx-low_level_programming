#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - Applies a function to each element of an array.
* @array: Array to be processed.
* @size: Number of elements to process.
* @action: Pointer to the function that processes each element.
*
* Description: Checks if the array and action pointers are not NULL
*              before applying the provided function to each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
