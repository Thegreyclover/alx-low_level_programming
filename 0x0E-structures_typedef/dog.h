
#ifndef DOG_H
#define DOG_H
/**
* struct dog - Represents basic information about a dog.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Description: Defines a structure with members to store a dog's
*              name, age, and owner.
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - Typedef for struct dog.
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
