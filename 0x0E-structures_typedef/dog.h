#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog -  user defined data type of dog
 *
 * @name: dog name of type char
 * @age: dog age of type int
 * @owner: dog owner of type char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
