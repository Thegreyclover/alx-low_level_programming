#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name using a pointer to a function.
* @name: String to be processed.
* @f: Pointer to the function that processes the name.
*
* Description: Checks if the name and function pointers are not NULL
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
