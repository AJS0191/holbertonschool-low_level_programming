#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * init_dog - initializes a dog struct with info
 *
 * @d: name of the struct/struct
 * @name:name of the dog/string
 * @age:age of the dog /float
 * @owner:owner of the dog /string
 *
 * Return: VOID
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
