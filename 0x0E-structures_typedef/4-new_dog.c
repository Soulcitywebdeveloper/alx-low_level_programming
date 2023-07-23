#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog with the given name, age, and owner
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the name of the owner
 *
 * Return: pointer to the new dog_t struct, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *new_name = malloc(sizeof(char) * (_strlen(name) + 1));
	char *new_owner = malloc(sizeof(char) * (_strlen(owner) + 1)

	if (new_dog == NULL || new_name == NULL || new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);  /* copy owner string into new_owner */

	new_dog->name = new_name;   /* assign fields in new dog struct */
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);   /* return pointer to new dog struct */
}
