#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to store a dog's basic information.
 *
 * Description: This structure represents a dog with its basic attributes.
 * It holds pointers to the dog's name and its owner's name, as well as
 * a float representing the dog's age.
 *
 * @name: Pointer to char for dog's name.
 * @age: Float representing the dog's age.
 * @owner: Pointer to char for owner's name.
 */
struct dog
{
char *name;  /* Pointer to char for dog's name */
float age;   /* Float representing the dog's age */
char *owner; /* Pointer to char for owner's name */
};

/* Typedef for struct dog */
typedef struct dog dog_t;

/* Function Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
