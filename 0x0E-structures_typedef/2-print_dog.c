#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 *
 * @d: dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	name = d->name;
	owner = d->owner;
	age = d->age;

	if (!d)
		return;
	if (name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);
	if (age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", age);
	if (owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);
}
