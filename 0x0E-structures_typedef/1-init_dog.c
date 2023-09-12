#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}