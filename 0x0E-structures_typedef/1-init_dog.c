#include "dog.h"

/**
 * intit_dog - fu
 * @d: in
 * @name: in
 * @age: in
 * @owner: in
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
