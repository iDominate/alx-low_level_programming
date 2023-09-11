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

	if (d == NULL)
		return;
	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);
	if (age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", age);
	if (owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);
}
