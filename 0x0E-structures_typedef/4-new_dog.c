#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 *
 * @name: char* type
 * @age: float type
 * @owner: char* type
 *
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned long int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(strlen(name) + 1);
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
	for (i = 0; i < strlen(name) + 1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	strcpy(dog->owner, owner);
	return (dog);
}
