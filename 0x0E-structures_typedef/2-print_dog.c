#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - prints the info in a dog struct
 *
 * @d: name of the dog struct being printed
 *
 * Return: VOID
 **/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s", d->name);
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);
	}
}
