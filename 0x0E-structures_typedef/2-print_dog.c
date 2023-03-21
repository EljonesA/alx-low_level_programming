#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the struct dog
 * @d: variable of type struct dog
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
