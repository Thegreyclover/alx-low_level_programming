#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - Prints the information stored in a struct dog.
* @d: Pointer to the struct dog to print.
*
* Description: If the pointer is NULL, the function returns without printing.
*              If the name or owner members are NULL, "(nil)" is printed in their place.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
