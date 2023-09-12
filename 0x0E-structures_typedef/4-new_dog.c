#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: thedog's name
 * @age: the dog's age
 * @owner: the dogs owner
 * Return: a point to the new dog's struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog, *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	dog.name = name;
	dog.age = age;
	dog.owner = owner;
	ptr = &dog;
	return (ptr);
}
