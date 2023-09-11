#ifndef STRUCT
#define STRUCT
/**
 * struct dog - a dog struct
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: A dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
