#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
