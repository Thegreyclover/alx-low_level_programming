#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Frees the memory allocated for a struct dog.
* @d: Pointer to the struct dog to free.
*
* Description: Checks if the pointer is not NULL before freeing the memory
*              allocated, owner, and the struct itself.
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
