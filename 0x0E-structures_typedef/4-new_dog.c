#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Function to create new dog
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Nd = malloc(sizeof(dog_t));
	if (Nd == NULL)
		return NULL;
	Nd->name = malloc(strlen(name) + 1);
	Nd->owner = malloc(strlen(owner) + 1);
	if (Nd->name == NULL || Nd->owner == NULL)
	{
		free(Nd->name);
		free(Nd->owner);
		free(Nd);
		return (NULL);
	}
	strcpy(Nd->name, name);
	Nd->age = age;
	strcpy(Nd->owner, owner);
	return (Nd);
}
