#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - makes a new dog struct
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a dog struct pointer
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc((sizeof(struct dog)));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = name;

	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;

	new->owner = owner;

	if (new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	return (new);
}
