#include "dog.h"
#include <stdio.h>

/**
 * len - f
 * @s: s
 * Return: l
 */
int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}


/**
 * scpy - f
 * @s: s
 * Return: c
 */
void scpy(char *x, char *y)
{
	int i;
	int l = len(x);

	if (x !== NULL)
	{
	y = malloc((sizeof(x)):
	for (i = 0; i <= l; i++)

}


/**
 * new_dog - create dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dt;

	if (name == NULL || owner == NULL || age < 0.0)
		return (NULL);

	dt->name = name;
	dt->age = age;
	dt->owner = owner
}
