#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname;
	char *newowner;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);

	newname = malloc(_strlen(name) + 1);
	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newowner = malloc(_strlen(owner) + 1);
	if (newowner == NULL)
	{
		free(newname);
		free(newdog);
		return (NULL);
	}

	_strcpy(newname, name);
	_strcpy(newowner, owner);

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
