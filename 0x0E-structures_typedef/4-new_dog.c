#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: a new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_p;

	dog_p = (dog_t *) malloc(sizeof(dog_t));

	if (!dog_p)
		return (NULL);
	dog_p->name = name;
	dog_p->age = age;
	dog_p->owner = owner;

	return (dog_p);

}
