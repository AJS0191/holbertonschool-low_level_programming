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
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d->name);
/*		(d->age == NULL)
			printf("Age: (nil)");
		else
*/			printf("Age: %f", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", d->owner);
	}
}
