#ifndef DOG_H
#define DOG_H


/**
 * struct dog - str
 * @name: in
 * @age: in
 * @owner: in
 * Description: nkone
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);







#endif
