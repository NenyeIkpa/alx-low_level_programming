#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: type of struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name == NULL ? "(nil)" : d->name,
			d->age, d->owner == NULL ? "(nil)" : d->owner);
}
