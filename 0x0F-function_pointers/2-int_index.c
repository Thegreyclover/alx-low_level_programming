#include "function_pointers.h"
/**
* int_index - Searches for an integer in an array.
* @array: Array to be searched.
* @size: Number of elements in the array.
* @cmp: Pointer to the comparison function.
*
* Description: Checks if the array, size, and cmp pointers are not NULL
*              before searching for an integer.
*
* Return: 0
*         If no element matches or if conditions are not met, returns -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
