#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - defines a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name of dog
 *
 * Description: struct called "dog" that contains information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
