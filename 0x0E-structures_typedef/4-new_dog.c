#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - fu
 * @name: in
 * @age: in
 * @owner: in
 * Return: pointer
*/


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (!name || age < 0 || !owner)
		return (NULL);

	newdog = (dog_t *) malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	newdog->name = malloc(strlen(name) + 1);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(strlen(owner) + 1);
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;
	newdog->name = strcpy(newdog->name, name);
	newdog->owner = strcpy(newdog->owner, owner);

	return (newdog);
}
