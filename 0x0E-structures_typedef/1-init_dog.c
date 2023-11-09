#include <stdio.h>
#include "dog.h"
#include "stdlib.h"
/**
 * init_dog - prototype
 * @d: pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: long description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return ;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
