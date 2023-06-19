#include"dog.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
*new_dog -creates new dog
*@age: age of owner
*@name: name of owner
*@owner:user
*Return: 0(success)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t = NULL;

dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
{
	return (NULL);
}
dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
strcpy(dog->name, name);
dog->owner = malloc(strlen(owner) + 1);

	if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}

