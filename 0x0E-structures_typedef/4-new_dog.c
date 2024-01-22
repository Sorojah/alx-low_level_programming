#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
char *new_name, *new_owner;

if (name == NULL || owner == NULL)
return (NULL);

doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);

new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(doggo);
return (NULL);
}

new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(doggo);
return (NULL);
}

strcpy(new_name, name);
strcpy(new_owner, owner);

doggo->name = new_name;
doggo->age = age;
doggo->owner = new_owner;

return (doggo);
}
