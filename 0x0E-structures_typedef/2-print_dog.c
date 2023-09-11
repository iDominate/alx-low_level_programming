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

	if (!name)
		name = "(nil)";
	if (!owner)
		owner = "(nil)";
	if (!d)
		return;
	printf("Name: %s\n", name);
	if (!age)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
