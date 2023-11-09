#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure to be used
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: long description for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
