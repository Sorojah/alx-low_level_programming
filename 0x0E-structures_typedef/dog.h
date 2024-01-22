#ifndef DOG_H
#define DOG_H

/*
 * Struct dog - Represents a dog with a name, age, and owner.
 */
struct dog
{
char *name; /* Pointer to char for dog's name */
float age; /* Float for dog's age */
char *owner; /* Pointer to char for owner's name */
};

/* Typedef for struct dog */
typedef struct dog dog_t;

/*Function Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
