#include <stdlib.h>
#include "dog.h"
/**
* _strlen - Computes the length of a string.
* @s: String to evaluate.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* *_strcpy - Copies the string pointed by src, and the terminating null byte,
*            to the buffer pointed to by dest.
* @dest: Pointer to the buffer in which the string is copied.
* @src: String to be copied.
*
* Return: The pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int len, i;
len = _strlen(src);
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
* new_dog - Creates a new dog with the specified name, age, and owner.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: Pointer to the new dog (Success), NULL otherwise.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
