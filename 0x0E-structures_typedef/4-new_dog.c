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
	dog_t *new = malloc((sizeof(char) * (strlen(name) + strlen(owner)) + sizeof(float)));

	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
