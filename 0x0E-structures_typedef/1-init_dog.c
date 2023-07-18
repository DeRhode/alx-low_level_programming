#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Write a function that will initialize a
 * variable of type struct dog
 * @d: first entry
 * @name: second entry
 * @age: third entry
 * @owner: last entry
 *
 * Return: Always zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
