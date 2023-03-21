#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - new structure with 3 elements
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
