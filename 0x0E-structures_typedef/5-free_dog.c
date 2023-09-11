#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a dog
 *
 * @d: dog pointer
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	free(d);
}
