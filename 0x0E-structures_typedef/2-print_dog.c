#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: Entry
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Dog Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Dog Age: %.1f\n", d->age);
	printf("Dog Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
