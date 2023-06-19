#include"dog.h"
#include <stddef.h>
/**
 * init_dog - changes struct
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
d->age = age;
d->owner = owner;
}
}
