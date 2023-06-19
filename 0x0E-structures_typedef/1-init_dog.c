#include"dog.h"
#include<stdlib.h>

/**
 * init_dog - changes struct
 * struct dog -init
 *@name: user name
 *@owner: user
 *@age: user age
 *@d: dog
 *Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->owner = owner;
d->age = age;
}
}
